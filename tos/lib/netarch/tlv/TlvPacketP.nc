/*
 * Copyright (c) 2006-2007 Rice University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Rice University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL RICE
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * A general Type-Length-Value (TLV) data processor within a packet.
 * This component does not assume any ordering by type among the TLV
 * types in a block of types.  If at most one instance of a type is
 * allowed, access the type via the TlvSingle interface.  If any number
 * of instances are allowed, access the type via the TlvMultiple and
 * TlvList interfaces.
 *
 * @author Ryan Stinnett
 */

#include "Tlv.h"

generic module TlvPacketP() {
  provides {
    interface TlvBlockPacket;
    interface TlvSinglePacket[uint8_t type];
    interface TlvMultiplePacket[uint8_t type];
    interface StaticIndexedIterator<message_t, tlv_key_t> as TlvListPacket[uint8_t type];
    interface Packet;
  }
  uses {
    interface TlvBlock;
    interface TlvSingle[uint8_t type];
    interface TlvMultiple[uint8_t type];
    interface StaticVoidIndexedIterator<tlv_key_t> as TlvList[uint8_t type];
    interface Packet as SubPacket;
  }
}

implementation {

  /********** Function Declarations **********/

  void* preLengthChange(message_t* pkt, uint8_t* trailLen);
  void postLengthChange(message_t* pkt, void* data, uint8_t trailLen);
  uint8_t maxLen();

  /********** TlvBlockPacket **********/

  /**
   * Adds a TLV block at the beginning of a given packet.  Other
   * data is moved to accomidate it.  This must be called on any new TLV
   * block before using any other TLV commands.
   *
   * @param pkt Pointer to the packet.
   * @return SUCCESS if the add completed, ESIZE if there wasn't enough
   *         space.
   */
  command error_t TlvBlockPacket.add(message_t* pkt) {
    uint8_t trailLen = call SubPacket.payloadLength(pkt);
    void* data = call SubPacket.getPayload(pkt, trailLen);
    error_t err;
    if ((err = call TlvBlock.add(data, trailLen, maxLen())) != SUCCESS)
      return err;
    postLengthChange(pkt, data, trailLen);
    return SUCCESS;
  }

  /**
   * Removes a TLV block from the beginning of a given packet. Other
   * data is moved to fill the gap.
   *
   * @param pkt Pointer to the packet.
   */
  command void TlvBlockPacket.remove(message_t* pkt) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    call TlvBlock.remove(data, trailLen);
  }

  /**
   * Returns the length of the entire TLV block, including the block
   * length value itself.
   *
   * @param pkt Pointer to the packet.
   * @return Length of the TLV block.
   */
  command uint8_t TlvBlockPacket.length(message_t* pkt) {
    return call TlvBlock.length(call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)));
  }

  /********** TlvSinglePacket **********/

  /**
   * Returns the length of this type instance within the TLV block.  If
   * the type instance is not found in the block, then 0 is returned.
   *
   * @param pkt Pointer to the packet.
   * @return Length of this TLV type.
   */
  command uint8_t TlvSinglePacket.length[uint8_t type](message_t* pkt) {
    return call TlvSingle.length[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)));
  }

  /**
   * Sets the length of a type instance within the TLV block.  This
   * operation moves data around and should always be performed before
   * storing a value with a different length than the one currently
   * stored.  If the type instance is not found in the block or there
   * is not enough room for the new length, returns ESIZE.
   *
   * @param pkt Pointer to the packet.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if the type instance was found, enough space was
   *         available, and the length was set, ESIZE if there wasn't
   *         enough space, EINVAL if the instance wasn't found.
   */
  command error_t TlvSinglePacket.setLength[uint8_t type](message_t* pkt, uint8_t len) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvSingle.setLength[type](data, len, trailLen, maxLen());
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /**
   * Returns the value in this type instance within the TLV block.  If
   * the type instance is not found in the block, then NULL is returned.
   *
   * @param pkt Pointer to the packet.
   * @return Pointer to the value in this TLV type.
   */
  command void* TlvSinglePacket.value[uint8_t type](message_t* pkt) {
    return call TlvSingle.value[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)));
  }

  /**
   * Adds an instance of a type to the TLV block and sets the initial
   * length of the instance.  This operation moves data around and
   * should always be performed before storing a value of the given
   * type.  The type instance will be added to the block as long as
   * there are at least len + 2 bytes available in the buffer holding
   * the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if enough space was available and the length was
   *         set, EALREADY if an instance already exists, ESIZE if
   *         there wasn't enough space.
   */
  command error_t TlvSinglePacket.add[uint8_t type](message_t* pkt, uint8_t len) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvSingle.add[type](data, len, trailLen, maxLen());
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /**
   * Removes this type instance from the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @return SUCCESS if the type instance was found and removed, EINVAL
   *         otherwise.
   */
  command error_t TlvSinglePacket.remove[uint8_t type](message_t* pkt) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvSingle.remove[type](data, trailLen);
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /********** TlvMultiplePacket **********/

  /**
   * Returns the length of this type instance within the TLV block.  If
   * the type instance is not found in the block, then 0 is returned.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return Length of this TLV type.
   */
  command uint8_t TlvMultiplePacket.length[uint8_t type](message_t* pkt, tlv_key_t key) {
    return call TlvMultiple.length[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)), key);
  }

  /**
   * Sets the length of a type instance within the TLV block.  This
   * operation moves data around and should always be performed before
   * storing a value with a different length than the one currently
   * stored.  If the type instance is not found in the block or there
   * is not enough room for the new length, returns ESIZE.
   *
   * Setting the length of a type instance typically invalidates any
   * keys received prior to the change.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if the type instance was found, enough space was
   *         available, and the length was set, ESIZE if wasn't enough
   *         space, EINVAL if the instance wasn't found.
   */
  command error_t TlvMultiplePacket.setLength[uint8_t type](message_t* pkt, tlv_key_t key,
                                                            uint8_t len) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvMultiple.setLength[type](data, key, len, trailLen, maxLen());
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /**
   * Returns the value in this type instance within the TLV block.  If
   * the type instance is not found in the block, then NULL is returned.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return Pointer to the value in this TLV type.
   */
  command void* TlvMultiplePacket.value[uint8_t type](message_t* pkt, tlv_key_t key) {
    return call TlvMultiple.value[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)), key);
  }

  /**
   * Adds an instance of a type to the TLV block and sets the initial
   * length of the instance.  This operation moves data around and
   * should always be performed before storing a value of the given
   * type.  The type instance will be added to the block as long as
   * there are at least len + 2 bytes available in the buffer holding
   * the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Pointer to store the key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if enough space was available and the length was
   *         set, ESIZE if there wasn't enough space.
   */
  command error_t TlvMultiplePacket.add[uint8_t type](message_t* pkt, tlv_key_t* key,
                                                      uint8_t len) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvMultiple.add[type](data, key, len, trailLen, maxLen());
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /**
   * Removes this type instance from the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return SUCCESS if the type instance was found and removed, EINVAL
   *         otherwise.
   */
  command error_t TlvMultiplePacket.remove[uint8_t type](message_t* pkt, tlv_key_t key) {
    uint8_t trailLen;
    void* data = preLengthChange(pkt, &trailLen);
    error_t err = call TlvMultiple.remove[type](data, key, trailLen);
    postLengthChange(pkt, data, trailLen);
    return err;
  }

  /**
   * Access a list of all instances of a type within the TLV block.
   * This command gives the key for the first such instance.
   * Traverse the rest of the list with the TlvList interface.
   *
   * @param pkt Pointer to the packet.
   * @return The key for the first instance of a type in the TLV
   *         block.
   */
  command tlv_key_t TlvMultiplePacket.list[uint8_t type](message_t* pkt) {
    return call TlvMultiple.list[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)));
  }

  /********** TlvListPacket **********/

  /**
   * Locates the next instance of the type within a TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the current instance of the type.
   * @return The key for the next instance of a type.
   */
  command tlv_key_t TlvListPacket.next[uint8_t type](message_t* pkt, tlv_key_t key) {
    return call TlvList.next[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)), key);
  }

  /**
   * Checks whether you have already reached the end of the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the current instance of the type.
   * @return TRUE if the current item is the end of the list, FALSE otherwise.
   */
  command iterator_end_t TlvListPacket.end[uint8_t type](message_t* pkt, tlv_key_t key) {
    return call TlvList.end[type](call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt)), key);
  }

  /********** Packet **********/

  /**
   * Clear out this packet.  Note that this is a deep operation and
   * total operation: calling clear() on any layer will completely
   * clear the packet for reuse.
   * @param  pkt    the packet to clear
   */
  command void Packet.clear(message_t* pkt) {
    call SubPacket.clear(pkt);
  }

  /**
   * Return the length of the payload of pkt. This value may be less
   * than what maxPayloadLength() returns, if the packet is smaller than
   * the MTU. If a communication component does not support variably
   * sized data regions, then payloadLength() will always return
   * the same value as maxPayloadLength().
   *
   * @param  pkt    the packet to examine
   * @return        the length of its current payload
   */
  command uint8_t Packet.payloadLength(message_t* pkt) {
    uint8_t len = call SubPacket.payloadLength(pkt);
    void* data = call SubPacket.getPayload(pkt, len);
    return len - call TlvBlock.length(data);
  }

  /**
   * Set the length field of the packet. This value is not checked
   * for validity (e.g., if it is larger than the maximum payload
   * size). This command is not used when sending packets, as calls
   * to send include a length parameter. Rather, it is used by
   * components, such as queues, that need to buffer requests to
   * send.  This command allows the component to store the length
   * specified in the request and later recover it when actually
   * sending.
   *
   * @param pkt   the packet
   * @param len   the value to set its length field to
   */
  command void Packet.setPayloadLength(message_t* pkt, uint8_t len) {
    void* data = call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt));
    call SubPacket.setPayloadLength(pkt, len + call TlvBlock.length(data));
  }

  /**
   * Return the maximum payload length that this communication layer
   * can provide. Note that, depending on protocol fields, a given
   * request to send a packet may not be able to send the maximum
   * payload length (e.g., if there are variable length
   * fields). Protocols may provide specialized interfaces for these
   * circumstances.
   *
   * @return   the maximum size payload allowed by this layer
   */
  command uint8_t Packet.maxPayloadLength() {
    // Doesn't account for the TLV block!
    return call SubPacket.maxPayloadLength();
  }

  /**
   * Return a pointer to a protocol's payload region in a packet.
   * If the caller intends to write to the payload region then
   * the <tt>len</tt> parameter must reflect the maximum required
   * length. If the caller (only) wants to read from the payload
   * region, then <tt>len</tt> may be set to the value of
   * payloadLength(). If the payload region is smaller than
   * <tt>len</tt> this command returns NULL. The offset where
   * the payload region starts within a packet is fixed, i.e. for
   * a given <tt>msg</tt> this command will always return the same
   * pointer or NULL.
   *
   * @param msg   the packet
   * @param len   the length of payload required
   * @return      a pointer to the packet's data payload for this layer
   *              or NULL if <tt>len</tt> is too big
   */
  command void* Packet.getPayload(message_t* pkt, uint8_t len) {
    uint8_t* payload = call SubPacket.getPayload(pkt, call SubPacket.payloadLength(pkt));
    uint8_t blockLen;
    if (payload == NULL)
      return NULL;
    blockLen = call TlvBlock.length(payload);
    // Call getPayload again to ensure required length will work
    payload = call SubPacket.getPayload(pkt, len + blockLen);
    if (payload != NULL)
      payload += blockLen;
    return payload;
  }

  /********** Functions **********/

  /**
   * A TLV operation that could change the length of DSR data in the packet is
   * about to occur.  The current TLV length is subtracted away.
   *
   * @param pkt Pointer to the packet.
   * @param trailLen Pointer to store the trailing length in.
   * @return Pointer to the TLV block.
   */
  void* preLengthChange(message_t* pkt, uint8_t* trailLen) {
    void* data;
    *trailLen = call SubPacket.payloadLength(pkt);
    data = call SubPacket.getPayload(pkt, *trailLen);
    *trailLen -= call TlvBlock.length(data);
    call SubPacket.setPayloadLength(pkt, *trailLen);
    return data;
  }

  /**
   * A TLV operation that may have changed the length of DSR data in the packet has
   * just completed.  The current TLV length is added in.
   *
   * @param pkt Pointer to the packet.
   * @param data Pointer to the TLV block.
   * @param trailLen The trailing length.
   */
  void postLengthChange(message_t* pkt, void* data, uint8_t trailLen) {
    call SubPacket.setPayloadLength(pkt, trailLen + call TlvBlock.length(data));
  }

  /**
   * Returns the maximum possible length of TLV block and trailing data.
   *
   * @return The maximum possible length.
   */
  uint8_t maxLen() {
    return call SubPacket.maxPayloadLength();
  }

}
