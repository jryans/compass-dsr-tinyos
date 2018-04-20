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
 * Builds a weighted graph as edges are added and supports finding the single
 * source shortest path.
 *
 * @author Ryan Stinnett
 */

#include "Graph.h"

generic configuration GraphWeightedC(graph_vertex_id_t maxVertices,
                                     graph_edge_id_t maxEdges,
                                     bool parallelEdges,
                                     typedef graph_edge_weight_t @integer()) {
  provides {
    interface Graph;
    interface GraphEdge;
    interface IndexedIterator<graph_edge_id_t> as GraphEdgeList;
    interface SourceShortestPath;
    interface IndexedIterator<graph_vertex_id_t> as PathEdgeList;
  }
  uses interface GraphEdgeWeight<graph_edge_weight_t>;
}

implementation {

  components new GraphSparseC(maxVertices, maxEdges, parallelEdges),
             new SourceShortestPathC(maxVertices, graph_edge_weight_t);

  Graph = GraphSparseC;
  GraphEdge = GraphSparseC;
  GraphEdgeList = GraphSparseC;
  SourceShortestPathC.Graph -> GraphSparseC;
  SourceShortestPathC.GraphEdge -> GraphSparseC;
  SourceShortestPathC.GraphEdgeList -> GraphSparseC;

  SourceShortestPathC.GraphEdgeWeight = GraphEdgeWeight;

  SourceShortestPath = SourceShortestPathC;
  PathEdgeList = SourceShortestPathC;

}
