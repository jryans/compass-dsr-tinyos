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
 * Modified sender for single destination multihop packets of created
 * by a PacketEngine processor for a given link layer AM type.
 *
 * @author Ryan Stinnett
 */

#include <PacketEngine.h>

generic configuration SingleProcessorSenderC(am_id_t lowerId) {
  provides {
    interface AMSend as Send;
    interface SinglePacket;
    interface AMPacket;
    interface Packet;
  }
}

implementation {

  enum {
    PACKET_ENGINE_CLIENT_ID = unique(UQ_PACKET_ENGINE_CLIENT)
  };

  components SingleProtocolC, SinglePacketC, ActiveMessageC,
             new PacketSenderC(AM_NO_UPPER_DATA, lowerId, PACKET_ENGINE_CLIENT_ID);

  Send = SinglePacketC.Send[PACKET_ENGINE_CLIENT_ID];
  SinglePacket = SinglePacketC;
  AMPacket = ActiveMessageC;
  Packet = SinglePacketC;

  SinglePacketC.SubSend[PACKET_ENGINE_CLIENT_ID] -> PacketSenderC;

}