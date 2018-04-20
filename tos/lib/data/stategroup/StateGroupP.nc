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
 * A group of state machines.  This can used, for example, to manage
 * a group of identical resources.  You can check if any of the resources
 * are free by calling StateGroup.findState(S_IDLE) and thus avoid
 * querying each resource in the group explicitly.
 *
 * @author Ryan Stinnett
 */

generic module StateGroupP(uint8_t groupBase, uint8_t groupSize) {
  provides {
    interface StateGroup;
    interface State[uint8_t id];
  }
  uses {
    interface State as SubState[uint8_t id];
  }
}

implementation {

  enum {
    S_IDLE = 0
  };

  /********** StateGroup **********/

  /**
   * Returns the size of the group.
   *
   * @return The size of the group.
   */
  command uint8_t StateGroup.size() {
    return groupSize;
  }

  /**
   * Returns the ID of the first state machine in this group that is
   * currently in the given state.  If none are found, the number of
   * state machines in the group is returned.
   *
   * @param reqState The state to search for.
   * @return ID of a state machine in that state.
   */
  command uint8_t StateGroup.findState(uint8_t reqState) {
    uint8_t i;
    for (i = 0; i < groupSize; i++)
      if (call State.isState[i](reqState))
        return i;
    return i;
  }

  /********** State **********/

  /**
   * This will allow a state change so long as the current
   * state is S_IDLE.
   * @return SUCCESS if the state is change, FAIL if it isn't
   */
  async command error_t State.requestState[uint8_t id](uint8_t reqState) {
    if (id >= groupSize)
      return FAIL;
    return call SubState.requestState[groupBase + id](reqState);
  }

  /**
   * Force the state machine to go into a certain state,
   * regardless of the current state it's in.
   */
  async command void State.forceState[uint8_t id](uint8_t reqState) {
    if (id >= groupSize)
      return;
    return call SubState.forceState[groupBase + id](reqState);
  }

  /**
   * Set the current state back to S_IDLE
   */
  async command void State.toIdle[uint8_t id]() {
    if (id >= groupSize)
      return;
    return call SubState.toIdle[groupBase + id]();
  }

  /**
   * @return TRUE if the state machine is in S_IDLE
   */
  async command bool State.isIdle[uint8_t id]() {
    if (id >= groupSize)
      return FALSE;
    return call SubState.isIdle[groupBase + id]();
  }

  /**
   * @return TRUE if the state machine is in the given state
   */
  async command bool State.isState[uint8_t id](uint8_t myState) {
    if (id >= groupSize)
      return FALSE;
    return call SubState.isState[groupBase + id](myState);
  }

  /**
   * Get the current state
   */
  async command uint8_t State.getState[uint8_t id]() {
    if (id >= groupSize)
      return S_IDLE;
    return call SubState.getState[groupBase + id]();
  }

}
