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
 * A simple link cache that does not automatically remove links and
 * assigns a weight of 1 to all links.
 *
 * @author Ryan Stinnett
 */

#include "RouteCache.h"
#include <Graph.h>

generic configuration SimpleLinkCacheC(route_cache_node_id_t maxNodes,
                                       route_cache_link_id_t maxLinks) {
  provides {
    interface RouteCache;
    interface IndexedIterator<route_cache_node_id_t> as RouteNodeList;
  }
}

implementation {

  components SimpleLinkCacheP, new GraphWeightedC(maxNodes, maxLinks,
             GRAPH_PARALLEL_EDGES_NOT_ALLOWED, graph_edge_unit_weight_t),
             new BitVectorC(maxNodes) as TrackC,
             new BitVectorC(maxNodes) as InitialC,
             GraphEdgeUnitWeightC, ActiveMessageC;

  RouteCache = SimpleLinkCacheP;

  RouteNodeList = GraphWeightedC.PathEdgeList;

  GraphWeightedC.GraphEdgeWeight -> GraphEdgeUnitWeightC;

  SimpleLinkCacheP.Graph -> GraphWeightedC;
  SimpleLinkCacheP.SourceShortestPath -> GraphWeightedC;

  SimpleLinkCacheP.Track -> TrackC;
  SimpleLinkCacheP.Initial -> InitialC;

  SimpleLinkCacheP.AMPacket -> ActiveMessageC;

}
