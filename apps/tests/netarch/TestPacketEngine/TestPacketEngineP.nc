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
 * Test cases to verify that PacketEngineC works correctly.
 *
 * @author Ryan Stinnett
 */

module TestPacketEngineP {
  uses {
    interface Boot;
    interface SplitControl as AMControl;
    interface StdControl as PEControl;
    interface PacketEngine;
    interface IndexedIterator<packet_id_t> as PacketWaitList;
    interface AMSend as Send;
    interface AMPacket;
    interface Packet;
    interface Timer<TMilli>;
    interface PacketAcknowledgements as PacketAcks;
  }
}

implementation {

  /********** Variables **********/

  message_t mTest;
  bool retry = TRUE;

  /********** Function Declarations **********/

  void printWaitList();

  /********** Boot **********/

  event void Boot.booted() {
    call AMControl.start();
  }

  /********** Timer **********/

  event void Timer.fired() {
    dbg("TestPacketEngineP", "TestPE timer fired\n");
    call PacketEngine.send(0);
  }

  /********** AMControl **********/

  /**
   * Notify caller that the component has been started and is ready to
   * receive other commands.
   *
   * @param <b>error</b> -- SUCCESS if the component was successfully
   *                        turned on, FAIL otherwise
   */
  event void AMControl.startDone(error_t error) {
    if (error)
      return;

    call PEControl.start();

    memcpy(call Send.getPayload(&mTest), "Hello, world!", 14);
    call PacketAcks.requestAck(&mTest);

    call Send.send(call AMPacket.address() + 1, &mTest, 14);
  }

  /**
   * Notify caller that the component has been stopped.
   *
   * @param <b>error</b> -- SUCCESS if the component was successfully
   *                        turned off, FAIL otherwise
   */
  event void AMControl.stopDone(error_t error) {}

  /********** Send **********/

  event void Send.sendDone(message_t* msg, error_t error) {}

  /********** PacketEngine **********/

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   * @param payload Pointer to the packet payload.
   * @param length Length of the packet payload.
   */
  event void PacketEngine.sendAdded(packet_id_t pid, message_t* msg,
                                      void* payload, uint8_t length) {
    dbg("TestPacketEngineP", "New send at pkt %u\n", pid);
    dbg("TestPacketEngineP", "Pkt data: %s\n", (char*) payload);
    printWaitList();
    if (pid == 0)
      call Timer.startOneShot(1000);
  }

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   * @param payload Pointer to the packet payload.
   * @param length Length of the packet payload.
   */
  event void PacketEngine.receiveAdded(packet_id_t pid, message_t* msg,
                                         void* payload, uint8_t length) {
    dbg("TestPacketEngineP", "New receive at pkt %u\n", pid);
    dbg("TestPacketEngineP", "Pkt data: %s\n", (char*) payload);
    printWaitList();
    if (pid == 2 && call AMPacket.address() == 1) {
      // Modify packet 1 from mote 0, and send it to be snooped by 0
      message_t* redir = call PacketEngine.packet(1);
      call AMPacket.setSource(redir, 1);
      memcpy(call Send.getPayload(redir), "Goodbye!", 9);
      dbg("TestPacketEngineP", "Sending packet 1 back to 0 instead of receiving\n");
      call PacketEngine.send(1);
    }
  }

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   * @param payload Pointer to the packet payload.
   * @param length Length of the packet payload.
   */
  event void PacketEngine.snoopAdded(packet_id_t pid, message_t* msg,
                                       void* payload, uint8_t length) {
    dbg("TestPacketEngineP", "New snoop at pkt %u\n", pid);
    dbg("TestPacketEngineP", "Pkt data: %s\n", (char*) payload);
    printWaitList();
    if (call AMPacket.address() == 0 && pid == 3 && retry) {
      uint8_t i;
      retry = FALSE;
      call PacketEngine.drop(2);
      printWaitList();
      // Test rollover behavior, should have msgs 1 and 3 at this point
      for (i = 0; i < 7; i++)
        call Send.send(i, &mTest, 14);
      printWaitList();
    }
  }

  /**
   * Signals the completion of a send event to the lower layer.  If control
   * would like to resend the packet for any reason, it should return FAIL
   * from this event and SUCCESS otherwise.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet.
   * @param result SUCCESS if it was transmitted successfully, FAIL if
   *               it was not, ECANCEL if it was cancelled by the upper
   *               layer.
   * @return If control would like to resend the packet for any reason, it
   *         should return FAIL from this event and SUCCESS otherwise.
   */
  event error_t PacketEngine.sendDone(packet_id_t pid, message_t* msg, error_t result) {
    if (pid == 0)
      dbg("TestPacketEngineP", "wasAcked: %hhu\n", call PacketAcks.wasAcked(msg));
    if (call AMPacket.address() == 1 && pid == 0 && retry) {
      // Retry once for packet to non-existant mote 2
      retry = FALSE;
      return FAIL;
    }
    return SUCCESS;
  }

  /********** Functions **********/

  void printWaitList() {
    packet_id_t m;
    message_t* msg;
    dbg("TestPacketEngineP", "Waiting packets:\n");
    for (m = call PacketEngine.waitList(); !call PacketWaitList.end(m);
         m = call PacketWaitList.next(m)) {
      msg = call PacketEngine.packet(m);
      dbg("TestPacketEngineP", "Pkt %u: Src %u, Dest %u, Len %u\n",
          m, call AMPacket.source(msg), call AMPacket.destination(msg),
          call Packet.payloadLength(msg));
    }
  }

}
