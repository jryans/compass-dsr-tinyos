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
 * Uses Djikstra's algorithm with a priority queue holding fringe vertices to
 * find the single source shortest path.  All weights are assumed to be
 * non-negative.
 *
 * @author Ryan Stinnett
 */

generic module SourceShortestPathP(graph_vertex_id_t maxVertices,
                                   typedef graph_edge_weight_t @integer()) {
  provides {
    interface Init;
    interface SourceShortestPath;
    interface IndexedIterator<graph_vertex_id_t> as PathEdgeList;
    interface Compare<graph_vertex_id_t>;
  }
  uses {
    interface PriorityQueue;
    interface Graph;
    interface GraphEdge;
    interface GraphEdgeWeight<graph_edge_weight_t>;
    interface IndexedIterator<graph_edge_id_t> as GraphEdgeList;
  }
}

implementation {

  /********** Variables **********/

  graph_vertex_id_t spt[maxVertices]; // spt[i] is vertex i's source or parent
                                       // vertex in the shortest path tree.
  graph_vertex_id_t fringe[maxVertices]; // Similar to spt[i], but for vertices
                                          // not yet on the tree.
  graph_edge_weight_t weight[maxVertices]; // Total cost of the path to i.

  graph_vertex_id_t lastSrc; // Ensures that the current SPT is for the same
                             // source.

  bool rebuildNeeded; // If the graph structure changes, this is set to TRUE to
                      // require the SPT to be rebuilt next time.

  graph_vertex_id_t lastDest; // buildTreeTo stops once this dest

  error_t foundDest; // Saved result from last run of buildTreeTo

  bool buildingTree; // TRUE if currently building, FALSE if not.

  /********** Function Declartions **********/

  void initTree();
  void printPaths();
  void printPathLink(graph_vertex_id_t m, char *path, char *tmp);
  task void buildTreeTask();

  /********** Init **********/

  command error_t Init.init() {
    buildingTree = FALSE;
    lastSrc = maxVertices;
    rebuildNeeded = TRUE;
    initTree();
    return SUCCESS;
  }

  /********** SourceShortestPath **********/

  /**
   * Build a shortest path tree from vertex src.
   *
   * @param src The source vertex.
   * @return If the vertex is too large then ESIZE or if a tree is currently
   *         being built then EBUSY, else SUCCESS.
   */
  command error_t SourceShortestPath.buildTree(graph_vertex_id_t src) {
    return call SourceShortestPath.buildTreeTo(src, maxVertices);
  }

  /**
   * Build the shortest path from vertex src to vertex dest.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   * @return If the vertex is too large then ESIZE or if a tree is currently
   *         being built then EBUSY, else SUCCESS.
   */
  command error_t SourceShortestPath.buildTreeTo(graph_vertex_id_t src,
                                                 graph_vertex_id_t dest) {
    if (src >= maxVertices || dest > maxVertices)
      // dest can equal maxVertices since this signals building the
      // complete SPT.
      return ESIZE;
    if (buildingTree)
      return EBUSY;
    if (src == lastSrc && dest == lastDest && !rebuildNeeded) {
      dbg("SourceShortestPathP", "SSP: SPT for %u already built!\n", src);
      post buildTreeTask(); // Signals build completion
      return SUCCESS;
    }
    dbg("SourceShortestPathP", "SSP: Building SPT for %u\n", src);
    buildingTree = TRUE;
    lastSrc = src;
    lastDest = dest;
    rebuildNeeded = FALSE;
    initTree();
    // Add the source itself first
    weight[src] = 0;
    call PriorityQueue.insert(src);
    fringe[src] = src;
    // Build the SPT
    post buildTreeTask();
    return SUCCESS;
  }

  /**
   * Checks if the tree should be rebuilt either because the source has changed
   * or because the underlying graph structure has changed.
   *
   * @param src The source vertex.
   * @return Whether a rebuild is needed.
   */
  command bool SourceShortestPath.rebuildNeeded(graph_vertex_id_t src) {
    return rebuildNeeded || src != lastSrc;
  }

  /**
   * Checks if the tree is currently being built.
   *
   * @return Whether the tree is being built.
   */
  command bool SourceShortestPath.buildingTree() {
    return buildingTree;
  }

  /**
   * Get the number of edges to the destination vertex.
   * For example, if the shortest path from A to C was A -> D -> C, edgeCount()
   * would return 2.
   *
   * @param dest The destination vertex.
   * @return The number of edges.  If there is no path to the given destination,
   *         or if an input vertex is too large, then the count is 0.
   */
  command graph_edge_id_t SourceShortestPath.edgeCount(graph_vertex_id_t dest) {
    if (dest >= maxVertices || spt[dest] == maxVertices)
      return 0;
    else {
      graph_edge_id_t cnt;
      for (cnt = 0; !call PathEdgeList.end(dest);
           dest = call PathEdgeList.next(dest))
        cnt++;
      return cnt;
    }
  }

  /********** PathEdgeList **********/

  /**
   * After the tree from a source vertex has been built, successive calls of
   * edgeSrc trace the path to vertex dest in reverse by giving the previous
   * source.  For example, if the shortest path from A to C was A -> D -> C,
   * next() would be used as follows:
   *   next(C) = D
   *   next(D) = A
   * If next(A) were called, it would return A.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   * @return The vertex just before the vertex dest in the shortest path tree.
   *         If such an edge is not part of the current tree or either vertex is
   *         too large, then maxVertices.
   */
  command graph_vertex_id_t PathEdgeList.next(graph_vertex_id_t dest) {
    if (dest >= maxVertices)
      return maxVertices;
    return spt[dest];
  }

  /**
   * Checks whether you have already reached the end of the path.
   *
   * @param dest The destination vertex.
   * @return TRUE if the current item is the source of the path or none exists,
   *         FALSE otherwise.
   */
  command iterator_end_t PathEdgeList.end(graph_vertex_id_t dest) {
    return spt[dest] == maxVertices || spt[dest] == dest;
  }

  /********** Tasks **********/

  /**
   * Pulls the next vertex off the queue and updates any edges that have changed
   * as a result.
   */
  task void buildTreeTask() {
    if (call PriorityQueue.empty()) { // SPT done
      if (lastDest != maxVertices) {
        if (foundDest == SUCCESS)
          dbg("SourceShortestPathP",
            "SSP: Destination vertex %u added to SPT, stopping build early.\n", lastDest);
        else
          dbg("SourceShortestPathP", "SSP: No path was found to destination %u!\n", lastDest);
      }
      buildingTree = FALSE;
      printPaths();
      if (lastDest != maxVertices)
        signal SourceShortestPath.builtTreeTo(lastSrc, lastDest, foundDest);
      else
        signal SourceShortestPath.builtTree(lastSrc);
    } else {
      // Add best non-tree edge and examine what changes
      graph_edge_id_t e;
      graph_vertex_id_t s = call PriorityQueue.removeBest(); // Source for best non-tree edge
      spt[s] = fringe[s]; // Add its source to the tree
      if (s == lastDest) { // Added destination, stop early.
        foundDest = SUCCESS;
        call PriorityQueue.clear();
        post buildTreeTask();
      }
      dbg("SourceShortestPathP", "SSP: Added edge %u -> %u to SPT\n", spt[s], s);
      for (e = call Graph.edgeList(s); !call GraphEdgeList.end(e);
           e = call GraphEdgeList.next(e)) {
        graph_vertex_id_t d = call GraphEdge.dest(e);
        graph_edge_weight_t eWeight = weight[s] + call GraphEdgeWeight.weight(e);
        if (fringe[d] == maxVertices) {
          // No edge on the queue yet for destination d
          dbg("SourceShortestPathP", "SSP: Adding edge %u -> %u (%u) to PQ\n",
              s, d, eWeight);
          weight[d] = eWeight;
          call PriorityQueue.insert(d);
          fringe[d] = s;
        } else if (spt[d] == maxVertices && eWeight < weight[d]) {
          // Better edge found for destination d
          dbg("SourceShortestPathP", "SSP: Edge %u -> %u (%u) replacing %u -> %u (%u) in PQ\n",
              s, d, eWeight, fringe[d], d, weight[d]);
          weight[d] = eWeight;
          call PriorityQueue.moveUp(d);
          fringe[d] = s;
        }
      }
      post buildTreeTask(); // Repeat for next vertex on the queue
    }
  }

  /********** Compare **********/

  /**
   * Tests whether a and b meet a condition that results in a boolean value.
   *
   * @param a First item to test.
   * @param b Second item to test.
   * @return TRUE if the condition is met, FALSE otherwise.
   */
  command int16_t Compare.test(graph_vertex_id_t a, graph_vertex_id_t b) {
    return weight[b] - weight[a];
  }

  /********** Graph **********/

  /**
   * The structure of the graph changed because an edge was inserted.
   *
   * @param m The key for the edge that was inserted.
   */
  event void Graph.inserted(graph_edge_id_t m) {
    rebuildNeeded = TRUE;
  }

  /**
   * The structure of the graph changed because an edge was removed.
   *
   * @param m The key for the edge that was removed.
   */
  event void Graph.removed(graph_edge_id_t m) {
    rebuildNeeded = TRUE;
  }

  /********** GraphEdgeWeight **********/

  /**
   * The weight of an edge in the graph changed.
   *
   * @param m The key for the edge that had its weight changed.
   */
  event void GraphEdgeWeight.weightChanged(graph_edge_id_t m) {
    rebuildNeeded = TRUE;
  }

  /********** Functions **********/

  /**
   * Resets all data structures before building a new tree.
   */
  void initTree() {
    graph_vertex_id_t i;
    for (i = 0; i < maxVertices; i++) {
      spt[i] = maxVertices;
      fringe[i] = maxVertices;
    }
    call PriorityQueue.clear();
    foundDest = FAIL;
  }

  /**
   * Prints out the paths in the SPT.
   */
  void printPaths() {
#ifdef TOSSIM
    graph_vertex_id_t d;
    dbg("SourceShortestPathP", "SSP: Current SPT:\n");
    for (d = 0; d < maxVertices; d++) {
      dbg_clear("SourceShortestPathP", "Dest %u: ", d);
      if (spt[d] == maxVertices)
        dbg_clear("SourceShortestPathP", "X\n");
      else {
        char path[maxVertices * 2] = "";
        char tmp[maxVertices * 2] = "";
        printPathLink(d, path, tmp);
        dbg_clear("SourceShortestPathP", "%s, Cost: %u\n", path, weight[d]);
      }
    }
#endif // TOSSIM
  }

  /**
   * Prints a link along a path in the SPT.
   */
  void printPathLink(graph_vertex_id_t m, char *path, char *tmp) {
#ifdef TOSSIM
    strcpy(tmp, path);
    if (m == lastSrc)
      sprintf(path, "%u%s", m, tmp);
    else {
      sprintf(path, "-%u%s", m, tmp);
      printPathLink(spt[m], path, tmp);
    }
#endif // TOSSIM
  }

}
