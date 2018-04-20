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
 * Test cases to verify that DSR works correctly.
 *
 * @author Ryan Stinnett
 */

module TestDsrP {
  uses {
    interface Boot;
    interface SplitControl as AMControl;
    interface StdControl as PEControl;
    interface AMSend as Send;
    interface Receive;
    interface AMPacket;
    interface Packet;
    interface Timer<TMilli>;
    interface Random;
  }
}

implementation {

  /********** Variables **********/

  message_t testPktBuf;
  message_t* testPkt = &testPktBuf;

  uint8_t pktNum = 0;

  enum {
    NUM_NODES = 9,
    PKT_TOTAL = 81
  };

  /********** Boot **********/

  event void Boot.booted() {
    call AMControl.start();
  }

  /********** Timer **********/

  event void Timer.fired() {
    if (pktNum % NUM_NODES == call AMPacket.address()) {
      char data[10];
      am_addr_t dest = call Random.rand16() & 0x7;
      if (dest >= call AMPacket.address())
        dest++;
      sprintf(data, "Pkt %hhu", pktNum);
      strcpy(call Send.getPayload(testPkt), data);
      call Send.send(dest, testPkt, strlen(data) + 1);
    }
    if (++pktNum < PKT_TOTAL)
      call Timer.startOneShot(1024);
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

    call Timer.startOneShot(1024);
  }

  /**
   * Notify caller that the component has been stopped.
   *
   * @param <b>error</b> -- SUCCESS if the component was successfully
   *                        turned off, FAIL otherwise
   */
  event void AMControl.stopDone(error_t error) {}

  /********** Send **********/

  event void Send.sendDone(message_t* msg, error_t error) {
    dbg("TestDsrP", "Send done with result %hhu\n", error);
  }

  /********** Receive **********/

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    dbg("TestDsrP", "Received Data: %s Payload Length: %hhu\n", (char*)payload, len);
    return msg;
  }

}
