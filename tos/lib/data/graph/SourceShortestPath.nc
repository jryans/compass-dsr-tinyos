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
 * Access details on the shortest path between vertices of a graph.
 *
 * @author Ryan Stinnett
 */

interface SourceShortestPath {

  /**
   * Build a shortest path tree from vertex src.
   *
   * @param src The source vertex.
   * @return If the vertex is too large then ESIZE or if a tree is currently
   *         being built then EBUSY, else SUCCESS.
   */
  command error_t buildTree(graph_vertex_id_t src);

  /**
   * The shortest path tree from vertex src is complete.
   *
   * @param src The source vertex.
   */
  event void builtTree(graph_vertex_id_t src);

  /**
   * Build the shortest path from vertex src to vertex dest.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   * @return If the vertex is too large then ESIZE or if a tree is currently
   *         being built then EBUSY, else SUCCESS.
   */
  command error_t buildTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest);

  /**
   * The shortest path from vertex src to vertex dest is complete.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   */
  event void builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest,
                         error_t pathResult);

  /**
   * Checks if the tree should be rebuilt either because the source has changed
   * or because the underlying graph structure has changed.
   *
   * @param src The source vertex.
   * @return Whether a rebuild is needed.
   */
  command bool rebuildNeeded(graph_vertex_id_t src);

  /**
   * Checks if the tree is currently being built.
   *
   * @return Whether the tree is being built.
   */
  command bool buildingTree();

  /**
   * Get the number of edges to the destination vertex.
   * For example, if the shortest path from A to C was A -> D -> C, edgeCount()
   * would return 2.
   *
   * @param dest The destination vertex.
   * @return The number of edges.  If there is no path to the given destination,
   *         or if an input vertex is too large, then the count is 0.
   */
  command graph_edge_id_t edgeCount(graph_vertex_id_t dest);

}
