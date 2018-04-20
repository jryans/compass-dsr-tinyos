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
 * LIMITED TO, THE IMPLIED WARRANTIES OF PERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIPED.  IN NO EVENT SHALL RICE
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREPENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Queues packets sent, received, and overheard for a multihop routing
 * protocol.  This "packet engine" is intended to be flexible enough to
 * support a wide array of possible protocols.
 *
 * A control component using the PacketEngine interfaces provided here
 * is notified of and can control all of the above packets, while not
 * having to deal with packet management issues itself.
 *
 * At any time after being notified of a packet's reception, the control
 * component can modify the packet (if needed) and then instruct this engine
 * to take one of the following actions:
 *   - Send (pass to lower layer)
 *   - Send with Intercept (pass to lower layer if upper layer approves)
 *   - Receive (pass to upper layer)
 *   - Drop (silently remove)
 *
 * Note that this allows for some unusual actions to take place, such as
 * forcing a receive on a packet the upper layer has sent (which also
 * means it won't go on the radio anymore).
 *
 * The control component is responsible for ensuring the packet is valid
 * if it makes any modifications.  For example, it must update the payload
 * length if the size of the payload changes.
 *
 * This component does not request acknowledgements or use any kind of
 * automatic retry scheme.  However, the return value of the
 * PacketEngine.sendDone event allows the control component to request
 * a retry for any packet that failed to send.  The control component or
 * the upper layer is certainly free to request acknowledgments on its own.
 *
 * When disabled, no new packets are accepted into the buffer and the
 * packets already in the buffer are not processed but do remain in
 * the buffer.  Processing resumes when enabled again.
 *
 * The AM type of packets sent from the upper layer is copied into the
 * packet payload for storage so that multihop protocols can use AM types
 * of their own without collisions.
 *
 * Based on TransceiverM by David Moss, CtpForwardingEngineP by Phil Levis,
 * Kyle Jamieson, Omprakash Gnawali, and Rodrigo Fonseca, and
 * ForwardingEngineM by Roamin Thouvenin.
 *
 * @author Ryan Stinnett
 */

#include "PacketEngine.h"

module PacketEngineP {
  provides {
    interface Init;
    interface StdControl;
    interface AMSend as Send[packet_client_id_t clientId];
    interface Receive[am_id_t upperId];
    interface Intercept[am_id_t upperId];
    interface Packet;
    interface PacketEngine[am_id_t lowerId];
    interface IndexedIterator<packet_id_t> as PacketWaitList[am_id_t lowerId];
    interface Equal<packet_send_entry_t*> as SendQueueEqual;
  }
  uses {
    interface SplitControl as RadioControl;
    interface AMSend as SubSend[am_id_t lowerId];
    interface Receive as SubReceive[am_id_t lowerId];
    interface Packet as SubPacket[am_id_t lowerId];
    interface Packet as SubSendPacket;
    interface PacketEngineClient[packet_client_id_t clientId];
    interface AMPacket;
    interface DataCache<packet_send_entry_t> as SendQueue;
    interface Pool<message_t> as SendPool;
    interface Pool<message_t> as ReceivePool;
    interface State as SendState;
    interface Random;
    interface Timer<TMilli> as SendBackoff;
  }

  enum {
    SEND_CLIENT_SIZE = uniqueCount(UQ_PACKET_ENGINE_CLIENT),
    SEND_SIZE = PACKET_ENGINE_SEND_SIZE,
    RECEIVE_SIZE = PACKET_ENGINE_RECEIVE_SIZE,
    BUFFER_SIZE = SEND_SIZE + RECEIVE_SIZE
  };
}

implementation {

  /********** Variables **********/

  // Each packet in the buffer has an associated entry
  typedef struct {
    unsigned state    : 5; // Current packet state
    unsigned srcLayer : 1; // Whether packet came from the upper or lower layer
    message_t *msg;
  } msg_entry_t;

  // Values used in msg_entry_t.state
  enum {
    // A new packet can be stored here
    PKT_FREE           = 1 << 0,
    // New packet but haven't notified control yet
    PKT_ADDED          = 1 << 1,
    // Packet waiting until control makes a decision
    PKT_WAIT           = 1 << 2,
    // Send the packet
    PKT_SEND           = 1 << 3,
    // Send the packet, but ask the upper layer first
    PKT_SEND_INTERCEPT = 1 << 4
  };

  // Values used in msg_entry_t.srcLayer
  enum {
    // Packet came from the upper layer
    PKT_UPPER_LAYER,
    // Packet came from the lower layer
    PKT_LOWER_LAYER
  };

  // Send states
  enum {
    S_IDLE,
    S_SENDING,
    S_BACKOFF
  };

  // Circular buffer of packets
  msg_entry_t msgBuffer[BUFFER_SIZE];

  // Index of the next free packet
  packet_id_t nextFreePkt;

  // Index of the next added packet to be sent to control
  packet_id_t nextAddedPkt;

  // Index of the next packet waiting for control
  packet_id_t nextWaitPkt;

  // Index of the next packet that needs action to be taken
  packet_id_t nextActionPkt;

  // TRUE if this component is on, FALSE if it's off
  bool running;

  // TRUE if the radio is on, FALSE if it's off
  bool radioOn;

  /********** Function Declarations **********/

  void moveFreeIndex();
  void moveAddedIndex();
  void moveWaitIndex();
  void moveActionIndex();
  void moveIndex(packet_id_t* idx, uint8_t state);
  void printIndices();
  void addPacket(message_t* msg);
  void markPacket(packet_id_t pid, uint8_t state);
  void removePacket(packet_id_t pid);
  void startSendBackoff(uint16_t mask, uint16_t offset);
  am_id_t uid(message_t* msg);
  void setUid(message_t* msg, am_id_t newUid);
  am_id_t lid(message_t* msg);
  void setLid(message_t* msg, am_id_t newLid);
  void setIds(message_t* msg, packet_client_id_t clientId);
  task void msgAdded();
  task void msgAction();

  /********** Init **********/

  command error_t Init.init() {
    packet_id_t i;
    for (i = 0; i < BUFFER_SIZE; i++)
      msgBuffer[i].state = PKT_FREE;
    nextFreePkt = 0;
    nextAddedPkt = BUFFER_SIZE;
    nextWaitPkt = BUFFER_SIZE;
    nextActionPkt = BUFFER_SIZE;
    running = FALSE;
    return SUCCESS;
  }

  /********** StdControl **********/

  command error_t StdControl.start() {
    running = TRUE;
    // Run any tasks that have work to do
    if (nextAddedPkt < BUFFER_SIZE)
      post msgAdded();
    if (nextActionPkt < BUFFER_SIZE)
      post msgAction();
    return SUCCESS;
  }

  command error_t StdControl.stop() {
    running = FALSE;
    return SUCCESS;
  }

  /********** RadioControl **********/

  event void RadioControl.startDone(error_t err) {
    if (err == SUCCESS) {
      radioOn = TRUE;
      call StdControl.start(); // Start when radio turns on
      if (nextActionPkt < BUFFER_SIZE)
        post msgAction();
    }
  }

  event void RadioControl.stopDone(error_t err) {
    if (err == SUCCESS) {
      radioOn = FALSE;
    }
  }

  /********** Send **********/

  /**
   * Add a new packet to the buffer from an upper layer.  The packet is copied
   * into a centrally managed pool, so application do not need to manage their
   * own sent packet storage.  Unless the packet length is too long, the packet
   * will be accepted into the buffer.  Packets waiting to be sent are in a FIFO
   * queue, so a packet may be dropped if needed.  Several packet fields that
   * would be populate at the AM layer are filled in here so that the control
   * component sees the packet as it will be transmitted.
   *
   * @param   addr    address to which to send the packet
   * @param   msg     the packet to send
   * @param   len     the length of the packet payload
   * @return          SUCCESS if the request was accepted and will issue
   *                  a sendDone event, EBUSY if the component cannot accept
   *                  the request now but will be able to later, EOFF
   *                  if the stack is in a state that cannot accept requests
   *                  (e.g., it's off), ESIZE if the packet is too large.
   */
  command error_t Send.send[packet_client_id_t clientId](am_addr_t addr, message_t* msg,
                                                         uint8_t len) {
    packet_send_entry_t sendEntry = {.pid = BUFFER_SIZE, .cid = clientId};
    packet_send_entry_t* sendQueue;
    message_t* poolPkt;
    if (!running)
      return EOFF;
    /* if (nextFreePkt == BUFFER_SIZE) {
      dbgerror("PacketEngineP", "PE: Can't add send packet, buffer is full!\n");
      return EBUSY;
    }
    if (clientToPacketId[clientId] != BUFFER_SIZE) {
      dbgerror("PacketEngineP", "PE: Can't add send packet, this send client is busy!\n");
      return EBUSY;
    } */
    if (len > call Packet.maxPayloadLength()) {
      dbgerror("PacketEngineP", "PE: Can't add send packet, length too long!\n");
      return ESIZE;
    }
    // Add to the send queue, evicting if needed
    sendQueue = call SendQueue.insert(&sendEntry);
    if (call SendPool.empty()) {
      dbgerror("PacketEngineP", "PE: Can't add send packet, pool is empty!\n");
      return EBUSY;
    }
    if (msgBuffer[nextFreePkt].state != PKT_FREE) {
      // Somehow our free packet wasn't free!
      dbgerror("PacketEngineP", "PE: Free packet at %u wasn't free!\n", nextFreePkt);
      return EBUSY;
    }
    // Copy packet to send pool
    poolPkt = call SendPool.get();
    memcpy(poolPkt, msg, sizeof(message_t));
    // Store actual packet ID in queue
    sendQueue->pid = nextFreePkt;
    // Store packet header data
    call Packet.setPayloadLength(poolPkt, len);
    // Set AM types as specified by client
    setIds(poolPkt, clientId);
    // Store the new packet
    dbg("PacketEngineP", "PE: Adding send packet at index %u\n", nextFreePkt);
    msgBuffer[nextFreePkt].srcLayer = PKT_UPPER_LAYER; // Send to pool on remove
    addPacket(poolPkt);
    return SUCCESS;
  }

  /**
   * Does nothing.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  default event void Send.sendDone[packet_client_id_t clientId](message_t* msg, error_t error) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
  }

  /**
   * Cancel a requested transmission. Returns SUCCESS if the
   * transmission was cancelled properly (not sent in its
   * entirety). Note that the component may not know
   * if the send was successfully cancelled, if the radio is
   * handling much of the logic; in this case, a component
   * should be conservative and return an appropriate error code.
   *
   * @param   msg    the packet whose transmission should be cancelled
   * @return         SUCCESS if the packet was successfully cancelled, FAIL
   *                 otherwise
   */
  command error_t Send.cancel[packet_client_id_t clientId](message_t* msg) {
    // TODO: Fix me!
    return FAIL;
  }

  /**
   * Return the maximum payload length that this communication layer
   * can provide. This command behaves identically to
   * <tt>Packet.maxPayloadLength</tt> and is included in this
   * interface as a convenience.
   *
   * @return  the maximum payload length
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
    setIds(msg, clientId); // Set AM types as specified by client
    return call Packet.getPayload(msg, len);
  }

  /********** PacketEngineClient **********/

  /**
   * Returns the upper AM type used by this client above the the packet
   * engine layer.
   * @return The upper AM type.
   */
  default command am_id_t PacketEngineClient.upperType[packet_client_id_t clientId]() {
    dbgerror("PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
    return AM_INVALID_TYPE;
  }

  /**
   * Returns the default lower AM type packets sent by this client should
   * initially be set to.
   * @return The default lower AM type.
   */
  default command am_id_t PacketEngineClient.defaultLowerType[packet_client_id_t clientId]() {
    dbgerror("PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
    return AM_INVALID_TYPE;
  }

  /********** SendQueue **********/

  /**
   * Notification that the given item is about to be evicted due to an insert
   * which was requested when the cache was already full.  Note that this is
   * <b>not</b> signaled on calls of remove.  The pointer passed here should
   * not saved, as it will not longer be vaild once this event returns.
   *
   * @param item Pointer to the data item being evicted.
   */
  event void SendQueue.evicted(packet_send_entry_t* sendQueue) {
    packet_id_t pid = sendQueue->pid;
    dbgerror("PacketEngineP", "PE: Send queue overflow, evicting pkt %hhu!\n", pid);
    call PacketEngine.upperSendDone[lid(msgBuffer[pid].msg)](pid, EBUSY);
    // Packets that entered as send are sent to the pool on removal
    if (call SendPool.put(msgBuffer[pid].msg) == FAIL)
      dbgerror("PacketEngineP", "PE: Send pool already full, leaking packet!\n");
    msgBuffer[pid].state = PKT_FREE;
    if (nextWaitPkt == pid)
      moveWaitIndex(); // Move the index since we're no longer waiting
  }

  /********** SendQueueEqual **********/

  /**
   * Checks whether the packet ID matches.
   *
   * @param a First item to test.
   * @param b Second item to test.
   * @return TRUE if they are equal, FALSE if they are not.
   */
  command bool SendQueueEqual.test(packet_send_entry_t* a, packet_send_entry_t* b) {
    return a->pid == b->pid;
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
    dbgerror("PacketEngineP", "PE: Trying to use invalid upper AM type %hhu!\n", upperId);
    return msg;
  }

  /********** SubReceive **********/

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
  event message_t* SubReceive.receive[am_id_t lowerId](message_t* msg, void* payload, uint8_t len) {
    message_t* poolPkt;
    if (!running)
      return msg;
    if (nextFreePkt == BUFFER_SIZE) {
      dbgerror("PacketEngineP", "PE: Can't add receive/snoop packet, buffer is full!\n");
      return msg;
    }
    if (call ReceivePool.empty()) {
      dbgerror("PacketEngineP", "PE: Can't add receive/snoop packet, pool is empty!\n");
      return msg;
    }
    if (msgBuffer[nextFreePkt].state != PKT_FREE) {
      // Somehow our free packet wasn't free!
      dbgerror("PacketEngineP", "PE: Free packet at %u wasn't free!\n", nextFreePkt);
      return msg;
    }
    // Get a free packet from the pool
    poolPkt = call ReceivePool.get();
    // Store the new packet
    dbg("PacketEngineP", "PE: Adding receive/snoop packet at index %u\n", nextFreePkt);
    msgBuffer[nextFreePkt].srcLayer = PKT_LOWER_LAYER; // Send to pool on remove
    addPacket(msg);
    return poolPkt;
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
    return FAIL;
  }

  /**
   * Signaled in response to an accepted send request. <tt>msg</tt>
   * is the sent buffer, and <tt>error</tt> indicates whether the
   * send was succesful, and if not, the cause of the failure.  Using
   * modified timings from CtpForwardingEngineP.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  event void SubSend.sendDone[am_id_t lowerId](message_t* msg, error_t error) {
    packet_send_action_t sendAct = signal PacketEngine.sendDone[lowerId](nextActionPkt, msg, error);
    call SendState.toIdle();
    if (sendAct == PKT_SEND_RETRY) {
      // Control wants to retry the packet
      dbg("PacketEngineP", "PE: Retrying send for pkt %u\n", nextActionPkt);
      startSendBackoff(SEND_RETRY_WINDOW, SEND_RETRY_OFFSET);
    } else {
      if (sendAct == PKT_SEND_DONE) {
        dbg("PacketEngineP", "PE: Send done for pkt %u\n", nextActionPkt);
        removePacket(nextActionPkt);
      } else {
        dbg("PacketEngineP", "PE: Send moving to wait for pkt %u\n", nextActionPkt);
        msgBuffer[nextActionPkt].state = PKT_WAIT;
        // Update wait index, even if it's currently in use
        dbg("PacketEngineP", "PE: Moved nextWaitPkt from %u", nextWaitPkt);
        nextWaitPkt = nextActionPkt;
        dbg_clear("PacketEngineP", " to %u\n", nextWaitPkt);
        printIndices();
      }
      // Done with current packet
      startSendBackoff(SEND_DONE_WINDOW, SEND_DONE_OFFSET);
      moveActionIndex();
      if (nextActionPkt < BUFFER_SIZE)
        post msgAction(); // More action packets
      else
        dbg("PacketEngineP", "PE: No more action packets\n");
    }
  }

  /********** Packet **********/

  /**
   * Clear out this packet.  Note that this is a deep operation and
   * total operation: calling clear() on any layer will completely
   * clear the packet for reuse.
   * @param  msg    the packet to clear
   */
  command void Packet.clear(message_t* msg) {
    call SubPacket.clear[lid(msg)](msg);
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
    return call SubPacket.payloadLength[lid(msg)](msg) - sizeof(am_id_t);
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
    call SubPacket.setPayloadLength[lid(msg)](msg, len + sizeof(am_id_t));
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
    // TODO: Fix this.
    //return call SubPacket.maxPayloadLength() - sizeof(am_id_t);
    return TOSH_DATA_LENGTH;
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
    uint8_t* payload = call SubPacket.getPayload[lid(msg)](msg, len + sizeof(am_id_t));
    if (payload != NULL)
      payload += sizeof(am_id_t);
    return payload;
  }

  /********** SubPacket **********/

  /**
   * Returns INVALID_PAYLOAD_LENGTH.
   *
   * @param  msg    the packet to examine
   * @return        INVALID_PAYLOAD_LENGTH
   */
  default command uint8_t SubPacket.payloadLength[am_id_t lowerId](message_t* msg) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    return INVALID_PAYLOAD_LENGTH;
  }

  /**
   * Does nothing.
   *
   * @param msg   the packet
   * @param len   the value to set its length field to
   */
  default command void SubPacket.setPayloadLength[am_id_t lowerId](message_t* msg, uint8_t len) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  }

  /**
   * Returns a NULL pointer due to an invalid lower AM type.
   *
   * @param msg   the packet
   * @param len   the length of payload required
   * @return      NULL
   */
  default command void* SubPacket.getPayload[am_id_t lowerId](message_t* msg, uint8_t len) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    return NULL;
  }

  /********** SendBackoff **********/

  /**
   * Release backoff state so that a new packet can be sent.
   */
  event void SendBackoff.fired() {
    call SendState.toIdle();
    if (nextActionPkt < BUFFER_SIZE)
      post msgAction();
  }

  /********** PacketEngine **********/

  /**
   * Drops the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  default event void PacketEngine.sendAdded[am_id_t lowerId](packet_id_t pid, message_t* msg) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    call PacketEngine.drop[lowerId](pid);
  }

  /**
   * Drops the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  default event void PacketEngine.receiveAdded[am_id_t lowerId](packet_id_t pid, message_t* msg) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    call PacketEngine.drop[lowerId](pid);
  }

  /**
   * Drops the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  default event void PacketEngine.snoopAdded[am_id_t lowerId](packet_id_t pid, message_t* msg) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    call PacketEngine.drop[lowerId](pid);
  }

  /**
   * Gets the packet associated with a given ID in the packet engine.
   *
   * @param pid ID of packet to access.
   * @return Pointer to the packet, NULL if the ID is not in use or too large.
   */
  command message_t* PacketEngine.packet[am_id_t lowerId](packet_id_t pid) {
    if (pid >= BUFFER_SIZE || msgBuffer[pid].state == PKT_FREE ||
        lid(msgBuffer[pid].msg) != lowerId)
      return NULL;
    return msgBuffer[pid].msg;
  }

  /**
   * Marks this packet as next in line to be sent.  The packet must be one
   * that was signaled via the added event and cannot be the ID of any
   * arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t PacketEngine.send[am_id_t lowerId](packet_id_t pid) {
    if (pid >= BUFFER_SIZE || msgBuffer[pid].state != PKT_WAIT ||
        lid(msgBuffer[pid].msg) != lowerId)
      return EINVAL;
    dbg("PacketEngineP", "PE: Marking pkt %u to be sent\n", pid);
    markPacket(pid, PKT_SEND);
    return SUCCESS;
  }

  /**
   * Returns PKT_SEND_DONE so that no further action occurs.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet.
   * @param result SUCCESS if it was transmitted successfully, FAIL if
   *               it was not, ECANCEL if it was cancelled by the upper
   *               layer.
   * @return If the packet is no longer needed, return PKT_SEND_DONE. If the
   *         packet should be resent, return PKT_SEND_RETRY.  If the packet
   *         should move back to the wait state, return PKT_SEND_WAIT.
   */
  default event packet_send_action_t PacketEngine.sendDone[am_id_t lowerId](packet_id_t pid,
                                                                            message_t* msg,
                                                                            error_t result) {
    dbgerror("PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
    return SUCCESS;
  }

  /**
   * Marks this packet as next in line to be sent, but allows the upper layer
   * to intercept the packet first.  The packet must be one that was signaled
   * via the added event and cannot be the ID of any arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t PacketEngine.sendIntercept[am_id_t lowerId](packet_id_t pid) {
    if (pid >= BUFFER_SIZE || msgBuffer[pid].state != PKT_WAIT ||
        lid(msgBuffer[pid].msg) != lowerId)
      return EINVAL;
    dbg("PacketEngineP", "PE: Marking pkt %u to be sent or intercepted\n", pid);
    markPacket(pid, PKT_SEND_INTERCEPT);
    return SUCCESS;
  }

  /**
   * Passes this packet to upper layer as a received packet immediately.  The
   * packet must be one that was signaled via the added event and cannot be
   * the ID of any arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t PacketEngine.receive[am_id_t lowerId](packet_id_t pid) {
    message_t* msg = msgBuffer[pid].msg;
    if (pid >= BUFFER_SIZE || msgBuffer[pid].state != PKT_WAIT || lid(msg) != lowerId)
      return EINVAL;
    if (uid(msg) != AM_NO_UPPER_DATA) {
      // Has data for upper layer
      uint8_t len = call Packet.payloadLength(msg);
      void* payload = call Packet.getPayload(msg, len);
      dbg("PacketEngineP", "PE: Passing pkt %u to upper layer\n", pid);
      msgBuffer[pid].msg = signal Receive.receive[uid(msg)](msg, payload, len);
    }
    removePacket(pid);
    if (nextWaitPkt == pid)
      moveWaitIndex(); // Move the index since we're no longer waiting
    return SUCCESS;
  }

  /**
   * Drops the packet from the buffer immediately.  The packet must be one
   * that was signaled via the added event and cannot be the ID of any
   * arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t PacketEngine.drop[am_id_t lowerId](packet_id_t pid) {
    if (pid >= BUFFER_SIZE || msgBuffer[pid].state != PKT_WAIT ||
        lid(msgBuffer[pid].msg) != lowerId)
      return EINVAL;
    dbg("PacketEngineP", "PE: Dropping pkt %u from the buffer\n", pid);
    removePacket(pid);
    if (nextWaitPkt == pid)
      moveWaitIndex(); // Move the index since we're no longer waiting
    return SUCCESS;
  }

  /**
   * Access a list of all packets still waiting for a control descision.  For
   * example, if a routing path is found to destination B, this could be used
   * to check if any other packets were also waiting for that same path since
   * they can now be sent.  This command gives the index of the first packet
   * in a list of waiting packets.  Traverse the rest of the list with the
   * PacketWaitList interface provided by the engine.
   *
   * @return The ID for the first waiting packet, BUFFER_SIZE if there aren't
   *         any waiting packets.
   */
  command packet_id_t PacketEngine.waitList[am_id_t lowerId]() {
    packet_id_t pid = nextWaitPkt;
    // Move on if lower AM type doesn't match
    if (pid < BUFFER_SIZE && lid(msgBuffer[pid].msg) != lowerId)
      pid = call PacketWaitList.next[lowerId](pid);
    return pid;
  }

  /**
   * Returns the upper layer AM type of a given packet or AM_INVALID_TYPE if
   * the packet was not found.
   *
   * @param pid ID of the packet.
   * @return The upper layer AM type or AM_INVALID_TYPE if not found.
   */
  command packet_am_id_t PacketEngine.upperType[am_id_t lowerId](packet_id_t pid) {
    if (lid(msgBuffer[pid].msg) != lowerId)
      return AM_INVALID_TYPE;
    return uid(msgBuffer[pid].msg);
  }

  /**
   * Sets the upper layer AM type of a given packet or does nothing if the
   * packet was not found.
   *
   * @param pid ID of the packet.
   * @param newUid The new upper layer AM type.
   */
  command void PacketEngine.setUpperType[am_id_t lowerId](packet_id_t pid, am_id_t newUid) {
    if (lid(msgBuffer[pid].msg) != lowerId)
      return;
    setUid(msgBuffer[pid].msg, newUid);
  }

  /**
   * Manually signals the upper layer sendDone event with the given result
   * for the given packet.  This should be used carefully to avoid signally
   * sendDone multiple times for the same packet.
   *
   * @param pid ID of the packet.
   * @param result Send result.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t PacketEngine.upperSendDone[am_id_t lowerId](packet_id_t pid, error_t result) {
    packet_send_entry_t sendEntry = {.pid = pid, .cid = SEND_CLIENT_SIZE};
    packet_send_entry_t* sendQueue;
    if (lid(msgBuffer[pid].msg) != lowerId ||
        msgBuffer[pid].srcLayer != PKT_UPPER_LAYER)
      return EINVAL;
    sendQueue = call SendQueue.lookup(&sendEntry);
    if (sendQueue != NULL && sendQueue->cid != SEND_CLIENT_SIZE)
      signal Send.sendDone[sendQueue->cid](msgBuffer[pid].msg, result);
    else {
      dbgerror("PacketEngineP", "PE: Couldn't find client ID for pkt %u!\n", pid);
      return FAIL;
    }
    return SUCCESS;
  }

  /********** PacketWaitList **********/

  /**
   * Gets the index of the next item from the list.
   *
   * @param m Current list item's index.
   * @return The next item's index.
   */
  command packet_id_t PacketWaitList.next[am_id_t lowerId](packet_id_t m) {
    if (m < BUFFER_SIZE) {
      for (m = ++m % BUFFER_SIZE; m != nextWaitPkt; m = ++m % BUFFER_SIZE) {
        if (msgBuffer[m].state == PKT_WAIT && lid(msgBuffer[m].msg) == lowerId)
          return m;
      }
    }
    return BUFFER_SIZE;
  }

  /**
   * Checks whether you have already reached the end of the list.
   *
   * @param m Current list item's index.
   * @return TRUE if the current item is the end of the list, FALSE otherwise.
   */
  command iterator_end_t PacketWaitList.end[am_id_t lowerId](packet_id_t m) {
    return m == BUFFER_SIZE;
  }

  /********** Packet Combine Functions **********/

  /**
   * Allows for multiple views on an iterator via fan out.  With nextWaitPkt as
   * the starting point, the smaller ID is returned.
   * @param a The first ID.
   * @param b The second ID.
   * @return The smaller of the two after unwrapping.
   */
  packet_id_t pidCombineInternal(packet_id_t a, packet_id_t b) {
    packet_id_t unwrappedA = (a < nextWaitPkt) ? (a + BUFFER_SIZE) : a;
    packet_id_t unwrappedB = (b < nextWaitPkt) ? (b + BUFFER_SIZE) : b;
    if (a == BUFFER_SIZE)
      return b;
    if (b == BUFFER_SIZE)
      return a;
    return (unwrappedA < unwrappedB) ? a : b;
  }

  /**
   * Wrapper function for pidCombineInternal.
   */
  packet_id_t pidCombine(packet_id_t a, packet_id_t b) @C() {
    return pidCombineInternal(a, b);
  }

  /********** Intercept **********/

  /**
   * Signals that a packet has been received, which is supposed to be
   * forwarded to another destination.  Allows all packets to be forwaded by
   * default.
   *
   * @param msg The complete packet received.
   * @param payload The payload portion of the packet for this protocol layer.
   * @param len The length of the payload buffer.
   * @return TRUE indicates the packet should be forwarded, FALSE indicates
   *         that it should not be forwarded.
   */
  default event bool Intercept.forward[am_id_t upperId](message_t* msg, void* payload, uint16_t len) {
    return TRUE;
  }

  /********** Tasks **********/

  /**
   * Notify control that a new packet was added.
   */
  task void msgAdded() {
    if (!running)
      return;
    if (nextAddedPkt == BUFFER_SIZE) {
      dbgerror("PacketEngineP", "PE: msgAdded posted, but nextAddedPkt is invalid!\n");
      return;
    }
    if (msgBuffer[nextAddedPkt].state == PKT_ADDED) {
      message_t* msg = msgBuffer[nextAddedPkt].msg;
      dbg("PacketEngineP", "PE: Processing added pkt %u\n", nextAddedPkt);
      msgBuffer[nextAddedPkt].state = PKT_WAIT;
      if (nextWaitPkt == BUFFER_SIZE) {
        // No packet currently in wait state, so change the index
        dbg("PacketEngineP", "PE: Moved nextWaitPkt from %u", nextWaitPkt);
        nextWaitPkt = nextAddedPkt;
        dbg_clear("PacketEngineP", " to %u\n", nextWaitPkt);
        printIndices();
      }
      // Signal the added event for this packet type
      if (msgBuffer[nextAddedPkt].srcLayer == PKT_UPPER_LAYER) {
        dbg("PacketEngineP", "PE: Notify about send added at index %u\n", nextAddedPkt);
        signal PacketEngine.sendAdded[lid(msg)](nextAddedPkt, msg);
      } else {
        if (call AMPacket.isForMe(msg)) {
          dbg("PacketEngineP", "PE: Notify about receive added at index %u\n", nextAddedPkt);
          signal PacketEngine.receiveAdded[lid(msg)](nextAddedPkt, msg);
        } else {
          dbg("PacketEngineP", "PE: Notify about snoop added at index %u\n", nextAddedPkt);
          signal PacketEngine.snoopAdded[lid(msg)](nextAddedPkt, msg);
        }
      }
    } else
      dbgerror("PacketEngineP", "PE: msgAdded posted, but nextAddedPkt is in state %hhu!\n",
               msgBuffer[nextAddedPkt].state);
    moveAddedIndex();
    if (nextAddedPkt < BUFFER_SIZE)
      post msgAdded(); // More added packets
    else
      dbg("PacketEngineP", "PE: No more added packets\n");
  }

  /**
   * Takes whatever action deemed necessary by the control component to complete
   * processing the packet.
   */
  task void msgAction() {
    if (!running)
      return;
    if (nextActionPkt == BUFFER_SIZE) {
      dbgerror("PacketEngineP", "PE: msgAction posted, but nextActionPkt is invalid!\n");
      return;
    }
    if (msgBuffer[nextActionPkt].state & (PKT_SEND | PKT_SEND_INTERCEPT)) {
      message_t* msg = msgBuffer[nextActionPkt].msg;
      uint8_t len = call Packet.payloadLength(msg);
      void* payload = call Packet.getPayload(msg, len);
      dbg("PacketEngineP", "PE: Processing action pkt %u\n", nextActionPkt);
      // Do appropriate processing on the packet
      switch (msgBuffer[nextActionPkt].state) {
        case PKT_SEND_INTERCEPT: {
          if (!signal Intercept.forward[uid(msg)](msg, payload, len)) {
            // Upper layer doesn't want the packet to go out
            dbg("PacketEngineP",
                "PE: Upper layer intercepted, dropping pkt %u\n", nextActionPkt);
            break;
          } }
          // Fall through to PKT_SEND if not intercepted
        case PKT_SEND: {
          if (!radioOn) {
            dbg("PacketEngineP", "PE: Radio currently off, waiting\n");
            return;
          }
          if (call SendState.requestState(S_SENDING) == FAIL) {
            // Currently sending or during backoff, will repost on sendDone
            dbg("PacketEngineP", "PE: Already sending or during backoff, waiting\n");
            return;
          }
          switch (call SubSend.send[lid(msg)](call AMPacket.destination(msg), msg,
                                              call SubSendPacket.payloadLength(msg))) {
            case SUCCESS: {
              dbg("PacketEngineP", "PE: SubSend successful, waiting for result\n");
              return; } // Wait for results
            case FAIL: {
              // Unsupported lower AM type
              dbg("PacketEngineP", "PE: Unsupported lower AM type %hhu!\n", lid(msg));
              call SendState.toIdle();
              break; } // Remove it
            case EINVAL: {
              // No more hops left for this packet
              dbg("PacketEngineP", "PE: No hops left, dropping packet!\n");
              call SendState.toIdle();
              break; } // Remove it
            case EBUSY: {
              // Shouldn't get this error since we have our own client, wait for sendDone
              dbgerror("PacketEngineP", "PE: SubSend busy! Waiting for result\n");
              call SendState.toIdle();
              return; }
            case EOFF: {
              // Radio off!
              dbgerror("PacketEngineP", "PE: Radio is off, not notified!\n");
              radioOn = FALSE;
              call SendState.toIdle();
              return; }
            case ESIZE: {
              // Unusual to arrive here, but force the length and try again
              dbgerror("PacketEngineP", "PE: Length of pkt %u too long! Forcing max length\n");
              call SendState.toIdle();
              call Packet.setPayloadLength(msg, call Packet.maxPayloadLength());
              post msgAction();
              return; }
          }
          break; }
      }
    } else
      dbgerror("PacketEngineP", "PE: msgAction posted, but nextActionPkt is in state %hhu!\n",
               msgBuffer[nextActionPkt].state);
    // Done with current packet
    removePacket(nextActionPkt);
    moveActionIndex();
    if (nextActionPkt < BUFFER_SIZE)
      post msgAction(); // More action packets
    else
      dbg("PacketEngineP", "PE: No more action packets\n");
  }

  /********** Functions **********/

  /**
   * Returns the upper layer AM type.
   * @param msg The packet to examine.
   * @return The upper layer AM type.
   */
  am_id_t uid(message_t* msg) {
    return *(am_id_t*)call SubPacket.getPayload[lid(msg)](msg, sizeof(am_id_t));
  }

  /**
   * Sets the upper layer AM type.
   * @param msg The packet to examine.
   * @param uid The upper layer AM type.
   */
  void setUid(message_t* msg, am_id_t newUid) {
    *(am_id_t*)call SubPacket.getPayload[lid(msg)](msg, sizeof(am_id_t)) = newUid;
  }

  /**
   * Returns the lower layer AM type.
   * @param msg The packet to examine.
   * @return The lower layer AM type.
   */
  am_id_t lid(message_t* msg) {
    return call AMPacket.type(msg);
  }

  /**
   * Sets the lower layer AM type.
   * @param msg The packet to examine.
   * @param lid The lower layer AM type.
   */
  void setLid(message_t* msg, am_id_t newLid) {
    call AMPacket.setType(msg, newLid);
  }

  /**
   * Sets both the upper and lower AM types based on the client ID.
   * @param msg The packet to examine.
   * @param clientId The ID of the packet engine client.
   */
  void setIds(message_t* msg, packet_client_id_t clientId) {
    if (call PacketEngineClient.upperType[clientId]() == AM_RECOVER_TYPE) {
      am_id_t actualId = lid(msg);
      setLid(msg, call PacketEngineClient.defaultLowerType[clientId]());
      setUid(msg, actualId);
    } else {
      setLid(msg, call PacketEngineClient.defaultLowerType[clientId]());
      setUid(msg, call PacketEngineClient.upperType[clientId]());
    }
  }

  /**
   * Advance the nextFreePkt index until a free packet is found. If no free
   * packet is found, set the index to BUFFER_SIZE.
   */
  void moveFreeIndex() {
    moveIndex(&nextFreePkt, PKT_FREE);
  }

  /**
   * Advance the nextAddedPkt index until an added packet is found. If no
   * added packet is found, set the index to BUFFER_SIZE.
   */
  void moveAddedIndex() {
    moveIndex(&nextAddedPkt, PKT_ADDED);
  }

  /**
   * Advance the nextWaitPkt index until a waiting packet is found. If no
   * waiting packet is found, set the index to BUFFER_SIZE.
   */
  void moveWaitIndex() {
    moveIndex(&nextWaitPkt, PKT_WAIT);
  }

  /**
   * Advance the nextActionPkt index until an action packet is found. If no
   * action packet is found, set the index to BUFFER_SIZE.
   */
  void moveActionIndex() {
    moveIndex(&nextActionPkt, PKT_SEND | PKT_SEND_INTERCEPT);
  }

  /**
   * Moves an index around the circular buffer until either the next entry with
   * a given state is found or we go around the entire buffer.  The index will
   * be set to BUFFER_SIZE if nothing is found.
   *
   * @param index Pointer to the index to move.
   * @param state State to look for in packet entries.
   * @return Updated value of the index.
   */
  void moveIndex(packet_id_t* idx, uint8_t state) {
    packet_id_t count;
    packet_id_t tmpIndex = *idx;
    for (count = 0; count < BUFFER_SIZE; count++) {
      tmpIndex++;
      tmpIndex %= BUFFER_SIZE;
      if (msgBuffer[tmpIndex].state & state) {
        dbg("PacketEngineP", "PE: Index updated\n");
        *idx = tmpIndex;
        printIndices();
        return;
      }
    }
    // No packets of state found
    dbg("PacketEngineP", "PE: No packets with state %hhu found\n", state);
    *idx = BUFFER_SIZE;
    printIndices();
  }

  /**
   * Print the value of all indices.
   */
  void printIndices() {
    dbg("PacketEngineP", "PE: Free: %u, Added: %u, Wait: %u, Action: %u\n",
        nextFreePkt, nextAddedPkt, nextWaitPkt, nextActionPkt);
    dbg("PEBufferSize", "PEBS: Send Buffer: %hhu of %hhu\n", call SendQueue.size(), SEND_SIZE);
    dbg("PEBufferSize", "PEBS: Receive Buffer: %hhu of %hhu\n",
        RECEIVE_SIZE - call ReceivePool.size(), RECEIVE_SIZE);
  }

  /**
   * Store a new send or receive packet in the buffer.
   *
   * @param msg Packet to be stored.
   */
  void addPacket(message_t* msg) {
    msgBuffer[nextFreePkt].msg = msg;
    msgBuffer[nextFreePkt].state = PKT_ADDED;
    if (nextAddedPkt == BUFFER_SIZE) {
      // No packet currently in added state, so change the index
      dbg("PacketEngineP", "PE: Moved nextAddedPkt from %u", nextAddedPkt);
      nextAddedPkt = nextFreePkt;
      dbg_clear("PacketEngineP", " to %u\n", nextAddedPkt);
      printIndices();
    }
    moveFreeIndex();
    post msgAdded();
  }

  /**
   * Mark a packet with the decision from control and post task to complete
   * the necessary actions.
   *
   * @param pid The ID of the packet to mark.
   * @param state State to set the packet to.
   */
  void markPacket(packet_id_t pid, uint8_t state) {
    msgBuffer[pid].state = state;
    if (nextActionPkt == BUFFER_SIZE) {
      // No packet currently in an action state, so change the index
      dbg("PacketEngineP", "PE: Moved nextActionPkt from %u", nextActionPkt);
      nextActionPkt = pid;
      dbg_clear("PacketEngineP", " to %u\n", nextActionPkt);
      printIndices();
    }
    if (nextWaitPkt == pid)
      // Move the index since we're no longer waiting
      moveWaitIndex();
    post msgAction();
  }

  /**
   * Remove a packet from the buffer once it is no longer needed.
   *
   * @param pid The ID of the packet to remove.
   */
  void removePacket(packet_id_t pid) {
    dbg("PacketEngineP", "PE: Removing pkt %u from the buffer\n", pid);
    if (msgBuffer[pid].srcLayer == PKT_LOWER_LAYER) {
      // Packets that entered as receive/snoop are sent to the pool on removal
      if (call ReceivePool.put(msgBuffer[pid].msg) == FAIL)
        dbgerror("PacketEngineP", "PE: Receive pool already full, leaking packet!\n");
    } else {
      packet_send_entry_t sendEntry = {.pid = pid, .cid = SEND_CLIENT_SIZE};
      // Packets that entered as send are sent to the pool on removal
      if (call SendPool.put(msgBuffer[pid].msg) == FAIL)
        dbgerror("PacketEngineP", "PE: Send pool already full, leaking packet!\n");
      // Remove send queue entry
      if (call SendQueue.remove(&sendEntry) != SUCCESS)
        dbgerror("PacketEngineP", "PE: Unable to remove send queue entry for pkt %u!\n", pid);
    }
    msgBuffer[pid].state = PKT_FREE;
  }

  /**
   * Avoids sending for an random amount of time within a given backoff window.
   */
  void startSendBackoff(uint16_t mask, uint16_t offset) {
    uint16_t r = call Random.rand16();
    r &= mask;
    r += offset;
    call SendBackoff.startOneShot(r);
    call SendState.forceState(S_BACKOFF);
    dbg("PacketEngineP", "PE: Send backoff for %hu ms\n", r);
  }

}
