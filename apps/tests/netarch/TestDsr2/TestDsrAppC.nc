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
 * Configuration for testing DSR.
 *
 * @author Ryan Stinnett
 */

configuration TestDsrAppC {}

implementation {

  enum {
    AM_TEST_A = 23,
    AM_TEST_B = 25
  };

  components MainC, TestDsrP, PacketEngineC, ActiveMessageC,
             new SingleSenderC(AM_TEST_A) as SendA1C,
             new SingleSenderC(AM_TEST_A) as SendA2C,
             new SingleSenderC(AM_TEST_A) as SendA3C,
             new SingleReceiverC(AM_TEST_A) as ReceiveAC,
             new TimerMilliC() as TimerC, new TimerMilliC() as LinkTimerC;

  TestDsrP.Boot -> MainC;

  TestDsrP.PEControl -> PacketEngineC;
  TestDsrP.AMControl -> ActiveMessageC;

  TestDsrP.SendA1 -> SendA1C;
  TestDsrP.SendA2 -> SendA2C;
  TestDsrP.SendA3 -> SendA3C;
  TestDsrP.AMPacket -> SendA1C;
  TestDsrP.Packet -> SendA1C;

  TestDsrP.Receive -> ReceiveAC;

  TestDsrP.Timer -> TimerC;
  TestDsrP.LinkTimer -> LinkTimerC;

}
