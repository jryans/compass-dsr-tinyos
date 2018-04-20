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

#ifndef PACKETENGINE_H
#define PACKETENGINE_H

#ifndef PACKET_ENGINE_SEND_SIZE
#define PACKET_ENGINE_SEND_SIZE 20
#endif // PACKET_ENGINE_SEND_SIZE

#ifndef PACKET_ENGINE_RECEIVE_SIZE
#define PACKET_ENGINE_RECEIVE_SIZE 20
#endif // PACKET_ENGINE_RECEIVE_SIZE

typedef uint8_t packet_client_id_t;
typedef uint8_t packet_id_t @combine("pidCombine");
typedef am_id_t packet_am_id_t @combine("pamidCombine");
typedef uint8_t packet_send_action_t @combine("pktSendActionCombine");

#define UQ_PACKET_ENGINE_CLIENT "PacketEngineC.PacketEngineClient"

enum {
  INVALID_PAYLOAD_LENGTH = 255,
  AM_INVALID_TYPE = 255,
  AM_RECOVER_TYPE = 254,
  AM_NO_UPPER_DATA = 0,
  AM_SINK_ADDR = 0
};

// Values returned by sendDone signal
enum {
  // No further action is needed
  PKT_SEND_DONE,
  // Try sending again
  PKT_SEND_RETRY,
  // Move the packet back to waiting
  PKT_SEND_WAIT,
  // No action defined
  PKT_SEND_UNKNOWN
};

packet_send_action_t pktSendActionCombine(packet_send_action_t a, packet_send_action_t b) {
  if (a == b)
    return a;
  else if (a == PKT_SEND_UNKNOWN)
    return b;
  else if (b == PKT_SEND_UNKNOWN)
    return a;
  else {
    dbgerror("PacketEngineP", "PE: Forced send action to done due to bad combine!\n");
    return PKT_SEND_DONE;
  }
}

packet_am_id_t pamidCombine(packet_am_id_t a, packet_am_id_t b) {
  if (a == AM_INVALID_TYPE)
    return b;
  return a;
}

// Tracks client IDs of sent packets and allows for eviction on overflow.
typedef struct {
  packet_id_t pid;
  packet_client_id_t cid;
} packet_send_entry_t;

/* The following timing data is a slightly modified version of that found
 * in CtpForwardingEngineP, as those numbers seemed like reasonable values.
 *
 * These timings are in milliseconds, and are used by
 * PacketEngineP. Each pair of values represents a range of
 * [OFFSET - (OFFSET + WINDOW)]. The PacketEngine uses these
 * values to determine when to send the next packet after an
 * event. NOACK refers to the previous packet not being acknowledged,
 * and OK refers to an acknowledged packet.
 *
 * These timings are defined in terms of packet times. Currently,
 * two values are defined: for CC2420-based platforms (4ms) and
 * all other platfoms (32ms).
 */

enum {
#if PLATFORM_MICAZ || PLATFORM_TELOSA || PLATFORM_TELOSB || PLATFORM_TMOTE
  FORWARD_PACKET_TIME = 4,
#else
  FORWARD_PACKET_TIME = 32,
#endif
};

enum {
  SEND_RETRY_OFFSET = FORWARD_PACKET_TIME << 1,
  SEND_DONE_OFFSET  = FORWARD_PACKET_TIME << 2,
  SEND_RETRY_WINDOW = SEND_RETRY_OFFSET    - 1,
  SEND_DONE_WINDOW  = SEND_DONE_OFFSET     - 1,
};

#endif // PACKETENGINE_H
