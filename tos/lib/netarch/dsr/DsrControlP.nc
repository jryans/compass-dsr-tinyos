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
 * Core component implementing DSR (Dynamic Source Routing) as described
 * in RFC 4728.  A modified DSR Options format that is better suited for
 * WSNs is used here and described in DsrOptions.h.  Currently a work in
 * progress.
 *
 * Implemented:<ul>
 * <li>3.3.1. Caching Overheard Routing Information
 * <li>3.4.1. Packet Salvaging
 * <li>8.1.1. Originating a Packet
 * <li>8.1.2. Adding a DSR Options Header to a Packet
 * <li>8.1.3. Adding a DSR Source Route Option to a Packet
 * <li>8.1.4. Processing a Received Packet
 * <li>8.2.1. Originating a Route Request
 * <li>8.2.4. Originating a Route Reply
 * <li>8.2.6. Processing a Received Route Reply Option
 * <li>8.3.6. Salvaging a Packet
 * </ul>
 * Planned:<ul>
 * <li>3.3.2. Replying to Route Requests Using Cached Routes
 * <li>3.3.3. Route Request Hop Limits
 * <li>3.4.2. Queued Packets Destined over a Broken Link
 * <li>3.4.3. Automatic Route Shortening
 * <li>3.4.4. Increased Spreading of Route Error Messages
 * <li>8.1.5. Processing a Received DSR Source Route Option
 * <li>8.2.2. Processing a Received Route Request Option
 * <li>8.2.3. Generating a Route Reply Using the Route Cache
 * <li>8.2.5. Preventing Route Reply Storms
 * <li>8.3.1. Using Link-Layer Acknowledgements
 * <li>8.3.4. Originating a Route Error
 * <li>8.3.5. Processing a Received Route Error Option
 * <li>8.5. IP Fragmentation and Reassembly
 * </ul>
 * Not Planned:<ul>
 * <li>3.5. Optional DSR Flow State Extension
 * <li>8.1.6. Handling an Unknown DSR Option
 * <li>8.3.2. Using Passive Acknowledgements
 * <li>8.3.3. Using Network-Layer Acknowledgements
 * <li>8.4. Multiple Network Interface Support
 * <li>8.6. Flow State Processing
 * </ul>
 *
 * Account for upper layer data length, might not have enough room.
 * Uses ACKs, thus requiring all all links to be bidirectional.
 * Allow intercepts.
 * Check TLV add calls.
 *
 * @author Ryan Stinnett
 */

#include "DsrOptions.h"
#include "DsrControl.h"
#include "RouteCache.h"
#include <PacketEngine.h>
#include <AM.h>
#include <Tlv.h>

generic module DsrControlP(packet_id_t BUFFER_SIZE) {
  provides {
    interface Equal<dsr_route_request_in_t*> as RouteRequestInEqual;
    interface Equal<dsr_route_request_out_t*> as RouteRequestOutEqual;
  }
  uses {
    interface Boot;

    interface TlvBlockPacket as DsrHeader;
    interface TlvSinglePacket as RouteRequest;
    interface TlvMultiplePacket as RouteError;
    interface StaticIndexedIterator<message_t, tlv_key_t> as RouteErrorList;
    interface TlvSinglePacket as SourceRoute;

    interface PacketEngine as SingleDsrPacketEngine;
    interface PacketEngine as SinglePacketEngine;
    interface PacketEngine as DsrPacketEngine;
    interface IndexedIterator<packet_id_t> as SingleDsrPacketWaitList;
    interface IndexedIterator<packet_id_t> as SinglePacketWaitList;
    interface IndexedIterator<packet_id_t> as DsrPacketWaitList;

    interface RouteCache;
    interface RouteCache as SalvageRouteCache;
    interface IndexedIterator<route_cache_node_id_t> as RouteNodeList;
    interface DataCache<dsr_route_request_in_t> as RouteRequestInCache;
    interface DataCache<dsr_route_request_out_t> as RouteRequestOutCache;
    interface DataTimer<am_addr_t> as RouteRequestOutTimer;

    interface PacketAcknowledgements as Acks;
    interface SinglePacket;
    interface AMPacket;
    interface Packet as ComposePacket;

    interface BitVector as Compose;
    interface BitVector as Salvage;
    interface AMSend as Send;

    interface Random;
  }
}

