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
 * A basic skeleton that shows how the various COMPASS framework hooks
 * can be used to build a new routing protocol.
 *
 * @author Ryan Stinnett
 */

#include <PacketEngine.h>
#include <AM.h>


module RoutingSkeletonP {
  uses {
    interface Boot;

    // Accesses a list of packets that are waiting in the buffer
    // to be given a next state by a control component, such as this
    // routing protocol.
    interface IndexedIterator<packet_id_t> as SinglePacketWaitList;
    // Sets the next state of a given packet in the buffer.
    interface PacketEngine as SinglePacketEngine;

    interface PacketAcknowledgements as Acks;
    interface SinglePacket;
    interface AMPacket;
    interface Packet as ComposePacket;

    // Used to generate additional packets by the control component
    interface BitVector as Compose;
    interface AMSend as Send;
  }
}

implementation {

  /********** Variables **********/

  // Send states
  enum {
    S_IDLE,
    S_SENDING
  };

  /********** Function Declarations **********/

  task void composePkt();

  /********** Boot **********/

  event void Boot.booted() {
    nextIdent = call Random.rand16();
    call Compose.clearAll();
  }

  /********** SinglePacketEngine **********/

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.sendAdded(packet_id_t pid, message_t* msg) {
    // A new packet from the application layer is waiting to be sent.
    // This would be a good place to initiate any discovery and/or search
    // a routing table to find the next hop of the packet.  Also, you may
    // to add additional headers to the packet to contain additional
    // information that is specific to your protocol.

    // Once this has been added, call a command such as SinglePacketEngine.send()
    // or .sendIntercept() to queue the packet for transmission.
  }

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.receiveAdded(packet_id_t pid, message_t* msg) {
    // A new packet has been received by the AM layer for this node.  At
    // this point, you may wish to read in any information from the packet
    // to learn more about the network or initiate additional control packets
    // in response to this one.

    // Additional packets could be initiated by setting the bit corresponding
    // to the ID of packet received in the Compose bit vector and posting the
    // composePkt() task, which will create the actual packet.

    // If a packet has reached its final destination, SinglePacketEngine
    // .receive() will pass it up to the application layer.  Also, .drop() can
    // be used to drop a packet if needed.
  }

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.snoopAdded(packet_id_t pid, message_t* msg) {
    // This is similar to the receiveAdded event, however these packets are
    // instead overheard, as they are not actually destined for this node.
    // Generally such packets could still be of use if you need to learn
    // about the network topology around this node.
  }

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
  event packet_send_action_t SinglePacketEngine.sendDone(packet_id_t pid, message_t* msg,
                                                         error_t result) {
    // When the transmission stage completes, this control component will
    // be notified whether or not it was sucessful and then can choose from
    // any of the above responses.
  }

  /********** Send **********/

  /**
   * Signaled in response to an accepted send request. <tt>msg</tt>
   * is the sent buffer, and <tt>error</tt> indicates whether the
   * send was succesful, and if not, the cause of the failure.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  event void Send.sendDone(message_t* msg, error_t error) {
    // This Send interface is used by the composePkt task to send out any
    // additional packets generated by the routing component itself.  Any
    // post-send processing can be done here.
  }

  /********** Tasks **********/

  /**
   * Looks for waiting packets that need a separate packet of some kind to be
   * sent, composes that packet, and attempts to send it.
   */
  task void composePkt() {
    // This task can be used to generate an entirely new packet by checking
    // for bits set in the Compose bit vector and looking for those packets
    // in the buffer.  Using the information in the packets, a new control
    // packet can be sent out over this components Send interface.
  }

}
