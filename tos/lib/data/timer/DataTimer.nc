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
 * Access a timed series of data items.  The client is notified as each
 * item expires.
 *
 * @author Ryan Stinnett
 */

#include "DataTimer.h"

interface DataTimer<data_t> {

  /**
   * Starts the non-periodic timer for a given data item.  If the same
   * item is started multiple times, it will be tracked multiple times.
   *
   * @param data The data item to start timing.
   * @param delay Time units before the data expires.
   * @return SUCCESS, or FAIL if already full.
   */
  command error_t start(data_t data, data_timer_time_t delay);

  /**
   * Stops the timer for a given data item.  If the item was started
   * multiple times, this removes the instance that was closest to
   * expiring.
   *
   * @param data The data item to stop timing.
   * @return SUCCESS, or EINVAL if the item was not found.
   */
  command error_t stop(data_t data);

  /**
   * The timer for a given data item has expired.
   *
   * @param data The data item which expired.
   */
  event void expired(data_t data);

}
