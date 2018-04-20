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
 * Bundles the components which route and process DSR.
 *
 * @author Ryan Stinnett
 */

#include "DsrControl.h"

configuration DsrP {
  provides {
    interface Packet;
  }
  uses {
    interface PacketEngine as SingleDsrPacketEngine;
    interface PacketEngine as SinglePacketEngine;
    interface PacketEngine as DsrPacketEngine;
    interface IndexedIterator<packet_id_t> as SingleDsrPacketWaitList;
    interface IndexedIterator<packet_id_t> as SinglePacketWaitList;
    interface IndexedIterator<packet_id_t> as DsrPacketWaitList;

    interface PacketAcknowledgements as Acks;
    interface SinglePacket;
    interface AMPacket;
    interface Packet as ComposePacket;
    interface Packet as SubPacket;

    interface AMSend as Send;
  }
}

implementation {

  components DsrOptionsC, PacketEngineP, RandomC, MainC,
             new DsrControlP(PacketEngineP.BUFFER_SIZE),
             new DsrRouteCacheC(DSR_ROUTE_CACHE_MAX_NODES, DSR_ROUTE_CACHE_MAX_LINKS),
             new LruDataCacheC(dsr_route_request_in_t,
                               DSR_ROUTE_REQUEST_IN_SIZE) as RouteRequestInCacheC,
             new LruDataCacheC(dsr_route_request_out_t,
                               DSR_ROUTE_REQUEST_OUT_SIZE) as RouteRequestOutCacheC,
             new DataTimerC(am_addr_t, DSR_ROUTE_REQUEST_OUT_SIZE) as RouteRequestOutTimerC,
             new BitVectorC(PacketEngineP.BUFFER_SIZE) as ComposeC,
             new BitVectorC(PacketEngineP.BUFFER_SIZE) as SalvageC;

  Packet = DsrOptionsC;
  SubPacket = DsrOptionsC;

  SingleDsrPacketEngine = DsrControlP.SingleDsrPacketEngine;
  SinglePacketEngine = DsrControlP.SinglePacketEngine;
  DsrPacketEngine = DsrControlP.DsrPacketEngine;
  SingleDsrPacketWaitList = DsrControlP.SingleDsrPacketWaitList;
  SinglePacketWaitList = DsrControlP.SinglePacketWaitList;
  DsrPacketWaitList = DsrControlP.DsrPacketWaitList;

  Acks = DsrControlP;
  SinglePacket = DsrControlP;
  AMPacket = DsrControlP;
  ComposePacket = DsrControlP;

  Send = DsrControlP;

  DsrControlP.DsrHeader -> DsrOptionsC;
  DsrControlP.RouteRequest -> DsrOptionsC.RouteRequest;
  DsrControlP.RouteError -> DsrOptionsC.RouteError;
  DsrControlP.RouteErrorList -> DsrOptionsC.RouteErrorList;
  DsrControlP.SourceRoute -> DsrOptionsC.SourceRoute;

  DsrControlP.RouteCache -> DsrRouteCacheC;
  DsrControlP.SalvageRouteCache -> DsrRouteCacheC;
  DsrControlP.RouteNodeList -> DsrRouteCacheC;
  DsrControlP.RouteRequestInCache -> RouteRequestInCacheC;
  DsrControlP.RouteRequestOutCache -> RouteRequestOutCacheC;
  DsrControlP.RouteRequestOutTimer -> RouteRequestOutTimerC;

  RouteRequestInCacheC.Equal -> DsrControlP.RouteRequestInEqual;
  RouteRequestOutCacheC.Equal -> DsrControlP.RouteRequestOutEqual;

  DsrControlP.Compose -> ComposeC;
  DsrControlP.Salvage -> SalvageC;

  DsrControlP.Random -> RandomC;

  DsrControlP.Boot -> MainC;

}
