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
 * The PacketEngine interface connects the packet engine to any data
 * control components.  Data control components can implement any number
 * of functions on set of packets.  In fact, an entire routing Allow a data control component to manage its packets in the data
 * engine.  Packet IDs are passed to the control component to simplify
 * management of any additional data structures for each packet in the
 * buffer.
 *
 * @author Ryan Stinnett
 */

#include "PacketEngine.h"
#include <message.h>

interface PacketEngine {

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void sendAdded(packet_id_t pid, message_t* msg);

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void receiveAdded(packet_id_t pid, message_t* msg);

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void snoopAdded(packet_id_t pid, message_t* msg);

  /**
   * Gets the packet associated with a given ID in the packet engine.
   *
   * @param pid ID of packet to access.
   * @return Pointer to the packet, NULL if the ID is not in use or too large.
   */
  command message_t* packet(packet_id_t pid);

  /**
   * Marks this packet as next in line to be sent.  The packet must be one
   * that was signaled via the added event and cannot be the ID of any
   * arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t send(packet_id_t pid);

  /**
   * Signals the completion of a send event to the lower layer.  The return
   * value indicates what should be done next with the packet.
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
  event packet_send_action_t sendDone(packet_id_t pid, message_t* msg, error_t result);

  /**
   * Marks this packet as next in line to be sent, but allows the upper layer
   * to intercept the packet first.  The packet must be one that was signaled
   * via the added event and cannot be the ID of any arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t sendIntercept(packet_id_t pid);

  /**
   * Passes this packet to upper layer as a received packet immediately.  The
   * packet must be one that was signaled via the added event and cannot be
   * the ID of any arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t receive(packet_id_t pid);

  /**
   * Drops the packet from the buffer immediately.  The packet must be one
   * that was signaled via the added event and cannot be the ID of any
   * arbitrary packet.
   *
   * @param pid ID of the packet.
   * @return SUCCESS if the action takes place, FAIL if not, EINVAL if the
   *         packet is not found in the buffer or is not a waiting packet.
   */
  command error_t drop(packet_id_t pid);

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
  command error_t upperSendDone(packet_id_t pid, error_t result);

  /**
   * Access a list of all packets still waiting for a control descision.  For
   * example, if a routing path is found to destination B, this could be used
   * to check if any other packets were also waiting for that same path since
   * they can now be sent.  This command gives the index of the first packet
   * in a list of waiting packets.  Traverse the rest of the list with the
   * PacketWaitList interface provided by the engine.
   *
   * @return The ID for the first waiting packet, bufferSize if there aren't
   *         any waiting packets.
   */
  command packet_id_t waitList();

  /**
   * Returns the upper layer AM type of a given packet.
   *
   * @param pid ID of the packet.
   * @return The upper layer AM type.
   */
  command packet_am_id_t upperType(packet_id_t pid);

  /**
   * Sets the upper layer AM type of a given packet.
   *
   * @param pid ID of the packet.
   * @param newUid The new upper layer AM type.
   */
  command void setUpperType(packet_id_t pid, am_id_t newUid);

}
