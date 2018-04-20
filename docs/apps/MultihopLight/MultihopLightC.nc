/*                                  tab:4
 * "Copyright (c) 2000-2005 The Regents of the University  of California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA,
 * 94704.  Attention:  Intel License Inquiry.
 */

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

#include "Timer.h"
#include "MultihopLight.h"

/**
 * Implementation of the MultihopLight demo application. The intensity of light
 * at a source mote is used to control an LED at a destination mote. The COMPASS
 * multihop framework is used to allow the source and destination to be an
 * arbitrary number of hops away from each other. By reducing radio power to a
 * low level, this application acts as simple visual demo of the utility of
 * multihop communication.
 *
 * @author Ryan Stinnett
 * @author Philip Levis
 */

module MultihopLightC {
  uses {
    interface Leds;
    interface Boot;
    interface AMSend as Send;
    interface Receive;
    interface Intercept;
    interface Timer<TMilli> as PhotoTimer;
    interface SplitControl as AMControl;
    interface Packet;
    interface AMPacket;
#ifndef TOSSIM
    interface CC2420Packet;
#endif
    interface Read<uint16_t> as Photo;
  }
}
implementation {

  message_t packet;

// Define source and destination defaults

#ifndef SRC_ADDR
#define SRC_ADDR 0
#endif // SRC_ADDR

#ifndef DEST_ADDR
#define DEST_ADDR 1
#endif // DEST_ADDR

  event void Boot.booted() {
#ifndef TOSSIM
    // Reduce transmission power for easier demonstration
    call CC2420Packet.setPower(&packet, 5);
#endif
    // Start the AM and radio subsystems
    call AMControl.start();
    // Identify the source node
    if (call AMPacket.address() == SRC_ADDR)
      call Leds.led0On();
    // Identify the destination node
    if (call AMPacket.address() == DEST_ADDR)
      call Leds.led1On();
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      // Source node begins periodic light sensor measurement
      if (call AMPacket.address() == SRC_ADDR)
        call PhotoTimer.startPeriodic(250);
    } else {
      call AMControl.start(); // Try starting again
    }
  }

  event void AMControl.stopDone(error_t err) {}

  event void PhotoTimer.fired() {
    // Attempt to read data from the light sensor
    if (call Photo.read() != SUCCESS)
      dbgerror("MultihopLightC", "Reading light sensor failed!\n");
  }

  event void Photo.readDone(error_t result, uint16_t val) {
    multihop_light_msg_t* lmsg;
    dbg("MultihopLightC", "MultihopLightC: light sensor value is %hu\n", val);
    lmsg = (multihop_light_msg_t*)call Send.getPayload(&packet, sizeof(multihop_light_msg_t));
    if (lmsg == NULL)
      return; // Unable to store message data, aborting.
    // Measurement from light sensor is converted to an on/off bit
    // On/off bit diplayed via LED 2 for visual confirmation
    if (val >= 750) {
      lmsg->power = 1;
      call Leds.led2On();
    } else {
      lmsg->power = 0;
      call Leds.led2Off();
    }
    // Message containing the on/off bit sent to destination
    if (call Send.send(DEST_ADDR, &packet, sizeof(multihop_light_msg_t)) == SUCCESS)
      dbg("MultihopLightC", "MultihopLightC: packet sent, power %hhu\n", lmsg->power);
  }

  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
	multihop_light_msg_t* lmsg;
    dbg("MultihopLightC", "Received packet of length %hhu\n", len);
    if (len != sizeof(multihop_light_msg_t))
      return bufPtr; // Received packet size incorrect, aborting.
    lmsg = (multihop_light_msg_t*)payload;
    dbg("MultihopLightC", "Received power %hu\n", lmsg->power);
    // Received value displayed on LED 2
    if (lmsg->power)
      call Leds.led2On();
    else
      call Leds.led2Off();
    return bufPtr;
  }

  event bool Intercept.forward(message_t* bufPtr, void* payload, uint16_t len) {
    // Intercepted packets (those passing through this node) are processed as
    // received packets so that the on/off signal will be visible at all nodes
    // that the message passes through.
    signal Receive.receive(bufPtr, payload, len);
    return TRUE;
  }

  event void Send.sendDone(message_t* bufPtr, error_t error) {}

}




