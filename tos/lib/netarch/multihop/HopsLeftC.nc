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
 * Enforces a limit on the number of hops a packet can travel.
 *
 * @author Ryan Stinnett
 */

#include "HopsLeft.h"

generic module HopsLeftC() {
  provides {
    interface HopsLeft;
    interface AMSend as Send[am_id_t lowerId];
    interface Receive[am_id_t lowerId];
    interface Packet;
  }
  uses {
    interface AMSend as SubSend[am_id_t lowerId];
    interface Receive as SubReceive[am_id_t lowerId];
    interface Packet as SubPacket;
  }
}

implementation {

  /********** HopsLeft **********/

  /**
   * Returns the number of hops left.
   * @param msg Pointer to the packet.
   * @return Number of hops left.
   */
  command uint8_t HopsLeft.get(message_t* msg) {
    return *(hops_left_t*)call SubPacket.getPayload(msg, NULL);
  }

  /**
   * Sets the number of hops left.
   * @param msg Pointer to the packet.
   * @param hopsLeft Number of hops left.
   */
  command void HopsLeft.set(message_t* msg, uint8_t hopsLeft) {
    *(hops_left_t*)call SubPacket.getPayload(msg, NULL) = hopsLeft;
  }

  /********** Send **********/

  /**
   * Send a packet with a data payload of <tt>len</tt> to address
   * <tt>addr</tt>. To determine the maximum available size, use the
   * Packet interface of the component providing AMSend. If send
   * returns SUCCESS, then the component will signal the sendDone
   * event in the future; if send returns an error, it will not
   * signal the event.  Note that a component may accept a send
   * request which it later finds it cannot satisfy; in this case, it
   * will signal sendDone with error code.
   *
   * @param addr   address to which to send the packet
   * @param msg    the packet
   * @param len    the length of the data in the packet payload
   * @return       SUCCESS if the request to send succeeded and a
   *               sendDone will be signaled later, EINVAL if no hops
   *               are left.
   * @see          sendDone
   */
  command error_t Send.send[am_id_t lowerId](am_addr_t addr, message_t* msg, uint8_t len) {
    if (call HopsLeft.get(msg) == 0)
      return EINVAL;
    return call SubSend.send[lowerId](addr, msg, call SubPacket.payloadLength(msg));
  }

  /**
   * Does nothing.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  default event void Send.sendDone[am_id_t lowerId](message_t* msg, error_t error) {
    dbgerror("HopsLeftP", "HL: Trying to use invalid lower id %hhu!\n", lowerId);
  }

  /**
   * Cancel a requested transmission. Returns SUCCESS if the
   * transmission was canceled properly (not sent in its
   * entirety). Note that the component may not know
   * if the send was successfully canceled, if the radio is
   * handling much of the logic; in this case, a component
   * should be conservative and return an appropriate error code.
   * A successful call to cancel must always result in a
   * sendFailed event, and never a sendSucceeded event.
   *
   * @param  msg     the packet whose transmission should be cancelled.
   * @return SUCCESS if the transmission was cancelled, FAIL otherwise.
   * @see    sendDone
   */
  command error_t Send.cancel[am_id_t lowerId](message_t* msg) {
    return call SubSend.cancel[lowerId](msg);
  }

  /**
   * Return the maximum payload length that this communication layer
   * can provide. This command behaves identically to
   * <tt>Packet.maxPayloadLength</tt> and is included in this
   * interface as a convenience.
   *
   * @return the maximum payload length
   */
  command uint8_t Send.maxPayloadLength[am_id_t lowerId]() {
    return call Packet.maxPayloadLength();
  }

  /**
   * Return a pointer to a protocol's payload region in a packet.
   * The length of this region is maxPayloadLength(). This command
   * behaves similarly to <tt>Packet.getPayload</tt> (minus the
   * length parameter) and is included in this interface
   * as a convenience.
   *
   * @param  msg    the packet
   * @return        the payload of the packet
   */
  command void* Send.getPayload[am_id_t lowerId](message_t* msg) {
    return call Packet.getPayload(msg, NULL);
  }

  /********** SubSend **********/

  /**
   * Returns FAIL due to an unsupported lower AM type.
   *
   * @param   addr    address to which to send the packet
   * @param   msg     the packet to send
   * @param   len     the length of the packet payload
   * @return          FAIL
   */
  default command error_t SubSend.send[am_id_t lowerId](am_addr_t addr, message_t* msg, uint8_t len) {
    dbgerror("HopsLeftP", "HL: Trying to use invalid lower id %hhu!\n", lowerId);
    return FAIL;
  }

  /**
   * Signaled in response to an accepted send request. <tt>msg</tt> is
   * the message buffer sent, and <tt>error</tt> indicates whether
   * the send was successful.
   *
   * @param  msg   the packet which was submitted as a send request
   * @param  error SUCCESS if it was sent successfully, FAIL if it was not,
   *               ECANCEL if it was cancelled
   * @see send
   * @see cancel
   */
  event void SubSend.sendDone[am_id_t lowerId](message_t* msg, error_t error) {
    signal Send.sendDone[lowerId](msg, error);
  }

  /********** Receive **********/

  /**
   * Return point to a protocol's payload region in a packet.  If len
   * is not NULL, getPayload will return the length of the payload in
   * it. This call is identical to <TT>Packet.getPayload</TT>, and is
   * included in Receive as a convenience.
   *
   * @param  msg      the packet
   * @param  len      a pointer to where to store the payload length
   * @return          a pointer to the payload of the packet
   */
  command void* Receive.getPayload[am_id_t lowerId](message_t* msg, uint8_t* len) {
    return call Packet.getPayload(msg, len);
  }

  /**
   * Return the length of the payload of msg. This call is identical
   * to <TT>Packet.payloadLength</TT>, and is included in Receive as a
   * convenience.
   *
   * @param  msg      the packet
   * @return          the length of the packet's payload
   */
  command uint8_t Receive.payloadLength[am_id_t lowerId](message_t* msg) {
    return call Packet.payloadLength(msg);
  }

  /**
   * Add a new packet to the buffer from the lower layer.  Unless the
   * buffer is full, this component is off, or the receive pool is empty,
   * the packet will be accepted into the buffer.  An unused packet from
   * the receive pool will be returned to the signaling component.
   *
   * @param  msg      the received packet
   * @param  payload  a pointer to the packet's payload
   * @param  len      the length of the data region pointed to by payload
   * @return          a packet buffer for the stack to use for the next
   *                  received packet.
   */
  default event message_t* Receive.receive[am_id_t lowerId](message_t* msg, void* payload, uint8_t len) {
    dbgerror("HopsLeftP", "HL: Trying to use invalid lower id %hhu!\n", lowerId);
    return msg;
  }

  /********** SubReceive **********/

  /**
   * Receive a packet buffer, returning a buffer for the signaling
   * component to use for the next reception. The return value
   * can be the same as <tt>msg</tt>, as long as the handling
   * component copies out the data it needs.
   *
   * <b>Note</b> that misuse of this interface is one of the most
   * common bugs in TinyOS code. For example, if a component both calls a
   * send on the passed message and returns it, then it is possible
   * the buffer will be reused before the send occurs, overwriting
   * the component's data. This would cause the mote to possibly
   * instead send a packet it most recently received.
   *
   * @param  msg      the receied packet
   * @param  payload  a pointer to the packet's payload
   * @param  len      the length of the data region pointed to by payload
   * @return          a packet buffer for the stack to use for the next
   *                  received packet.
   */
  event message_t* SubReceive.receive[am_id_t lowerId](message_t* msg, void* payload, uint8_t len) {
    hops_left_t* mHL = (hops_left_t*)payload;
    *mHL--; // Decrement hops left
    return signal Receive.receive[lowerId](msg, call Packet.getPayload(msg, &len), len);
  }

  /********** Packet **********/

  /**
   * Clear out this packet.  Note that this is a deep operation and
   * total operation: calling clear() on any layer will completely
   * clear the packet for reuse.
   * @param  msg    the packet to clear
   */
  command void Packet.clear(message_t* msg) {
    call SubPacket.clear(msg);
  }

  /**
   * Return the length of the payload of msg. This value may be less
   * than what maxPayloadLength() returns, if the packet is smaller than
   * the MTU. If a communication component does not support variably
   * sized data regions, then payloadLength() will always return
   * the same value as maxPayloadLength().
   *
   * @param  msg    the packet to examine
   * @return        the length of its current payload
   */
  command uint8_t Packet.payloadLength(message_t* msg) {
    return call SubPacket.payloadLength(msg) - sizeof(hops_left_t);
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
   * @param msg   the packet
   * @param len   the value to set its length field to
   */
  command void Packet.setPayloadLength(message_t* msg, uint8_t len) {
    call SubPacket.setPayloadLength(msg, len + sizeof(hops_left_t));
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
    return call SubPacket.maxPayloadLength() - sizeof(hops_left_t);
  }

  /**
   * Return a pointer to a protocol's payload region in a packet.  If
   * len is not NULL, getPayload will return the length of the payload
   * in it, which is the same as the return value from
   * payloadLength(). If a protocol does not support variable length
   * packets, then *len is equal to maxPayloadLength().
   *
   * @param msg   the packet
   * @param len   pointer to where the current payload length should be stored.
   * @return      a pointer to the packet's data payload for this layer
   */
  command void* Packet.getPayload(message_t* msg, uint8_t* len) {
    uint8_t* payload = call SubPacket.getPayload(msg, len);
    if (len != NULL)
      *len -= sizeof(hops_left_t);
    return payload + sizeof(hops_left_t);
  }

}
