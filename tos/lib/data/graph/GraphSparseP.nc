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
 * A sparse graph using adjacency lists.
 *
 * @author Ryan Stinnett
 */

#include "Graph.h"

generic module GraphSparseP(graph_vertex_id_t maxVertices,
                            graph_edge_id_t maxEdges,
                            bool parallelEdges) {
  provides {
    interface Init;
    interface Graph;
    interface GraphEdge;
    interface IndexedIterator<graph_edge_id_t> as GraphEdgeList;
  }
  uses interface IndexedAlloc;
}

implementation {

  /********** Variables **********/

  // Graph data
  graph_vertex_id_t vSize;
  graph_edge_id_t v[maxVertices]; // First edge ID in the list for each vertex.
  graph_edge_node_t e[maxEdges];

  /********** Function Declarations **********/

  void printGraph();

  /********** Init **********/

  command error_t Init.init() {
    graph_vertex_id_t i;
    vSize = 0;
    for (i = 0; i < maxVertices; i++)
      v[i] = maxEdges;
    return SUCCESS;
  }

  /********** Graph **********/

  /**
   * Gets the number of vertices currently in the graph.  For some
   * implementations, this will always equal maxVertices() if all vertices
   * are preallocated.
   *
   * @return The number of vertices currently in the graph.
   */
  command graph_vertex_id_t Graph.vertices() {
    return vSize;
  }

  /**
   * Gets the maximum number of vertices that the graph can hold.
   *
   * @return The maximum number of vertices that the graph can hold.
   */
  command graph_vertex_id_t Graph.maxVertices() {
    return maxVertices;
  }

  /**
   * Gets the number of edges currently in the graph.  This should return the
   * number of "conceptual" edges.  For example, an undirected graph might use
   * two directed edges for each undirected edge in its implementation, but this
   * only counts as one edge here.  For some implementations, this will always
   * equal maxEdges() if all edges are preallocated.
   *
   * @return The number of edges currently in the graph.
   */
  command graph_edge_id_t Graph.edges() {
    return call IndexedAlloc.size();
  }

  /**
   * Gets the maximum number of edges that the graph can hold.  This should
   * return the number of "conceptual" edges.  For example, an undirected graph
   * might use two directed edges for each undirected edge in its
   * implementation, but this only counts as one edge here.
   *
   * @return The maximum number of edges that the graph can hold.
   */
  command graph_edge_id_t Graph.maxEdges() {
    return maxEdges;
  }

  /**
   * Checks if the graph is directed or not.  This value should not change at
   * run-time.
   *
   * @return TRUE if the graph is directed, FALSE if it is undirected.
   */
  command bool Graph.directed() {
    return TRUE;
  }

  /**
   * Checks if parallel edges are allowed or not.  This value should not change
   * at run-time.
   *
   * @return TRUE if parallel edges are allowed, FALSE if they are not.
   */
  command bool Graph.parallelEdges() {
    return parallelEdges;
  }

  /**
   * Add a new edge to the graph between vertices s and d.
   *
   * @param s The first vertex or source of the edge.
   * @param d The second vertex or destination of the edge.
   * @return If all of the edges have already been allocated or if parallel
   *         edges are not supported and this edge has already been added or if either
   *         vertex is too large, then maxEdges() is returned.  Otherwise, the key for
   *         the new edge is returned.
   */
  command graph_edge_id_t Graph.insert(graph_vertex_id_t s,
                                       graph_vertex_id_t d) {
    graph_edge_id_t newEdge;
    if (s >= maxVertices || d >= maxVertices) {
      dbgerror("GraphSparseP", "GS: At least one vertex too large!\n");
      return maxEdges;
    }
    if (!parallelEdges && call Graph.edge(s, d) != maxEdges)
      return maxEdges;
    dbg("GraphSparseP", "GS: Inserting edge %u -> %u\n", s, d);
    newEdge = call IndexedAlloc.alloc();
    if (newEdge == maxEdges) {
      dbgerror("GraphSparseP", "GS: Can't hold any more edges!\n");
      return maxEdges;
    }
    if (v[s] == maxEdges)
      vSize++; // First node for source s
    e[newEdge].next = v[s]; // The old first node for source s becomes next node for the new node.
    e[newEdge].dest = d;
    v[s] = newEdge; // The new node becomes the first node for source s.
    signal Graph.inserted(newEdge);
    printGraph();
    return newEdge;
  }

  /**
   * Remove an edge from the graph between vertices s and d.
   *
   * @param s The first vertex or source of the edge.
   * @param d The second vertex or destination of the edge.
   * @return SUCCESS if the edge was found and removed, EINVAL if it was not.
   *         ESIZE returned if either vertex is too large.
   */
  command error_t Graph.remove(graph_vertex_id_t s, graph_vertex_id_t d) {
    graph_edge_id_t curEdge, nextEdge;
    dbg("GraphSparseP", "GS: Removing edge %u -> %u\n", s, d);
    if (s >= maxVertices || d >= maxVertices) {
      dbgerror("GraphSparseP", "GS: At least one vertex too large!\n");
      return ESIZE;
    }
    // Check first edge in list
    curEdge = v[s];
    if (curEdge != maxEdges) {
      if (e[curEdge].dest == d) {
        // First node's dest is a match
        v[s] = e[curEdge].next; // Remove e[curEdge] from the list
        call IndexedAlloc.free(curEdge);
        if (v[s] == maxEdges)
          vSize--; // No remaining nodes for source s
        signal Graph.removed(curEdge);
        printGraph();
        return SUCCESS;
      }
      // Check remaining edges in list
      while (e[curEdge].next != maxEdges) {
        // Traverse the list for the source vertex
        nextEdge = e[curEdge].next;
        if (e[nextEdge].dest == d) {
          // Next node's dest is a match
          e[curEdge].next = e[nextEdge].next; // Remove e[nextEdge] from the list
          call IndexedAlloc.free(nextEdge);
          signal Graph.removed(nextEdge);
          printGraph();
          return SUCCESS;
        }
        curEdge = nextEdge;
      }
    }
    dbg("GraphSparseP", "GS: Edge not found!\n");
    return EINVAL; // Not found
  }

  /**
   * Retrieves an edge between vertices s and d, if it exists.  If the graph is
   * directed, s is taken to be the source and d is taken to be the destination
   * of the directed edge.
   *
   * @param s The first vertex or source of the edge.
   * @param d The second vertex or destination of the edge.
   * @return The edge key if the edge was found, maxEdges() if it was not.
   */
  command graph_edge_id_t Graph.edge(graph_vertex_id_t s, graph_vertex_id_t d) {
    graph_edge_id_t curEdge;
    for (curEdge = v[s]; curEdge != maxEdges; curEdge = e[curEdge].next) {
      // Traverse the list for the source vertex
      if (e[curEdge].dest == d) {
        // This node's dest is a match
        return curEdge;
      }
    }
    return maxEdges; // Not found
  }

  /**
   * Retrieves a list of edges adjacent to vertex s.  If the graph is directed,
   * s is taken to be the source of the directed edge.
   *
   * @param s The first vertex or source of the edge.
   * @return The key to the first node of the list if the vertex was valid,
   *         maxEdges() if it was not.
   */
  command graph_edge_id_t Graph.edgeList(graph_vertex_id_t s) {
    return v[s];
  }

  /********** GraphEdge **********/

  /**
   * Get the first or source vertex of the edge.
   *
   * @param m The key for the edge.
   * @return The first or source vertex.
   */
  command graph_vertex_id_t GraphEdge.src(graph_edge_id_t m) {
    // Unsure of the best way to support this.
    return maxVertices;
  }

  /**
   * Get the second or destination vertex of the edge.
   *
   * @param m The key for the edge.
   * @return The second or destination vertex.
   */
  command graph_vertex_id_t GraphEdge.dest(graph_edge_id_t m) {
    return e[m].dest;
  }

  /********** GraphEdgeList **********/

  /**
   * Gets the index of the next item from the list.
   *
   * @param m Current list item's index.
   * @return The next item's index.
   */
  command graph_edge_id_t GraphEdgeList.next(graph_edge_id_t m) {
    return e[m].next;
  }

  /**
   * Checks whether you have already reached the end of the list.
   *
   * @param m Current list item's index.
   * @return TRUE if the current item is the end of the list, FALSE otherwise.
   */
  command iterator_end_t GraphEdgeList.end(graph_edge_id_t m) {
    return m == maxEdges;
  }

  /********** Functions **********/

  /**
   * Prints out the current state of the graph.
   */
  void printGraph() {
#ifdef TOSSIM
    graph_vertex_id_t s;
    dbg("GraphSparseP", "GS: Current Graph:\n");
    for (s = 0; s < maxVertices; s++) {
      graph_edge_id_t cur;
      dbg_clear("GraphSparseP", "%u: ", s);
      for (cur = v[s]; cur != maxEdges; cur = e[cur].next)
        dbg_clear("GraphSparseP", "%u(%u)-", e[cur].dest, cur);
      dbg_clear("GraphSparseP", "|\n");
    }
#endif // TOSSIM
  }

}
