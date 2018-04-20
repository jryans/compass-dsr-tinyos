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
 * Access some kind of route cache or table that stores information about
 * paths or links in the network and looks for routes when requested.
 *
 * @author Ryan Stinnett
 */

interface RouteCache {

  /**
   * Adds a path to the route cache with a given number of links along the
   * path and optionally adds the reverse path as well.
   *
   * @param nodes An array of nodes that make up the path to add.
   * @param numLinks The number of links along the path.
   * @param reverse If TRUE, the reverse path is also added.
   */
  command void addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks, bool reverse);

  /**
   * Removes any information stored for a given link from the route cache.
   * If the cache stores entire paths, then any path containing the link
   * must at least be shortened enough to remove the given link or else
   * discarded entirely.
   *
   * @param src The source node in the link to remove.
   * @param dest The destination node in the link to remove.
   * @param reverse If TRUE, the reverse path is also removed.
   */
  command void removeLink(route_cache_node_id_t src, route_cache_node_id_t dest, bool reverse);

  /**
   * Indicates the need for a route from node src to node dest.  This is
   * tracked by the route cache until the need is met.
   *
   * @param src The source node of the route.
   * @param dest The destination node of the route.
   */
  command void trackRoute(route_cache_node_id_t src, route_cache_node_id_t dest);

  /**
   * Requests an initial check for a route from node src to node dest.
   *
   * @param src The source node of the route.
   * @param dest The destination node of the route.
   */
  command void checkRoute(route_cache_node_id_t src, route_cache_node_id_t dest);

  /**
   * Provides the newest information available pertaining to a requested
   * route.  Whether or not a route is available when the request is made,
   * a routeUpdate will be signaled once the current availability is known.
   * If the route is not initially available, a subsequent routeUpdate will
   * be signaled if a route is later found and the route was requested via
   * the trackRoute command.  If a route was found, numLinks is the number
   * of links along the route.  If a route was not found, numLinks is 0.
   * The route itself is accessible via the RouteNodeList interface.  Note
   * that RouteNodeList traverses the route <b>in reverse</b>, returning the
   * previous or source node for a given node in the route.
   *
   * @param src The source node of the route.
   * @param dest The destination node of the route.
   * @param numLinks Number of links along the route if one was found, 0
   *                 if no route was found.
   */
  event void routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest,
                         route_cache_link_id_t numLinks);

}
