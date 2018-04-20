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
 * Basic operations for processsing and modifying a graph.
 *
 * @author Ryan Stinnett
 */

#include "Graph.h"

interface Graph {

  /**
   * Gets the number of vertices currently in the graph.  For some
   * implementations, this will always equal maxVertices() if all vertices
   * are preallocated.
   *
   * @return The number of vertices currently in the graph.
   */
  command graph_vertex_id_t vertices();

  /**
   * Gets the maximum number of vertices that the graph can hold.
   *
   * @return The maximum number of vertices that the graph can hold.
   */
  command graph_vertex_id_t maxVertices();

  /**
   * Gets the number of edges currently in the graph.  This should return the
   * number of "conceptual" edges.  For example, an undirected graph might use
   * two directed edges for each undirected edge in its implementation, but this
   * only counts as one edge here.  For some implementations, this will always
   * equal maxEdges() if all edges are preallocated.
   *
   * @return The number of edges currently in the graph.
   */
  command graph_edge_id_t edges();

  /**
   * Gets the maximum number of edges that the graph can hold.  This should
   * return the number of "conceptual" edges.  For example, an undirected graph
   * might use two directed edges for each undirected edge in its
   * implementation, but this only counts as one edge here.
   *
   * @return The maximum number of edges that the graph can hold.
   */
  command graph_edge_id_t maxEdges();

  /**
   * Checks if the graph is directed or not.  This value should not change at
   * run-time.
   *
   * @return TRUE if the graph is directed, FALSE if it is undirected.
   */
  command bool directed();

  /**
   * Checks if parallel edges are allowed or not.  This value should not change
   * at run-time.
   *
   * @return TRUE if parallel edges are allowed, FALSE if they are not.
   */
  command bool parallelEdges();

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
  command graph_edge_id_t insert(graph_vertex_id_t s, graph_vertex_id_t d);

  /**
   * Remove an edge from the graph between vertices s and d.
   *
   * @param s The first vertex or source of the edge.
   * @param d The second vertex or destination of the edge.
   * @return SUCCESS if the edge was found and removed, EINVAL if it was not.
   *         ESIZE returned if either vertex is too large.
   */
  command error_t remove(graph_vertex_id_t s, graph_vertex_id_t d);

  /**
   * Retrieves an edge between vertices s and d, if it exists.  If the graph is
   * directed, s is taken to be the source and d is taken to be the destination
   * of the directed edge.
   *
   * @param s The first vertex or source of the edge.
   * @param d The second vertex or destination of the edge.
   * @return The edge key if the edge was found, maxEdges() if it was not.
   */
  command graph_edge_id_t edge(graph_vertex_id_t s, graph_vertex_id_t d);

  /**
   * Retrieves a list of edges adjacent to vertex s.  If the graph is directed,
   * s is taken to be the source of the directed edge.
   *
   * @param s The first vertex or source of the edge.
   * @return The key to the first node of the list if the vertex was valid,
   *         maxEdges() if it was not.
   */
  command graph_edge_id_t edgeList(graph_vertex_id_t s);

  /**
   * The structure of the graph changed because an edge was inserted.
   *
   * @param m The key for the edge that was inserted.
   */
  event void inserted(graph_edge_id_t m);

  /**
   * The structure of the graph changed because an edge was removed.
   *
   * @param m The key for the edge that was removed.
   */
  event void removed(graph_edge_id_t m);

}
