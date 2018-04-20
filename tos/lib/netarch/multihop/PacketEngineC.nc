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
 * Wires supporting modules needed by any PacketEngineP.
 *
 * @author Ryan Stinnett
 */

#include "PacketEngine.h"

configuration PacketEngineC {
  provides {
    interface StdControl;
    interface AMSend as Send[packet_client_id_t clientId];
    interface Receive[am_id_t upperId];
    interface Intercept[am_id_t upperId];
    interface Packet;
    interface PacketEngine[am_id_t lowerId];
    interface IndexedIterator<packet_id_t> as PacketWaitList[am_id_t lowerId];
  }
  uses {
    interface AMSend as SubSend[am_id_t lowerId];
    interface Receive as SubReceive[am_id_t lowerId];
    interface Packet as SubPacket[am_id_t lowerId];
    interface PacketEngineClient[packet_client_id_t clientId];
  }
}

implementation {

  components MainC, PacketEngineP,
             new LruDataCacheC(packet_send_entry_t, PacketEngineP.SEND_SIZE) as SendQueueC,
             new PoolC(message_t, PacketEngineP.RECEIVE_SIZE) as ReceivePoolC,
             new PoolC(message_t, PacketEngineP.SEND_SIZE) as SendPoolC,
             new StateC() as SendStateC, RandomC,
             new TimerMilliC() as SendBackoffC, ActiveMessageC;

  StdControl = PacketEngineP;
  Send = PacketEngineP;
  Receive = PacketEngineP;
  Intercept = PacketEngineP;
  Packet = PacketEngineP;
  PacketEngine = PacketEngineP;
  PacketWaitList = PacketEngineP;
  SubSend = PacketEngineP;
  SubReceive = PacketEngineP;
  SubPacket = PacketEngineP;
  PacketEngineClient = PacketEngineP;

  MainC.SoftwareInit -> PacketEngineP;

  SendQueueC.Equal -> PacketEngineP;

  PacketEngineP.RadioControl -> ActiveMessageC;
  PacketEngineP.SendQueue -> SendQueueC;
  PacketEngineP.ReceivePool -> ReceivePoolC;
  PacketEngineP.SendPool -> SendPoolC;
  PacketEngineP.SendState -> SendStateC;
  PacketEngineP.Random -> RandomC;
  PacketEngineP.SendBackoff -> SendBackoffC;
  PacketEngineP.SubSendPacket -> ActiveMessageC;
  PacketEngineP.AMPacket -> ActiveMessageC;

}
