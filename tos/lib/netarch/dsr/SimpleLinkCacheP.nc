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

#include <Graph.h>

module SimpleLinkCacheP {
  provides interface RouteCache;
  uses {
    interface Boot;
    interface BitVector as Track;
    interface BitVector as Initial;
    interface AMPacket;
    interface Graph;
    interface SourceShortestPath;
  }
}

implementation {

  /********** Boot **********/

  event void Boot.booted() {
    call Track.clearAll();
    call Initial.clearAll();
  }

  /********** RouteCache **********/

  /**
   * Adds a path to the route cache with a given number of links along the
   * path and optionally adds the reverse path as well.
   *
   * @param nodes An array of nodes that make up the path to add.
   * @param numLinks The number of links along the path.
   * @param reverse If TRUE, the reverse path is also added.
   */
  command void RouteCache.addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks,
                                  bool reverse) {
    route_cache_node_id_t i;
    // Add new path info to the graph
    for (i = 0; i < numLinks; i++) {
      call Graph.insert(nodes[i], nodes[i + 1]);
      if (reverse)
        call Graph.insert(nodes[numLinks - i], nodes[numLinks - i - 1]);
    }
    // Rebuild to account for added info, if any
    call SourceShortestPath.buildTree(call AMPacket.address());
  }

  /**
   * Removes any information stored for a given link from the route cache.
   * If the cache stores entire paths, then any path containing the link
   * must at least be shortened enough to remove the given link or else
   * discarded entirely.
   *
   * @param src The source node in the link to remove.
   * @param dest The destination node in the link to remove.
   * @param reverse If TRUE, the reverse path is also added.
   */
  command void RouteCache.removeLink(route_cache_node_id_t src, route_cache_node_id_t dest,
                                     bool reverse) {
    call Graph.remove(src, dest);
    if (reverse)
      call Graph.remove(dest, src);
    // Rebuild to account for removed info
    call SourceShortestPath.buildTree(call AMPacket.address());
  }

  /**
   * Indicates the need for a route from node src to node dest.  This is
   * tracked by the route cache until the need is met.
   *
   * @param src The source node of the route.
   * @param dest The destination node of the route.
   */
  command void RouteCache.trackRoute(route_cache_node_id_t src, route_cache_node_id_t dest) {
    // Check if dest is already tracked
    if (call Track.get(dest))
      return;
    call Track.set(dest); // Mark as a tracked dest
    call RouteCache.checkRoute(src, dest);
  }

  /**
   * Requests an initial check for a route from node src to node dest.
   *
   * @param src The source node of the route.
   * @param dest The destination node of the route.
   */
  command void RouteCache.checkRoute(route_cache_node_id_t src, route_cache_node_id_t dest) {
    route_cache_link_id_t numLinks;
    // Check if dest is waiting for initial result
    if (call Initial.get(dest))
      return;
    // Check if tree is currently building
    if (call SourceShortestPath.buildingTree()) {
      call Initial.set(dest);
      return;
    }
    // Look for a route
    numLinks = call SourceShortestPath.edgeCount(dest);
    if (numLinks > 0) // Route found
      call Track.clear(dest); // Don't need to track anymore
    // Signal initial update
    signal RouteCache.routeUpdate(src, dest, numLinks);
  }

  /********** Graph **********/

  /**
   * The structure of the graph changed because an edge was inserted.
   *
   * @param m The key for the edge that was inserted.
   */
  event void Graph.inserted(graph_edge_id_t m) {}

  /**
   * The structure of the graph changed because an edge was removed.
   *
   * @param m The key for the edge that was removed.
   */
  event void Graph.removed(graph_edge_id_t m) {}

  /********** SourceShortestPath **********/

  /**
   * The shortest path tree from vertex src is complete.
   *
   * @param src The source vertex.
   */
  event void SourceShortestPath.builtTree(graph_vertex_id_t src) {
    route_cache_node_id_t dest;
    route_cache_link_id_t numLinks;
    // Check if there is now a route to any needed dests
    for (dest = 0; dest < call Track.size(); dest++) {
      if (call Initial.get(dest)) {
        call Initial.clear(dest);
        numLinks = call SourceShortestPath.edgeCount(dest);
        if (numLinks > 0) // Route found
          call Track.clear(dest); // Don't need to track anymore
        // Signal initial update
        signal RouteCache.routeUpdate(src, dest, numLinks);
      } else if (call Track.get(dest) &&
          (numLinks = call SourceShortestPath.edgeCount(dest)) > 0) {
        call Track.clear(dest);
        signal RouteCache.routeUpdate(src, dest, numLinks);
      }
    }
    // Rebuild if graph changed during the build
    if (call SourceShortestPath.rebuildNeeded(src))
      call SourceShortestPath.buildTree(src);
  }

  /**
   * The shortest path from vertex src to vertex dest is complete.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   */
  event void SourceShortestPath.builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest,
                                            error_t pathResult) {}

}
