/*									tab:4
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
#include "UnicastCountToLeds.h"

/**
 * Implementation of the UnicastCountToLeds application. UnicastCountToLeds
 * acts very similarly to the TinyOS example applicaton RadioCountToLeds, in
 * which a 4Hz counter is maintained, and then the value is sent over the radio
 * and displayed on LEDs of another node. However, here only node 0 sends a
 * unicast message to node 1 with its value, rather than having each node
 * broadcast its value in an AM packet every time it gets updated. Normally this
 * would require nodes 0 and 1 to be within radio range of each other, but by
 * simply using the send and receive components from the COMPASS framework, the
 * message can be delivered across multiple hops to reach node 1 (assuming there
 * is a path connecting node 0 and 1 in the network).
 *
 * @author Ryan Stinnett
 * @author Philip Levis
 */

module UnicastCountToLedsC {
  uses {
    interface Leds;
    interface Boot;
    interface Receive;
    interface AMSend;
    interface Timer<TMilli> as MilliTimer;
    interface SplitControl as AMControl;
    interface Packet;
    interface AMPacket;
  }
}
implementation {

  message_t packet;

  uint16_t counter = 0;

// Define source and destination defaults

#ifndef SRC_ADDR
#define SRC_ADDR 0
#endif // SRC_ADDR

#ifndef DEST_ADDR
#define DEST_ADDR 1
#endif // DEST_ADDR

  event void Boot.booted() {
    // Start the AM and radio subsystems
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      // Source node begins counting
      if (call AMPacket.address() == SRC_ADDR)
        call MilliTimer.startPeriodic(250);
    }
    else {
      call AMControl.start(); // Try starting again
    }
  }

  event void AMControl.stopDone(error_t err) {}

  event void MilliTimer.fired() {
    unicast_count_msg_t* rcm;
    counter++; // Increment counter
    dbg("UnicastCountToLedsC", "UnicastCountToLedsC: timer fired, counter is %hu.\n", counter);
    rcm = (unicast_count_msg_t*)call AMSend.getPayload(&packet, sizeof(unicast_count_msg_t));
    if (rcm == NULL)
	  return; // Unable to store message data, aborting.
    rcm->counter = counter;
    // Message containing the new count sent to destination
    if (call AMSend.send(DEST_ADDR, &packet, sizeof(unicast_count_msg_t)) == SUCCESS)
      dbg("UnicastCountToLedsC", "UnicastCountToLedsC: packet sent.\n", counter);
  }

  event message_t* Receive.receive(message_t* bufPtr,
				   void* payload, uint8_t len) {
    dbg("UnicastCountToLedsC", "Received packet of length %hhu.\n", len);
    if (len != sizeof(unicast_count_msg_t))
      return bufPtr;
    else {
      // Display received count value via LEDs
      unicast_count_msg_t* rcm = (unicast_count_msg_t*)payload;

      if (rcm->counter & 0x1)
	    call Leds.led0On();
      else
        call Leds.led0Off();

      if (rcm->counter & 0x2)
	    call Leds.led1On();
      else
	    call Leds.led1Off();

      if (rcm->counter & 0x4)
	    call Leds.led2On();
      else
	    call Leds.led2Off();

      return bufPtr;
    }
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {}

}
