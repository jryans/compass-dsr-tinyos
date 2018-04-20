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
 * Configuration for testing PacketEngineC.
 *
 * @author Ryan Stinnett
 */

configuration TestPacketEngineAppC {}

implementation {

  enum {
    AM_UPPER = 80,
    AM_LOWER = 90
  };

  components MainC, TestPacketEngineP, PacketEngineC,
             ActiveMessageC, new PacketTransceiverC(AM_LOWER),
             new PacketSenderC(AM_UPPER, AM_LOWER), new TimerMilliC();

  TestPacketEngineP.Boot -> MainC;

  TestPacketEngineP.PEControl -> PacketEngineC;
  TestPacketEngineP.PacketEngine -> PacketEngineC.PacketEngine[AM_LOWER];
  TestPacketEngineP.PacketWaitList -> PacketEngineC.PacketWaitList[AM_LOWER];

  TestPacketEngineP.Send -> PacketSenderC;
  TestPacketEngineP.Packet -> PacketSenderC;

  TestPacketEngineP.AMPacket -> ActiveMessageC;
  TestPacketEngineP.AMControl -> ActiveMessageC;
  TestPacketEngineP.PacketAcks -> ActiveMessageC;
  PacketTransceiverC.Packet -> ActiveMessageC;

  TestPacketEngineP.Timer -> TimerMilliC;

}
