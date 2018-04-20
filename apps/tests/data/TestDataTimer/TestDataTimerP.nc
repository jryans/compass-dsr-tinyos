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
 * Test cases to verify that DataTimerC works correctly.
 *
 * @author Ryan Stinnett
 */

module TestDataTimerP {
  uses {
    interface Boot;
    interface DataTimer<uint8_t>;
    interface Timer<TMilli>;
  }
}

implementation {

  /********** Variables **********/

  uint32_t startTime;

  /********** Functions **********/

  void add(uint8_t data, uint16_t time) {
    uint32_t expired = call Timer.getNow() - startTime;
    call DataTimer.start(data, time - expired);
    dbg("TestDataTimerP", "Added data %hhu with delay of %u ms\n", data, time);
  }

  /********** Boot **********/

  event void Boot.booted() {
    startTime = call Timer.getNow();
    add(3, 200);
    add(0, 50);
    call Timer.startOneShot(25);
  }

  /********** DataTimer **********/

  /**
   * The timer for a given data item has expired.
   *
   * @param data The data item which expired.
   */
  event void DataTimer.expired(uint8_t data) {
    uint32_t expired = call Timer.getNow() - startTime;
    dbg("TestDataTimerP", "Data %hhu expired after %u ms\n", data, expired);
  }

  /********** Timer **********/

  event void Timer.fired() {
    add(2, 100);
    add(1, 50);
  }

}