implementation {

  /********** Variables **********/

  // Internal null address
  enum {
    NULL_ADDR = AM_BROADCAST_ADDR
  };

  // Send states
  enum {
    S_IDLE,
    S_SENDING
  };

  uint8_t nextIdent;

  uint8_t retriesLeft[BUFFER_SIZE];

  /********** Function Declarations **********/

  task void composePkt();
  packet_id_t findSinglePktTo(am_addr_t dest);
  packet_id_t findSingleDsrPktTo(am_addr_t dest);
  void addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest);
  error_t addRouteRequest(packet_id_t pid, message_t* msg, am_addr_t dest);
  error_t addDsrHeader(packet_id_t pid, message_t* msg);
  void updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts);
  void resetRouteRequestOutCache(am_addr_t dest);

  /********** Boot **********/

  event void Boot.booted() {
    nextIdent = call Random.rand16();
    call Compose.clearAll();
    call Salvage.clearAll();
  }

  /********** SinglePacketEngine **********/

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.sendAdded(packet_id_t pid, message_t* msg) {
    if (call SinglePacket.destination(msg) == AM_BROADCAST_ADDR) {
      dbg("DsrControlP", "DSR: Pkt %u: Single broadcast send packet added!\n", pid);
      call AMPacket.setDestination(msg, AM_BROADCAST_ADDR);
      call SinglePacketEngine.send(pid);
    } else {
      dbg("DsrControlP", "DSR: Pkt %u: Single unicast send packet added!\n", pid);
      // Look for a route in the route cache
      dbg("DsrControlP", "DSR: Pkt %u: Looking for route to %u\n",
          pid, call SinglePacket.destination(msg));
      call RouteCache.trackRoute(call AMPacket.address(), call SinglePacket.destination(msg));
    }
  }

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.receiveAdded(packet_id_t pid, message_t* msg) {
    dbg("DsrControlP", "DSR: Pkt %u: Single receive/snoop packet added!\n", pid);
    // Cache the link
    addPath(call SinglePacket.source(msg), NULL, 0, call SinglePacket.destination(msg));
    // Pass packet to upper layer
    dbg("DsrControlP", "DSR: Pkt %u: Passing to upper layer\n", pid);
    call SinglePacketEngine.receive(pid);
  }

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SinglePacketEngine.snoopAdded(packet_id_t pid, message_t* msg) {
    dbg("DsrControlP", "DSR: Pkt %u: Single snooped!\n", pid);
    signal SinglePacketEngine.receiveAdded(pid, msg);
  }

 /**
   * Signals the completion of a send event to the lower layer.  The return
   * value indicates what should be done next with the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet.
   * @param result SUCCESS if it was transmitted successfully, FAIL if
   *               it was not, ECANCEL if it was cancelled by the upper
   *               layer.
   * @return If the packet is no longer needed, return PKT_SEND_DONE. If the
   *         packet should be resent, return PKT_SEND_RETRY.  If the packet
   *         should move back to the wait state, return PKT_SEND_WAIT.
   */
  event packet_send_action_t SinglePacketEngine.sendDone(packet_id_t pid, message_t* msg,
                                                         error_t result) {
    return PKT_SEND_UNKNOWN;
  }

  /********** DsrPacketEngine **********/

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void DsrPacketEngine.sendAdded(packet_id_t pid, message_t* msg) {
    am_addr_t singleDest = call SinglePacket.destination(msg);
    if (call RouteRequest.length(msg) != 0) {
      // Route Request
      packet_id_t rreqPid = findSingleDsrPktTo(singleDest);
      if (!call SingleDsrPacketWaitList.end(rreqPid)) {
        call DsrPacketEngine.setUpperType(pid, call SingleDsrPacketEngine.upperType(rreqPid));
        dbg("DsrControlP", "DSR: Pkt %u: Recovered upper layer AM type from pkt %u\n", pid, rreqPid);
      } else // No packet found somehow
        dbgerror("DsrControlP",
                 "DSR: Pkt %u: Looking for pkt that originated route request to %u, but no packets are waiting!\n",
                 pid, singleDest);
    } else if (call SourceRoute.length(msg) == 0) {
      dbg("DsrControlP", "DSR: Pkt %u: DSR send packet added, waiting for route\n", pid);
      call RouteCache.trackRoute(call AMPacket.address(), singleDest);
      return;
    }
    dbg("DsrControlP", "DSR: Pkt %u: DSR send packet added, sending!\n", pid);
    retriesLeft[pid] = DSR_MAX_RETRIES;
    call DsrPacketEngine.send(pid);
  }

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void DsrPacketEngine.receiveAdded(packet_id_t pid, message_t* msg) {
    uint8_t optLen;
    tlv_key_t key;
    am_addr_t singleSrc = call SinglePacket.source(msg);
    am_addr_t singleDest = call SinglePacket.destination(msg);
    dbg("DsrControlP", "DSR: Pkt %u: DSR receive/snoop packet added!\n", pid);
    if ((optLen = call RouteRequest.length(msg)) != 0) {
      // Route Request
      dsr_route_request_t* rreq = (dsr_route_request_t*)call RouteRequest.value(msg);
      uint8_t numAddr = (optLen - sizeof(dsr_route_request_t)) / sizeof(nx_am_addr_t);
      dbg("DsrControlP", "DSR: Pkt %u: Found route request option from %u to %u\n", pid,
          singleSrc, singleDest);
      if (call SinglePacket.isForMe(msg)) {
        dbg("DsrControlP", "DSR: Pkt %u: Route request reached target node\n", pid);
        // Add complete route to cache
        addPath(singleSrc, rreq->addr, numAddr, call AMPacket.address());
        call Compose.set(pid);
        post composePkt();
        return; // Pause processing for now
      } else {
        uint8_t i;
        dsr_route_request_in_t inEntry = {.node = singleSrc, .next = 0};
        dsr_route_request_in_t* inCache;
        // Check for our address in the route so far
        if (singleSrc == call AMPacket.address()) {
          dbg("DsrControlP", "DSR: Pkt %u: Address already in route request to %u, dropping!\n",
              pid, singleDest);
          call DsrPacketEngine.drop(pid);
          return;
        }
        for (i = 0; i < numAddr; i++) {
          if (rreq->addr[i] == call AMPacket.address()) {
            dbg("DsrControlP", "DSR: Pkt %u: Address already in route request to %u, dropping!\n",
                pid, singleDest);
            call DsrPacketEngine.drop(pid);
            return;
          }
        }
        // Add partial route to cache
        addPath(singleSrc, rreq->addr, numAddr, call AMPacket.address());
        // Check blacklist
        // Check route request cache (insert)
        for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++)
          inEntry.target[i] = NULL_ADDR;
        inCache = call RouteRequestInCache.insert(&inEntry);
        for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++) {
          if (inCache->ident[i] == rreq->ident &&
              inCache->target[i] == singleDest) {
            dbg("DsrControlP",
                "DSR: Pkt %u: Route request to %u (ID %hhu) found in cache, dropping!\n",
                pid, singleDest, rreq->ident);
            call DsrPacketEngine.drop(pid);
            return;
          }
        }
        dbg("DsrControlP", "DSR: Pkt %u: Route request to %u (ID %hhu) is new\n",
            pid, singleDest, rreq->ident);
        // Add to route request cache
        inCache->ident[inCache->next] = rreq->ident;
        inCache->target[inCache->next] = singleDest;
        inCache->next++;
        inCache->next %= DSR_ROUTE_REQUEST_IDS;
        // Look for cached route to send, as in 8.2.3.
        // Add our address to the route
        if (call RouteRequest.setLength(msg, call RouteRequest.length(msg)
                                             + sizeof(nx_am_addr_t)) != SUCCESS) {
          dbgerror("DsrControlP",
                   "DSR: Pkt %u: Not enough room to extend route request, dropping!\n", pid);
          call DsrPacketEngine.drop(pid);
          return;
        }
        rreq->addr[numAddr] = call AMPacket.address();
        dbg("DsrControlP", "DSR: Pkt %u: Sending route request to %u further\n", pid, singleDest);
        call Acks.noAck(msg);
        call DsrPacketEngine.send(pid);
      }
    }
    for (key = call RouteError.list(msg); !call RouteErrorList.end(msg, key);
         key = call RouteErrorList.next(msg, key)) {
      // Route Error
      if ((optLen = call RouteError.length(msg, key)) != 0) {
        dsr_route_error_t* rerr = (dsr_route_error_t*)call RouteError.value(msg, key);
        dbg("DsrControlP", "DSR: Pkt %u: Found route error option at %u from %u to %u\n", pid,
            key, singleSrc, singleDest);
        if (rerr->type == DSR_NODE_UNREACHABLE_RET) {
          dsr_node_unreachable_rei_t* rerrInfo = (dsr_node_unreachable_rei_t*)&rerr->info;
          dbg("DsrControlP", "DSR: Pkt %u: Removing broken link %u -> %u\n", pid,
              rerr->src, rerrInfo->addr);
          call RouteCache.removeLink(rerr->src, rerrInfo->addr, TRUE);
        }
      }
    }
    if ((optLen = call SourceRoute.length(msg)) != 0) {
      // Source Route / Route Reply
      dsr_source_route_t* sr = (dsr_source_route_t*)call SourceRoute.value(msg);
      uint8_t numAddr = (optLen - sizeof(dsr_source_route_t)) / sizeof(nx_am_addr_t);
      am_addr_t pathSrc = singleSrc;
      am_addr_t pathDest = singleDest;
      uint8_t cacheableInterAddr = numAddr;
      if (!sr->routeReply)
        dbg("DsrControlP", "DSR: Pkt %u: Found source route option from %u to %u\n", pid,
            pathSrc, pathDest);
      else
        dbg("DsrControlP", "DSR: Pkt %u: Found route reply option from %u to %u\n", pid,
            pathSrc, pathDest);
      if (sr->segsLeft > numAddr) {
        dbgerror("DsrControlP", "DSR: Pkt %u: Too many segments left (%u > %u), dropping!\n",
                 pid, sr->segsLeft, numAddr);
        call DsrPacketEngine.drop(pid);
        return;
      }
      // Path processing is altered by source route fields
      if (sr->salvage > 0)
        pathSrc = NULL_ADDR;
      if (sr->routeReply && sr->segsLeft > 0) {
        cacheableInterAddr = numAddr - sr->segsLeft + 1;
        pathDest = NULL_ADDR;
      }
      addPath(pathSrc, sr->addr, cacheableInterAddr, pathDest);
      if (call AMPacket.isForMe(msg)) {
        // Move further down the source route
        if (sr->segsLeft == 0) {
          dbg("DsrControlP", "DSR: Pkt %u: No segments left, removing source route\n", pid);
          if (sr->routeReply) {
            packet_id_t rreqPid = findSinglePktTo(singleSrc);
            // First packet to this route reply's source has been received and can be dropped
            if (call SinglePacketWaitList.end(rreqPid)) {
              // No packet found, may have already received route reply
              dbg("DsrControlP",
                  "DSR: Pkt %u: Pkt that originated route request to %u no longer here\n",
                  pid, singleSrc);
              call DsrPacketEngine.drop(pid);
              return;
            }
            dbg("DsrControlP", "DSR: Pkt %u: Pkt %u received successfully, dropping\n",
                pid, rreqPid);
            call SinglePacketEngine.upperSendDone(rreqPid, SUCCESS);
            call SinglePacketEngine.drop(rreqPid);
          }
          call SourceRoute.remove(msg);
        } else {
          uint8_t nextHop;
          // Find address of next hop
          nextHop = numAddr - --sr->segsLeft;
          // Check packet size, may need to fragment as in 8.5.
          // Send to next hop along the route
          if (nextHop < numAddr) {
            if (sr->addr[nextHop] == singleDest) {
              dbgerror("DsrControlP",
                       "DSR: Pkt %u: Destination is also intermediate node, dropping!\n", pid);
              call DsrPacketEngine.drop(pid);
              return;
            }
            call AMPacket.setDestination(msg, sr->addr[nextHop]);
          } else
            call AMPacket.setDestination(msg, singleDest);
          dbg("DsrControlP", "DSR: Pkt %u: Sending to %u along the way to %u\n",
              pid, call AMPacket.destination(msg), singleDest);
          call Acks.requestAck(msg);
          retriesLeft[pid] = DSR_MAX_RETRIES;
          // Allow source route packets to be intercepted by application layer
          if (!sr->routeReply)
            call DsrPacketEngine.sendIntercept(pid);
          else
            call DsrPacketEngine.send(pid);
          return;
        }
      } else {
        // Should shorten routes when possible as in 8.1.5/3.4.3.
      }
    }
    // Pass packet to upper layer
    dbg("DsrControlP", "DSR: Pkt %u: Passing to upper layer if not already sent\n", pid);
    call DsrPacketEngine.receive(pid);
  }

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void DsrPacketEngine.snoopAdded(packet_id_t pid, message_t* msg) {
    dbg("DsrControlP", "DSR: Pkt %u: DSR snooped!\n", pid);
    signal DsrPacketEngine.receiveAdded(pid, msg);
  }

  /**
   * Signals the completion of a send event to the lower layer.  The return
   * value indicates what should be done next with the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet.
   * @param result SUCCESS if it was transmitted successfully, FAIL if
   *               it was not, ECANCEL if it was cancelled by the upper
   *               layer.
   * @return If the packet is no longer needed, return PKT_SEND_DONE. If the
   *         packet should be resent, return PKT_SEND_RETRY.  If the packet
   *         should move back to the wait state, return PKT_SEND_WAIT.
   */
  event packet_send_action_t DsrPacketEngine.sendDone(packet_id_t pid, message_t* msg,
                                                      error_t result) {
    return PKT_SEND_UNKNOWN;
  }

  /********** SingleDsrPacketEngine **********/

  /**
   * A packet to be sent was added to the packet engine by an upper layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SingleDsrPacketEngine.sendAdded(packet_id_t pid, message_t* msg) {}

  /**
   * A received packet was added to the packet engine from a lower layer.
   * Unlike the Receive interface, this event does not allow swapping packet
   * buffers because ownership of the packet does not leave the packet
   * engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SingleDsrPacketEngine.receiveAdded(packet_id_t pid, message_t* msg) {}

  /**
   * An overheard packet (this node is not the intended destination) was
   * added to the packet engine from a lower layer.  Unlike the Receive
   * interface, this event does not allow swapping packet buffers because
   * ownership of the packet does not leave the packet engine.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   */
  event void SingleDsrPacketEngine.snoopAdded(packet_id_t pid, message_t* msg) {}

  /**
   * Signals the completion of a send event to the lower layer.  The return
   * value indicates what should be done next with the packet.
   *
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet.
   * @param result SUCCESS if it was transmitted successfully, FAIL if
   *               it was not, ECANCEL if it was cancelled by the upper
   *               layer.
   * @return If the packet is no longer needed, return PKT_SEND_DONE. If the
   *         packet should be resent, return PKT_SEND_RETRY.  If the packet
   *         should move back to the wait state, return PKT_SEND_WAIT.
   */
  event packet_send_action_t SingleDsrPacketEngine.sendDone(packet_id_t pid, message_t* msg,
                                                            error_t result) {
    if (result == FAIL)
      dbgerror("DsrControlP", "DSR: Pkt %u: Engine send failed, unknown error!\n", pid);
    else if (result == SUCCESS && call AMPacket.destination(msg) != AM_BROADCAST_ADDR &&
             !call Acks.wasAcked(msg)) {
      dbg("DsrControlP", "DSR: Pkt %u: Unicast send wasn't acked, ", pid);
      if (retriesLeft[pid] > 0) {
        dbg_clear("DsrControlP", "retrying!\n");
        retriesLeft[pid]--;
        call Acks.requestAck(msg);
        return PKT_SEND_RETRY;
      } else {
        dbg_clear("DsrControlP", "route error!\n");
        dbg("DsrControlP", "DSR: Pkt %u: Removing broken link %u -> %u\n", pid,
            call AMPacket.address(), call AMPacket.destination(msg));
        call RouteCache.removeLink(call AMPacket.address(),
                                   call AMPacket.destination(msg), TRUE);
        if (call AMPacket.type(msg) == AM_DSR) {
          call Compose.set(pid);
          post composePkt();
          return PKT_SEND_WAIT;
        }
      }
    }
    dbg("DsrControlP", "DSR: Pkt %u: Unicast send successful\n", pid);
    call SingleDsrPacketEngine.upperSendDone(pid, SUCCESS);
    return PKT_SEND_DONE;
  }

  /********** RouteCache **********/

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
  event void RouteCache.routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest,
                                    route_cache_link_id_t numLinks) {
    packet_id_t pid;
    message_t* msg;
    dsr_route_request_out_t outEntry = {dest, DSR_HOP_LIMIT, 0};
    dsr_route_request_out_t* outCache;
    // Route found, reset route request cache (lookup), if needed
    if (numLinks > 0)
      resetRouteRequestOutCache(dest);
    // Traverse waiting packets going to dest
    pid = call SingleDsrPacketEngine.waitList();
    while (!call SingleDsrPacketWaitList.end(pid)) {
      if ((msg = call SinglePacketEngine.packet(pid)) == NULL) {
        msg = call DsrPacketEngine.packet(pid);
        // Ignore salvaged packets
        if (call SourceRoute.length(msg) != 0) {
          pid = call SingleDsrPacketWaitList.next(pid);
          continue; // Try the next packet
        }
      }
      // Looking for a specific destination
      if (call SinglePacket.destination(msg) != dest) {
        pid = call SingleDsrPacketWaitList.next(pid);
        continue; // Try the next packet
      }
      if (numLinks == 0) {
        // No route found, check route request cache (insert)
        outCache = call RouteRequestOutCache.insert(&outEntry);
        if (outCache->rreqsSinceRrep != 0) {
          dbg("DsrControlP", "DSR: Pkt %u: Dest %u already in route request out cache\n", pid, dest);
          return;
        }
        // Send initial route request attempt (fire out timer)
        signal RouteRequestOutTimer.expired(dest);
        return; // Remaining messages wait for response
      } else {
        dsr_source_route_t* sr;
        uint8_t numAddr = numLinks - 1; // Number of intermediate nodes
        // Add source route
        dbg("DsrControlP", "DSR: Pkt %u: Adding source route to %u\n", pid, dest);
        if (call AMPacket.type(msg) != AM_DSR) { // Only add DSR header if needed
          if (addDsrHeader(pid, msg) == FAIL) {
            pid = call SingleDsrPacketEngine.waitList();
            continue; // Try the next packet
          }
        }
        if (call SourceRoute.add(msg, sizeof(dsr_source_route_t) +
                                      numAddr * sizeof(nx_am_addr_t)) != SUCCESS) {
          dbgerror("DsrControlP",
                   "DSR: Pkt %u: Already has source route or not enough room!\n", pid);
          call DsrPacketEngine.drop(pid);
          pid = call SingleDsrPacketEngine.waitList();
          continue; // Try the next packet
        }
        sr = (dsr_source_route_t*)call SourceRoute.value(msg);
        if (sr == NULL) {
          dbgerror("DsrControlP",
                   "DSR: Pkt %u: Can't find the source route option just added!\n", pid);
          call DsrPacketEngine.drop(pid);
          pid = call SingleDsrPacketEngine.waitList();
          continue; // Try the next packet
        }
        // Store source route data
        sr->routeReply = FALSE;
        sr->salvage = 0;
        sr->segsLeft = numAddr;
        if (numAddr > 0) {
          uint8_t curAddr = numAddr;
          // Fill in last intermediate hop
          sr->addr[--curAddr] = call RouteNodeList.next(dest);
          // Fill in remaining intermediate hops
          while (curAddr > 0) {
            sr->addr[curAddr - 1] = call RouteNodeList.next(sr->addr[curAddr]);
            curAddr--;
          }
        }
        // Send to first hop along the route
        if (numAddr > 0)
          call AMPacket.setDestination(msg, sr->addr[0]);
        else
          call AMPacket.setDestination(msg, dest);
        dbg("DsrControlP", "DSR: Pkt %u: Sending to %u along the way to %u\n",
            pid, call AMPacket.destination(msg), dest);
        call Acks.requestAck(msg);
        retriesLeft[pid] = DSR_MAX_RETRIES;
        call DsrPacketEngine.send(pid);
        pid = call SingleDsrPacketEngine.waitList(); // Move to the next packet
      }
    }
  }

  /********** SalvageRouteCache **********/

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
  event void SalvageRouteCache.routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest,
                                           route_cache_link_id_t numLinks) {
    packet_id_t pid;
    message_t* msg;
    // Traverse waiting salvaged packets going to dest
    pid = call DsrPacketEngine.waitList();
    while (!call DsrPacketWaitList.end(pid)) {
      dsr_source_route_t* sr;
      // Check if the salvage flag is set for this packet
      if (!call Salvage.get(pid)) {
        pid = call DsrPacketWaitList.next(pid);
        continue; // Try the next packet
      }
      msg = call DsrPacketEngine.packet(pid);
      // Looking for a specific destination
      if (call SinglePacket.destination(msg) != dest) {
        pid = call DsrPacketWaitList.next(pid);
        continue; // Try the next packet
      }
      // Ignore regular packets
      if (call SourceRoute.length(msg) == 0) {
        pid = call DsrPacketWaitList.next(pid);
        continue; // Try the next packet
      }
      sr = (dsr_source_route_t*)call SourceRoute.value(msg);
      if (numLinks == 0) {
        // No route found, drop salvaged packet
        dbg("DsrControlP",
            "DSR: Pkt %u: No route found to %u, dropping salvaged packet!\n", pid, dest);
        call DsrPacketEngine.upperSendDone(pid, FAIL);
        call DsrPacketEngine.drop(pid);
        call Salvage.clear(pid);
        pid = call DsrPacketEngine.waitList(); // Move to the next packet
      } else {
        uint8_t numAddr = numLinks; // Number of intermediate nodes plus source
        uint8_t curAddr;
        // Set source route length
        dbg("DsrControlP",
            "DSR: Pkt %u: Route found to %u, modifying salvaged packet\n", pid, dest);
        if (call SourceRoute.setLength(msg, sizeof(dsr_source_route_t) +
                                       numAddr * sizeof(nx_am_addr_t)) != SUCCESS) {
          dbgerror("DsrControlP",
                   "DSR: Pkt %u: Not enough room to extend source route, dropping!\n", pid);
          call DsrPacketEngine.upperSendDone(pid, FAIL);
          call DsrPacketEngine.drop(pid);
          call Salvage.clear(pid);
          pid = call DsrPacketEngine.waitList();
          continue; // Try the next packet
        }
        // Modify source route data
        sr->salvage++;
        sr->segsLeft = numAddr - 1;
        curAddr = numAddr - 1;
        // Fill in last intermediate hop
        sr->addr[curAddr] = call RouteNodeList.next(dest);
        // Fill in remaining intermediate hops
        while (curAddr > 0) {
          sr->addr[curAddr - 1] = call RouteNodeList.next(sr->addr[curAddr]);
          curAddr--;
        }
        // Send to first hop along the route
        if (numAddr > 1)
          call AMPacket.setDestination(msg, sr->addr[1]);
        else
          call AMPacket.setDestination(msg, dest);
        dbg("DsrControlP", "DSR: Pkt %u: Sending salvaged to %u along the way to %u\n",
            pid, call AMPacket.destination(msg), dest);
        call Acks.requestAck(msg);
        retriesLeft[pid] = DSR_MAX_RETRIES;
        call Salvage.clear(pid);
        call DsrPacketEngine.send(pid);
        pid = call DsrPacketEngine.waitList(); // Move to the next packet
      }
    }
  }

  /********** RouteRequestInCache **********/

  /**
   * Notification that the given item is about to be evicted due to an insert
   * which was requested when the cache was already full.  Note that this is
   * <b>not</b> signaled on calls of remove.  The pointer passed here should
   * not saved, as it will not longer be vaild once this event returns.
   *
   * @param item Pointer to the data item being evicted.
   */
  event void RouteRequestInCache.evicted(dsr_route_request_in_t* item) {}

  /********** RouteRequestInEqual **********/

  /**
   * Returns whether two route request in cache entries are equal by checking
   * the nodes they represent.
   *
   * @param a First item to test.
   * @param b Second item to test.
   * @return TRUE if they are equal, FALSE if they are not.
   */
  command bool RouteRequestInEqual.test(dsr_route_request_in_t* a, dsr_route_request_in_t* b) {
    return a->node == b->node;
  }

  /********** RouteRequestOutCache **********/

  /**
   * Notification that the given item is about to be evicted due to an insert
   * which was requested when the cache was already full.  Note that this is
   * <b>not</b> signaled on calls of remove.  The pointer passed here should
   * not saved, as it will not longer be vaild once this event returns.
   *
   * @param item Pointer to the data item being evicted.
   */
  event void RouteRequestOutCache.evicted(dsr_route_request_out_t* item) {}

  /********** RouteRequestOutEqual **********/

  /**
   * Returns whether two route request out cache entries are equal by checking
   * the nodes they represent.
   *
   * @param a First item to test.
   * @param b Second item to test.
   * @return TRUE if they are equal, FALSE if they are not.
   */
  command bool RouteRequestOutEqual.test(dsr_route_request_out_t* a, dsr_route_request_out_t* b) {
    return a->node == b->node;
  }

  /********** RouteRequestOutTimer **********/

  /**
   * The timer for a given data item has expired.  We should send out another
   * route request for this destination.  This is also signalled internally
   * to send the initial route request.
   *
   * @param data The data item which expired.
   */
  event void RouteRequestOutTimer.expired(am_addr_t dest) {
    packet_id_t pid = findSingleDsrPktTo(dest);
    dsr_route_request_out_t outEntry = {dest, DSR_HOP_LIMIT, 0};
    dsr_route_request_out_t* outCache;
    outCache = call RouteRequestOutCache.lookup(&outEntry);
    if (outCache == NULL) {
      dbgerror("DsrControlP",
               "DSR: Pkt %u: Route request out cache for %u already gone!\n", pid, dest);
      return;
    }
    if (call SingleDsrPacketWaitList.end(pid)) {
      // No more packets waiting somehow
      dbgerror("DsrControlP",
               "DSR: Route request out timer fired for %u, but no packets are waiting!\n", dest);
      return;
    }
    if (outCache->rreqsSinceRrep < DSR_MAX_REQUEST_ATTMEPTS) {
      // Start timer to send additional requests if needed
      updateRouteRequestOutTimer(dest, outCache->rreqsSinceRrep);
      // Update number of requests sent
      outCache->rreqsSinceRrep++;
      // Compose new request
      dbg("DsrControlP", "DSR: Pkt %u: Sending route request #%hhu to %u\n",
          pid, outCache->rreqsSinceRrep, dest);
      call Compose.set(pid);
      post composePkt();
    } else {
      dbgerror("DsrControlP",
               "DSR: Sent max route requests for %u, dropping all packets!\n", dest);
      // Reset out cache
      outCache->rreqsSinceRrep = 0;
      while (!call SingleDsrPacketWaitList.end(pid)) {
        call SingleDsrPacketEngine.upperSendDone(pid, FAIL);
        call SingleDsrPacketEngine.drop(pid);
        pid = findSingleDsrPktTo(dest);
      }
    }
  }

  /********** Send **********/

  /**
   * Signaled in response to an accepted send request. <tt>msg</tt>
   * is the sent buffer, and <tt>error</tt> indicates whether the
   * send was succesful, and if not, the cause of the failure.
   *
   * @param msg   the packet which was requested to send
   * @param error SUCCESS if it was transmitted successfully, FAIL if
   *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
   */
  event void Send.sendDone(message_t* msg, error_t error) {
    if (error == FAIL)
      dbg("DsrControlP", "DSR: Internal send failed!\n");
    dbg("DsrControlP", "DSR: Checking for another response to send\n");
    post composePkt();
  }

  /********** Tasks **********/

  /**
   * Looks for waiting packets that need a separate packet of some kind to be
   * sent, composes that packet, and attempts to send it.
   */
  task void composePkt() {
    packet_id_t pid;
    message_t* inPkt;
    uint8_t optLen;
    message_t outPktBuf;
    message_t* outPkt = &outPktBuf;
    am_addr_t outSingleDest = call AMPacket.address();
    bool outReady = FALSE; // Whether outPkt is ready to be sent
    call AMPacket.setType(outPkt, AM_SINGLE); // No DSR header initially
    call ComposePacket.setPayloadLength(outPkt, 0); // No upper layer data initially
    // Traverse list of waiting packets
    pid = call SingleDsrPacketEngine.waitList();
    while (!call SingleDsrPacketWaitList.end(pid)) {
      // Check if the compose flag is set for this packet
      if (!call Compose.get(pid)) {
        pid = call SingleDsrPacketWaitList.next(pid);
        continue; // Try the next packet
      }
      if ((inPkt = call DsrPacketEngine.packet(pid)) != NULL) {
        if ((optLen = call RouteRequest.length(inPkt)) != 0) {
          // Route Request: Send Route Reply
          if (!call SinglePacket.isForMe(inPkt)) {
            dbgerror("DsrControlP",
                     "DSR: Pkt %u: Not destined for this node, can't compose route reply!\n", pid);
            call DsrPacketEngine.drop(pid);
            call Compose.clear(pid);
            pid = call SingleDsrPacketEngine.waitList();
            continue; // Try the next packet
          } else {
            dsr_route_request_t* inRreq = (dsr_route_request_t*)call RouteRequest.value(inPkt);
            uint8_t numAddrRreq = (optLen - sizeof(dsr_route_request_t)) / sizeof(nx_am_addr_t);
            dsr_source_route_t* outSr;
            uint8_t curAddr;
            dbg("DsrControlP", "DSR: Pkt %u: Target node composing route reply\n", pid);
            outSingleDest = call SinglePacket.source(inPkt);
            // Add route reply data
            dbg("DsrControlP", "DSR: Pkt %u: Outgoing route reply to %u\n", pid, outSingleDest);
            if (addDsrHeader(pid, outPkt) == FAIL) {
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            if (call SourceRoute.add(outPkt, sizeof(dsr_source_route_t) +
                                             numAddrRreq * sizeof(nx_am_addr_t)) != SUCCESS) {
              dbgerror("DsrControlP",
                       "DSR: Pkt %u: Already has source route or not enough room!\n", pid);
              call DsrPacketEngine.drop(pid);
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            outSr = (dsr_source_route_t*)call SourceRoute.value(outPkt);
            if (outSr == NULL) {
              dbgerror("DsrControlP",
                       "DSR: Pkt %u: Can't find the source route option just added!\n", pid);
              call DsrPacketEngine.drop(pid);
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            // Store route reply data
            outSr->routeReply = TRUE;
            outSr->salvage = 0;
            outSr->segsLeft = numAddrRreq;
            // Fill in intermediate hops
            for (curAddr = 0; curAddr < numAddrRreq; curAddr++)
              outSr->addr[curAddr] = inRreq->addr[numAddrRreq - curAddr - 1];
            // Send to first hop along the route
            if (numAddrRreq > 0)
              call AMPacket.setDestination(outPkt, outSr->addr[0]);
            else
              call AMPacket.setDestination(outPkt, outSingleDest);
            dbg("DsrControlP", "DSR: Pkt %u: Sending route reply to %u along the way to %u\n",
                pid, call AMPacket.destination(outPkt), outSingleDest);
            call Acks.requestAck(outPkt);
            outReady = TRUE;
            break;
          }
        } else if ((optLen = call SourceRoute.length(inPkt)) != 0) {
          // Source Route / Route Reply: Send Route Error
          dsr_source_route_t* inSr = (dsr_source_route_t*)call SourceRoute.value(inPkt);
          am_addr_t inSrSrc;
          tlv_key_t key;
          dsr_route_error_t* outRerr;
          dsr_node_unreachable_rei_t* outRerrInfo;
          // Grab the route's sender
          if (inSr->salvage == 0)
            inSrSrc = call SinglePacket.source(inPkt);
          else
            inSrSrc = inSr->addr[0];
          // Don't need to send a Route Error to ourselves
          if (inSrSrc != call AMPacket.address()) {
            // Route's sender becomes Route Error destination
            outSingleDest = inSrSrc;
            // Add route error data
            dbg("DsrControlP", "DSR: Pkt %u: Composing route error to %u\n", pid, outSingleDest);
            if (addDsrHeader(pid, outPkt) == FAIL) {
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            if (!call RouteErrorList.end(inPkt, call RouteError.list(inPkt))) {
              dbg("DsrControlP", "DSR: Pkt %u: Base packet already has route error\n", pid);
              // Check if this node is a route error source
              for (key = call RouteError.list(inPkt); !call RouteErrorList.end(inPkt, key);
                   key = call RouteErrorList.next(inPkt, key)) {
                if ((optLen = call RouteError.length(inPkt, key)) != 0) {
                  dsr_route_error_t* rerr = (dsr_route_error_t*)call RouteError.value(inPkt, key);
                  if (rerr->src == call AMPacket.address()) {
                    dbg("DsrControlP", "DSR: Pkt %u: Route error's source is this node\n", pid);
                    break;
                  }
                }
              }
            }
            if (call RouteError.add(outPkt, &key, sizeof(dsr_route_error_t) +
                                                  sizeof(dsr_node_unreachable_rei_t)) != SUCCESS) {
              dbgerror("DsrControlP",
                       "DSR: Pkt %u: Not enough room for route error!\n", pid);
              call DsrPacketEngine.drop(pid);
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            if ((outRerr = (dsr_route_error_t*)call RouteError.value(outPkt, key)) == NULL) {
              dbgerror("DsrControlP",
                       "DSR: Pkt %u: Can't find the route error option just added!\n", pid);
              call DsrPacketEngine.drop(pid);
              call Compose.clear(pid);
              pid = call SingleDsrPacketEngine.waitList();
              continue; // Try the next packet
            }
            outRerrInfo = (dsr_node_unreachable_rei_t*)&outRerr->info;
            outRerr->type = DSR_NODE_UNREACHABLE_RET;
            outRerr->salvage = inSr->salvage;
            outRerrInfo->addr = call AMPacket.destination(inPkt);
            outRerr->src = call AMPacket.address();
            outRerr->dest = outSingleDest;
            /* // Copy over any other Route Error options
            for (key = call RouteError.list(inPkt); !call RouteErrorList.end(inPkt, key);
                 key = call RouteErrorList.next(inPkt, key)) {
              if ((optLen = call RouteError.length(data, key)) != 0) {
              dsr_route_error_t* rerr = (dsr_route_error_t*)call RouteError.value(data, key);
        dbg("DsrControlP", "DSR: Pkt %u: Found route error option at %u\n", pid, key);
      }
    } */
            dbg("DsrControlP", "DSR: Pkt %u: Finding route for route error to %u\n",
                pid, outSingleDest);
            outReady = TRUE;
          //}
          dbg("DsrControlP", "DSR: Pkt %u: Attempting to salvage base packet\n", pid);
          if (inSr->routeReply) {
            dbg("DsrControlP", "DSR: Pkt %u: Base packet has route reply, dropping!\n", pid);
            call DsrPacketEngine.upperSendDone(pid, FAIL);
            call DsrPacketEngine.drop(pid);
          } else if (inSr->salvage >= DSR_MAX_SALVAGE_COUNT) {
            dbg("DsrControlP",
                "DSR: Pkt %u: Base packet salvaged too many times, dropping!\n", pid);
            call DsrPacketEngine.upperSendDone(pid, FAIL);
            call DsrPacketEngine.drop(pid);
          } else {
            call Salvage.set(pid);
            dbg("DsrControlP", "DSR: Pkt %u: Finding route for salvaged packet to %u\n",
                pid, call SinglePacket.destination(inPkt));
            call SalvageRouteCache.checkRoute(call AMPacket.address(),
                                              call SinglePacket.destination(inPkt));
          }
          } else {
            dbg("DsrControlP", "DSR: Pkt %u: Base packet's source is this node, dropping!\n", pid);
            call DsrPacketEngine.upperSendDone(pid, FAIL);
            call DsrPacketEngine.drop(pid);
          }
          if (outReady)
            break;
          else {// Try the next packet
            call Compose.clear(pid);
            pid = call SingleDsrPacketEngine.waitList();
          }
        } else {
          // No Source Route / Route Reply: Send Route Request
          outSingleDest = call SinglePacket.destination(inPkt);
          dbg("DsrControlP", "DSR: Pkt %u: Composing route request to %u for DSR\n",
              pid, outSingleDest);
          // Bring data along for the ride
          memcpy(outPkt, inPkt, sizeof(message_t));
          if (addRouteRequest(pid, outPkt, outSingleDest) == FAIL) {
            dbgerror("DsrControlP", "DSR: Pkt %u: Unable to compose route request!\n", pid);
            call DsrPacketEngine.drop(pid);
            call Compose.clear(pid);
            pid = call SingleDsrPacketEngine.waitList();
            continue; // Try the next packet
          }
          dbg("DsrControlP", "DSR: Pkt %u: Sending route request to %u\n", pid, outSingleDest);
          outReady = TRUE;
          break;
        }
      } else if ((inPkt = call SinglePacketEngine.packet(pid)) != NULL) {
        // Single Packet: Send Route Request
        outSingleDest = call SinglePacket.destination(inPkt);
        dbg("DsrControlP", "DSR: Pkt %u: Composing route request to %u for Single\n",
            pid, outSingleDest);
        // Bring data along for the ride
        memcpy(outPkt, inPkt, sizeof(message_t));
        if (addDsrHeader(pid, outPkt) == FAIL ||
            addRouteRequest(pid, outPkt, outSingleDest) == FAIL) {
          dbgerror("DsrControlP", "DSR: Pkt %u: Unable to compose route request!\n", pid);
          call SingleDsrPacketEngine.drop(pid);
          call Compose.clear(pid);
          pid = call SingleDsrPacketEngine.waitList();
          continue; // Try the next packet
        }
        dbg("DsrControlP", "DSR: Pkt %u: Sending route request to %u\n", pid, outSingleDest);
        outReady = TRUE;
        break;
      } else {
        dbgerror("DsrControlP", "DSR: Pkt %u: Unknown type waiting for compose!\n", pid);
        call Compose.clear(pid);
        pid = call SingleDsrPacketEngine.waitList();
        continue; // Try the next packet
      }
    }
    if (outReady) {
      if (!call Compose.get(pid))
        dbgerror("DsrControlP", "DSR: Pkt %u: Compose bit cleared prior to send!\n", pid);
      // Try to send the packet
      switch (call Send.send(outSingleDest, &outPktBuf,
              call ComposePacket.payloadLength(&outPktBuf))) {
        case SUCCESS: {
          dbg("DsrControlP", "DSR: Pkt %u: Outgoing send successful, waiting for result\n", pid);
          call Compose.clear(pid);
          break; }
        case EBUSY: {
          // Too many packets in the packet engine
          dbgerror("DsrControlP", "DSR: Pkt %u: Outgoing send busy! Waiting for result\n", pid);
          return; }
        case EOFF: {
          // Packet engine disabled
          dbgerror("DsrControlP",
                   "DSR: Pkt %u: Packet engine is off, currently unhandled!\n", pid);
          return; }
        case ESIZE: {
          // Unusual to arrive here, drop and move to next packet
          dbgerror("DsrControlP", "DSR: Pkt %u: Length of msg %u too long, dropping!\n", pid);
          call Compose.clear(pid);
          call SingleDsrPacketEngine.drop(pid);
          post composePkt();
          return; }
      }
      // Post-send cleanup
      if (call AMPacket.type(inPkt) == AM_DSR) {
        // Route Request
        if ((optLen = call RouteRequest.length(inPkt)) != 0) {
          if (call SinglePacket.isForMe(inPkt)) {
            call RouteRequest.remove(inPkt);
            // Examine other received options
            signal DsrPacketEngine.receiveAdded(pid, inPkt);
          }
        }
      }
    }
  }

  /********** Functions **********/

  /**
   * Locates the first waiting single packet going to the given destination.
   *
   * @param dest The destination node.
   * @return Packet ID within the packet engine.
   */
  packet_id_t findSinglePktTo(am_addr_t dest) {
    packet_id_t pid;
    for (pid = call SinglePacketEngine.waitList(); !call SinglePacketWaitList.end(pid);
         pid = call SinglePacketWaitList.next(pid)) {
      if (call SinglePacket.destination(call SinglePacketEngine.packet(pid)) == dest)
        return pid;
    }
    return pid;
  }

  /**
   * Locates the first waiting single or DSR packet going to the given destination.
   *
   * @param dest The destination node.
   * @return Packet ID within the packet engine.
   */
  packet_id_t findSingleDsrPktTo(am_addr_t dest) {
    packet_id_t pid;
    for (pid = call SingleDsrPacketEngine.waitList(); !call SingleDsrPacketWaitList.end(pid);
         pid = call SingleDsrPacketWaitList.next(pid)) {
      message_t* msg;
      if ((msg = call SinglePacketEngine.packet(pid)) == NULL)
        msg = call DsrPacketEngine.packet(pid);
      if (call SinglePacket.destination(msg) == dest)
        return pid;
    }
    return pid;
  }

  /**
   * Presents a complete path to the route cache by first adding on a possible
   * source or destination to the intermediate nodes, if needed.  The reverse
   * path is then added to the cache as well.
   *
   * @param src Source node, or NULL_ADDR if not used.
   * @param addr Array of intermediate nodes.
   * @param numAddr Number of intermediate nodes.
   * @param dest Destination node, or NULL_ADDR if not used.
   */
  void addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest) {
    uint8_t i;
    uint8_t totalAddr = numAddr;
    uint8_t copyDestIdx = 0; // Index to start copying addr[] to
    route_cache_node_id_t path[numAddr + 2]; // Max path size
    // Check for source or destination nodes
    if (src != NULL_ADDR) {
      path[0] = src;
      copyDestIdx = 1;
      totalAddr++;
    }
    if (dest != NULL_ADDR)
      path[totalAddr++] = dest;
    // Copy intermediates nodes
    for (i = 0; i < numAddr; i++)
      path[i + copyDestIdx] = addr[i];
    // Add the complete path
    dbg("DsrControlP", "DSR: Adding path with %u links\n", totalAddr - 1);
    call RouteCache.addPath(path, totalAddr - 1, TRUE);
  }

  /**
   * Adds a route request option to the payload at data for dest.
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   * @param dest The destination node.
   * @return FAIL if any of the TLV operations fail, otherwise SUCCESS.
   */
  error_t addRouteRequest(packet_id_t pid, message_t* msg, am_addr_t dest) {
    dsr_route_request_t* rreq;
    if (call RouteRequest.add(msg, sizeof(dsr_route_request_t)) != SUCCESS) {
      dbgerror("DsrControlP", "DSR: Pkt %u: Already has route request or not enough room!\n");
      call DsrPacketEngine.drop(pid);
      return FAIL;
    }
    rreq = (dsr_route_request_t*)call RouteRequest.value(msg);
    if (rreq == NULL) {
      dbgerror("DsrControlP", "DSR: Pkt %u: Can't find the route request option just added!\n");
      call DsrPacketEngine.drop(pid);
      return FAIL;
    }
    // Target address left in SinglePacket destination
    rreq->ident = nextIdent++;
    call AMPacket.setDestination(msg, AM_BROADCAST_ADDR);
    call Acks.noAck(msg);
    return SUCCESS;
  }

  /**
   * Attempts to add a DSR header to a packet.
   * @param pid Packet ID within the packet engine.
   * @param msg Pointer to the packet that was added.
   * @return FAIL if the header wasn't added, otherwise SUCCESS.
   */
  error_t addDsrHeader(packet_id_t pid, message_t* msg) {
    if (call AMPacket.type(msg) == AM_DSR) {
      dbgerror("DsrControlP", "DSR: Pkt %u: DSR header already present!\n", pid);
      call DsrPacketEngine.drop(pid);
      return FAIL;
    }
    if (call DsrHeader.add(msg) != SUCCESS) {
      dbgerror("DsrControlP", "DSR: Pkt %u: Adding DSR header failed!\n", pid);
      call DsrPacketEngine.drop(pid);
      return FAIL;
    }
    call AMPacket.setType(msg, AM_DSR);
    return SUCCESS;
  }

  /**
   * Updates the route request outbound timer for a given destination.
   *
   * @param dest The destination node.
   * @param attempts Number of route requests already sent.
   */
  void updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts) {
    data_timer_time_t newTime;
    if ((DSR_INIT_REQUEST_PERIOD << attempts) > DSR_MAX_REQUEST_PERIOD)
      newTime = DSR_MAX_REQUEST_PERIOD;
    else
      newTime = DSR_INIT_REQUEST_PERIOD << attempts;
    call RouteRequestOutTimer.start(dest, newTime);
    dbg("DsrControlP", "DSR: Route request out timer for %u set to %u ms\n", dest, newTime);
  }

  /**
   * Resets the route request outbound count in the cache and stops the timer
   * if found in the cache.
   *
   * @param dest The destination node.
   */
  void resetRouteRequestOutCache(am_addr_t dest) {
    dsr_route_request_out_t outEntry = {dest, DSR_HOP_LIMIT, 0};
    dsr_route_request_out_t* outCache;
    outCache = call RouteRequestOutCache.lookup(&outEntry);
    if (outCache != NULL && outCache->rreqsSinceRrep > 0) {
      outCache->rreqsSinceRrep = 0;
      call RouteRequestOutTimer.stop(dest);
      dbg("DsrControlP", "DSR: Route request out timer for %u reset\n", dest);
    }
  }

}
