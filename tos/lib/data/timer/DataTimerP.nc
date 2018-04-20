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
 * A timed series of data items.  The client is notified as each item
 * expires.  Uses the Equal interface to allow complex data types, but
 * the default supplied works for primitive types.
 *
 * TODO: Change to use a "first".
 *
 * @author Ryan Stinnett
 */

#include "DataTimer.h"

generic module DataTimerP(typedef data_timer_data_t @number(), uint8_t maxSize) {
  provides {
    interface Init;
    interface DataTimer<data_timer_data_t>;
  }
  uses {
    interface Timer<TMilli>;
  }
}

implementation {

  /********** Variables **********/

  data_timer_data_t data[maxSize];
  data_timer_time_t delay[maxSize];
  uint8_t size;
  uint32_t startTime;

  /********** Function Declarations **********/

  void startTimer();
  void removeTimer(uint8_t i);
  void adjustTimer();

  /********** Init **********/

  command error_t Init.init() {
    size = 0;
    return SUCCESS;
  }

  /********** DataTimer **********/

  /**
   * Starts the non-periodic timer for a given data item.  If the same
   * item is started multiple times, it will be tracked multiple times.
   *
   * @param data The data item to start timing.
   * @param delay Time units before the data expires.
   * @return SUCCESS, or FAIL if already full.
   */
  command error_t DataTimer.start(data_timer_data_t newData, data_timer_time_t newDelay) {
    uint8_t i;
    if (size == maxSize)
      return FAIL;
    adjustTimer();
    for (i = size; i > 0; i--) {
      if (delay[i - 1] > newDelay) {
        data[i] = data[i - 1];
        delay[i] = delay[i - 1];
      } else
        break;
    }
    data[i] = newData;
    delay[i] = newDelay;
    size++;
    dbg("DataTimerP", "DT: Added new delay of %u at position %u\n", newDelay, i);
    startTimer();
    return SUCCESS;
  }

  /**
   * Stops the timer for a given data item.  If the item was started
   * multiple times, this removes the instance that was closest to
   * expiring.
   *
   * @param data The data item to stop timing.
   * @return SUCCESS, or EINVAL if the item was not found.
   */
  command error_t DataTimer.stop(data_timer_data_t stopData) {
    uint8_t i;
    for (i = 0; i < size; i++) {
      if (data[i] == stopData) {
        removeTimer(i);
        if (i == 0 && size > 0) {
          adjustTimer();
          startTimer();
        }
        return SUCCESS;
      }
    }
    return EINVAL;
  }

  /********** Timer **********/

  /**
   * Signaled when the timer expires (one-shot) or repeats (periodic).
   */
  event void Timer.fired() {
    adjustTimer();
    while (delay[0] == 0 && size > 0) {
      signal DataTimer.expired(data[0]);
      dbg("DataTimerP", "DT: Timer expired!\n");
      removeTimer(0);
    }
    if (size > 0)
      startTimer();
  }

  /********** Functions **********/

  /**
   * Starts the underlying timer.
   */
  void startTimer() {
    call Timer.startOneShot(delay[0]);
  }

  /**
   * Removes the timer at the given index.
   *
   * @param i The index to remove.
   */
  void removeTimer(uint8_t i) {
    if (i >= size)
      return;
    dbg("DataTimerP", "DT: Removed position %u\n", i);
    for (size--; i < size; i++) {
      data[i] = data[i + 1];
      delay[i] = delay[i + 1];
    }
  }

  /**
   * Stops the timer, reads a new start time, and adjusts all delays to match.
   */
  void adjustTimer() {
    uint32_t stopTime = call Timer.getNow();
    uint8_t i;
    uint32_t elapsed = stopTime - startTime;
    call Timer.stop();
    for (i = 0; i < size; i++)
      delay[i] -= elapsed;
    startTime = stopTime;
  }

}
