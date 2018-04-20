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
    interface AMSend as SendA1;
    interface AMSend as SendA2;
    interface AMSend as SendA3;
    interface Receive;
    interface AMPacket;
    interface Packet;
    interface Timer<TMilli>;
    interface Timer<TMilli> as LinkTimer;
  }
}

implementation {

  extern void removeLink(int src, int dest) @C();
  extern void addLink(int src, int dest, float gain) @C();

  /********** Variables **********/

  uint8_t linkTimer = 0;

  message_t testPktBufA1;
  message_t* testPktA1 = &testPktBufA1;

  message_t testPktBufA2;
  message_t* testPktA2 = &testPktBufA2;

  message_t testPktBufA3;
  message_t* testPktA3 = &testPktBufA3;

  /********** Boot **********/

  event void Boot.booted() {
    call AMControl.start();
  }

  /********** Timer **********/

  event void Timer.fired() {
    if (call AMPacket.address() == 1) {
      memcpy(call SendA1.getPayload(testPktA1), "Hello 0!", 9);
      call SendA1.send(0, testPktA1, 9);
      memcpy(call SendA2.getPayload(testPktA2), "Helloo 0!", 10);
      call SendA2.send(0, testPktA2, 10);
      memcpy(call SendA3.getPayload(testPktA3), "Hellooo 0!", 11);
      call SendA3.send(0, testPktA3, 11);
    } else {
      memcpy(call SendA1.getPayload(testPktA1), "Hello 3!", 9);
      call SendA1.send(3, testPktA1, 9);
    }
  }

  /********** LinkTimer **********/

  event void LinkTimer.fired() {
    if (linkTimer == 0) {
      dbg("TestDsrP", "Fixed link 1 -> 2\n");
      removeLink(1, 2);
      addLink(1, 2, -50);
      dbg("TestDsrP", "Broke link 1 -> 0\n");
      removeLink(1, 0);
      addLink(1, 0, -120);
      linkTimer++;
      call LinkTimer.startOneShot(6000);
    } else if (linkTimer == 1) {
      dbg("TestDsrP", "Fixed link 1 -> 0\n");
      removeLink(1, 0);
      addLink(1, 0, -50);
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

    if (call AMPacket.address() == 1) {
      call Timer.startOneShot(1024);
      call LinkTimer.startOneShot(4096);
    }
  }

  /**
   * Notify caller that the component has been stopped.
   *
   * @param <b>error</b> -- SUCCESS if the component was successfully
   *                        turned off, FAIL otherwise
   */
  event void AMControl.stopDone(error_t error) {}

  /********** SendA1 **********/

  event void SendA1.sendDone(message_t* msg, error_t error) {
    dbg("TestDsrP", "SendA1 done!\n");
  }

  /********** SendA2 **********/

  event void SendA2.sendDone(message_t* msg, error_t error) {
     dbg("TestDsrP", "SendA2 done!\n");
  }

  /********** SendA3 **********/

  event void SendA3.sendDone(message_t* msg, error_t error) {
     dbg("TestDsrP", "SendA3 done!\n");
  }

  /********** Receive **********/

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    dbg("TestDsrP", "Received Data: %s, Payload Length: %hhu\n", (char*)payload, len);
    if (call AMPacket.address() == 0) {
      //message_t* tmpPkt = testPktA;
      //testPktA = msg;
      call Timer.startOneShot(1024);
      //return tmpPkt;
    }
    return msg;
  }

}
