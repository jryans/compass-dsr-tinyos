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
 * Access and set the properties of a multihop packet with a single
 * node address based destination.
 *
 * @author Ryan Stinnett
 */

#include "SinglePacket.h"
#include <PacketEngine.h>

module SinglePacketP {
  provides {
    interface SinglePacket;
    interface AMSend as Send[packet_client_id_t clientId];
    interface Receive[am_id_t upperId];
    interface Receive as Snoop[am_id_t upperId];
    interface Intercept[am_id_t upperId];
    interface Packet;
  }
  uses {
    interface AMSend as SubSend[packet_client_id_t clientId];
    interface Receive as SubReceive[am_id_t upperId];
    interface Intercept as SubIntercept[am_id_t upperId];
    interface Packet as SubPacket;
    interface AMPacket;
  }
}

implementation {

  /********** SinglePacket **********/

  /**
   * Returns the address of the source of the multihop packet.
   *
   * @param msg Pointer to the packet.
   * @return The source node of the multihop packet.
   */
  command am_addr_t SinglePacket.source(message_t* msg) {
    return ((single_packet_header_t*)call SubPacket.getPayload(msg, sizeof(single_packet_header_t)))->src;
  }

  /**
   * Sets the address of the source of the multihop packet.  As with
   * the AM layer, this is set by the multihop layer, and should not
   * need to be used when sending a packet.  However, buffers or other
   * storage components may wish to use it to store the address for
   * later retrieval.
   *
   * @param msg Pointer to the packet.
   * @param src The source node of the multihop packet.
   */
  command void SinglePacket.setSource(message_t* msg, am_addr_t src) {
    ((single_packet_header_t*)call SubPacket.getPayload(msg, sizeof(single_packet_header_t)))->src = src;
  }

  /**
   * Returns the address of the destination of the multihop packet.
   *
   * @param msg Pointer to the packet.
   * @return The destination node of the multihop packet.
   */
  command am_addr_t SinglePacket.destination(message_t* msg) {
    return ((single_packet_header_t*)call SubPacket.getPayload(msg, sizeof(single_packet_header_t)))->dest;
  }

  /**
   * Sets the address of the destination of the multihop packet.  As
   * with the AM layer, this is set by the multihop layer, and should not
   * need to be used when sending a packet.  However, buffers or other
   * storage components may wish to use it to store the address for
   * later retrieval.
   *
   * @param msg Pointer to the packet.
   * @param dest The destination node of the multihop packet.
   */
  command void SinglePacket.setDestination(message_t* msg, am_addr_t dest) {
    ((single_packet_header_t*)call SubPacket.getPayload(msg, sizeof(single_packet_header_t)))->dest = dest;
  }

  /**
   * As with the AM layer, returns whether this node is the destination
   * for the packet, but can also include special processing for broadcast
   * addresses or similar values.
   *
   * @param msg Pointer to the packet.
   * @return Whether this node is the destination of the multihop packet.
   */
  command bool SinglePacket.isForMe(message_t* msg) {
    return (call SinglePacket.destination(msg) == call AMPacket.address() ||
            call SinglePacket.destination(msg) == AM_BROADCAST_ADDR);
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
  command error_t Send.send[packet_client_id_t clientId](am_addr_t addr, message_t* msg,
                                                         uint8_t len) {
    dbg("SinglePacketP", "SP: Sending pkt from %u to %u\n", call AMPacket.address(), addr);
    // Copy source and destination addresses
    call SinglePacket.setSource(msg, call AMPacket.address());
    call SinglePacket.setDestination(msg, addr);
    call Packet.setPayloadLength(msg, len);
    return call SubSend.send[clientId](addr, msg, call SubPacket.payloadLength(msg));
  }

  /**
   * Does nothing.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  default event void Send.sendDone[packet_client_id_t clientId](message_t* msg, error_t error) {
    dbgerror("SinglePacketP", "SP: Trying to use invalid client id %hhu!\n", clientId);
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
  command error_t Send.cancel[packet_client_id_t clientId](message_t* msg) {
    return call SubSend.cancel[clientId](msg);
  }

  /**
   * Return the maximum payload length that this communication layer
   * can provide. This command behaves identically to
   * <tt>Packet.maxPayloadLength</tt> and is included in this
   * interface as a convenience.
   *
   * @return the maximum payload length
   */
  command uint8_t Send.maxPayloadLength[packet_client_id_t clientId]() {
    return call Packet.maxPayloadLength();
  }

  /**
   * Return a pointer to a protocol's payload region in a packet which
   * at least a certain length.  If the payload region is smaller than
   * the len parameter, then getPayload returns NULL. This command
   * behaves identically to <tt>Packet.getPayload</tt> and is
   * included in this interface as a convenience.
   *
   * @param msg   the packet
   * @param len   the length of payload required
   * @return      a pointer to the packet's data payload for this layer
   *              or NULL if <tt>len</tt> is too big
   */
  command void* Send.getPayload[packet_client_id_t clientId](message_t* msg, uint8_t len) {
    uint8_t* payload = call SubSend.getPayload[clientId](msg, len + sizeof(single_packet_header_t));
    if (payload != NULL)
      payload += sizeof(single_packet_header_t);
    return payload;
  }

  /********** SubSend **********/

  /**
   * Returns FAIL due to an unsupported upper AM type.
   *
   * @param   addr    address to which to send the packet
   * @param   msg     the packet to send
   * @param   len     the length of the packet payload
   * @return          FAIL
   */
  default command error_t SubSend.send[packet_client_id_t clientId](am_addr_t addr,
                                                                    message_t* msg,
                                                                    uint8_t len) {
    dbgerror("SinglePacketP", "SP: Trying to use invalid client id %hhu!\n", clientId);
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
  event void SubSend.sendDone[packet_client_id_t clientId](message_t* msg, error_t error) {
    signal Send.sendDone[clientId](msg, error);
  }

  /**
   * Returns NULL due to an unsupported upper AM type.
   *
   * @param   msg     the packet to send
   * @param   len     the length of payload required
   * @return          NULL
   */
  default command void* SubSend.getPayload[packet_client_id_t clientId](message_t* msg, uint8_t len) {
    dbgerror("SinglePacketP", "SP: Trying to use invalid client id %hhu!\n", clientId);
    return NULL;
  }

  /********** Receive **********/

  /**
   * Returns the packet passed in.
   *
   * @param  msg      the received packet
   * @param  payload  a pointer to the packet's payload
   * @param  len      the length of the data region pointed to by payload
   * @return          a packet buffer for the stack to use for the next
   *                  received packet.
   */
  default event message_t* Receive.receive[am_id_t upperId](message_t* msg, void* payload, uint8_t len) {
    dbg("SinglePacketP", "SP: No receive connected for upper id %hhu!\n", upperId);
    return msg;
  }

  /********** Snoop **********/

  /**
   * Returns the packet passed in.
   *
   * @param  msg      the received packet
   * @param  payload  a pointer to the packet's payload
   * @param  len      the length of the data region pointed to by payload
   * @return          a packet buffer for the stack to use for the next
   *                  received packet.
   */
  default event message_t* Snoop.receive[am_id_t upperId](message_t* msg, void* payload, uint8_t len) {
    dbg("SinglePacketP", "SP: No snoop connected for upper id %hhu!\n", upperId);
    return msg;
  }

  /********** Intercept **********/

  /**
   * Returns TRUE because the default action should be to continue with the forward.
   *
   * @param msg The complete message received.
   * @param payload The payload portion of the packet for this
   * protocol layer.
   * @param len The length of the payload buffer.
   * @return TRUE to indicate that the packet should be forwarded.
   */
  default event bool Intercept.forward[am_id_t upperId]
                                      (message_t* msg, void* payload, uint16_t len) {
    dbg("SinglePacketP", "SP: No intercept connected for upper id %hhu!\n", upperId);
    return TRUE;
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
  event message_t* SubReceive.receive[am_id_t upperId](message_t* msg, void* payload, uint8_t len) {
    len = call Packet.payloadLength(msg);
    if (call SinglePacket.isForMe(msg)) {
      dbg("SinglePacketP", "SP: Received pkt from %u to %u\n",
          call SinglePacket.source(msg), call SinglePacket.destination(msg));
      return signal Receive.receive[upperId](msg, call Packet.getPayload(msg, len), len);
    } else {
      dbg("SinglePacketP", "SP: Snooped pkt from %u to %u\n",
          call SinglePacket.source(msg), call SinglePacket.destination(msg));
      return signal Snoop.receive[upperId](msg, call Packet.getPayload(msg, len), len);
    }
  }

  /********** SubIntercept **********/

  /**
   * Signals that a message has been received, which is supposed to be
   * forwarded to another destination.
   *
   * @param msg The complete message received.
   * @param payload The payload portion of the packet for this
   * protocol layer.
   * @param len The length of the payload buffer.
   * @return TRUE indicates the packet should be forwarded, FALSE
   * indicates that it should not be forwarded.
   */
  event bool SubIntercept.forward[am_id_t upperId](message_t* msg, void* payload, uint16_t len) {
    len = call Packet.payloadLength(msg);
    dbg("SinglePacketP", "SP: Intercepted pkt from %u to %u\n",
        call SinglePacket.source(msg), call SinglePacket.destination(msg));
    return signal Intercept.forward[upperId](msg, call Packet.getPayload(msg, len), len);
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
    return call SubPacket.payloadLength(msg) - sizeof(single_packet_header_t);
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
    call SubPacket.setPayloadLength(msg, len + sizeof(single_packet_header_t));
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
    return call SubPacket.maxPayloadLength() - sizeof(single_packet_header_t);
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
  command void* Packet.getPayload(message_t* msg, uint8_t len) {
    uint8_t* payload = call SubPacket.getPayload(msg, len + sizeof(single_packet_header_t));
    if (payload != NULL)
      payload += sizeof(single_packet_header_t);
    return payload;
  }

}
