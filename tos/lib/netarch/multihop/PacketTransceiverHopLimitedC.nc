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
 * Multihop protocols instantiate this component to connect the packet
 * engine to the AM layer for a given link layer AM type.  This version
 * of the transceiver enforces a hop limit which can be accessed via the
 * HopsLeft interface.  The Packet interface used by this component
 * should be provided by the protocol.  Similarly, the SubPacket
 * interface provided by this component should be used by the protocol
 * to complete the chain of Packet interfaces.
 *
 * @author Ryan Stinnett
 */

generic configuration PacketTransceiverHopLimitedC(am_id_t lowerId) {
  uses interface Packet;
  provides interface Packet as SubPacket;
}

implementation {

  components PacketEngineC, PacketTransceiverHopLimitedP,
             new AMSenderC(lowerId), new AMSnoopingReceiverC(lowerId);

  PacketEngineC.SubSend[lowerId] -> PacketTransceiverHopLimitedP.Send[lowerId];
  PacketEngineC.SubReceive[lowerId] -> PacketTransceiverHopLimitedP.Receive[lowerId];
  PacketEngineC.SubPacket[lowerId] = Packet;

  SubPacket = PacketTransceiverHopLimitedP;

  PacketTransceiverHopLimitedP.SubSend[lowerId] -> AMSenderC;
  PacketTransceiverHopLimitedP.SubReceive[lowerId] -> AMSnoopingReceiverC;

}
