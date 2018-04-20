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
    interface AMSend as SendA;
    interface AMSend as SendB;
    interface Receive;
    interface AMPacket;
    interface Packet;
    interface Timer<TMilli>;
  }
}

implementation {

  /********** Variables **********/

  message_t testPktBufA;
  message_t* testPktA = &testPktBufA;

  message_t testPktBufB;
  message_t* testPktB = &testPktBufB;

  /********** Boot **********/

  event void Boot.booted() {
    call AMControl.start();
  }

  /********** Timer **********/

  event void Timer.fired() {
    if (call AMPacket.address() == 1) {
      memcpy(call SendA.getPayload(testPktA), "Hello mote 0!", 14);
      call SendA.send(0, testPktA, 14);
      memcpy(call SendB.getPayload(testPktB), "Hello mote 2!", 14);
      call SendB.send(2, testPktB, 14);
    } else {
      memcpy(call SendA.getPayload(testPktA), "Hello mote 3!", 14);
      call SendA.send(3, testPktA, 14);
      memcpy(call SendB.getPayload(testPktB), "Goodbye mote 3!", 16);
      call SendB.send(3, testPktB, 16);
    }
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

    if (call AMPacket.address() == 1)
      call Timer.startOneShot(1024);
  }

  /**
   * Notify caller that the component has been stopped.
   *
   * @param <b>error</b> -- SUCCESS if the component was successfully
   *                        turned off, FAIL otherwise
   */
  event void AMControl.stopDone(error_t error) {}

  /********** SendA **********/

  event void SendA.sendDone(message_t* msg, error_t error) {}

  /********** SendB **********/

  event void SendB.sendDone(message_t* msg, error_t error) {}

  /********** Receive **********/

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    dbg("TestDsrP", "Received Data: %s, Payload Length: %hhu\n", (char*)payload, len);
    if (call AMPacket.address() == 0) {
      message_t* tmpPkt = testPktA;
      testPktA = msg;
      call Timer.startOneShot(1024);
      return tmpPkt;
    }
    return msg;
  }

}
