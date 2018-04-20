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
 * Requests and rebuilds multi-packet data structures.  Can act as both
 * a client that receives data from the sink, and as a server that sends
 * data to the sink.
 *
 * @author Ryan Stinnett
 */

#include "BigPack.h"

configuration BigPackC {
  provides {
    interface BigPackServer[uint8_t chan];
    interface BigPackClient[uint8_t chan];
  }
}

implementation {

  components MainC, BigPackP, new TimerMilliC() as TimeoutC,
             new SingleSenderC(AM_BIGPACK_HEADER) as SendHeaderC,
             new SingleSenderC(AM_BIGPACK_DATA) as SendDataC,
             new SingleReceiverC(AM_BIGPACK_HEADER) as ReceiveHeaderC,
             new SingleReceiverC(AM_BIGPACK_DATA) as ReceiveDataC;
  components BaseStationC;

  BigPackServer = BigPackP;
  BigPackClient = BigPackP;

  MainC.SoftwareInit -> BigPackP;

  BigPackP.Timeout -> TimeoutC;
  BigPackP.SendHeader -> SendHeaderC;
  BigPackP.SendData -> SendDataC;
  BigPackP.ReceiveHeader -> ReceiveHeaderC;
  BigPackP.ReceiveData -> ReceiveDataC;
  BigPackP.SinglePacket -> SendHeaderC;

}
