/**
 * I converted the TinyOS library Bcast to a version that makes use of the
 * Transceiver library and makes use of its queue abilities, rather than
 * implementing another one of its own.
 * From Ray: If you know neighbors, repeat bcasts until neighbors repeat
 * them back to you (prob give up after N tries or M ms)
 * @author Ryan Stinnett
 */
 
/*
 * "Copyright (c) 2000-2003 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
 
/**
 * Based on Bcast library written by
 * @author Philip Buonadonna
 */

includes AM;
includes Broadcast;

module BroadcastM {
  provides {
    interface SendMsg[uint8_t type];
    interface SrcReceiveMsg[uint8_t type];
  }
  uses {
    interface CreateMsg[uint8_t type];
    interface Transceiver as IO[uint8_t type];
    interface Leds;
    interface Timer as Repeat;
    interface MoteOptions;
#ifdef BEEP
    interface Beep;
#endif
  }
}

implementation {
  
#if 0 // TinyOS Plugin Workaround
  typedef uint8_t bHeader;
#endif

  int16_t bcastSeqno = 0;
  TOS_Msg rptMsg;
  uint8_t curRepsLeft;
  uint8_t rptType;

  // Internal Functions

  /** 
   * This handles sequence space wrap-around. Overlow/Underflow makes
     * the result below correct ( -, 0, + ) for any a, b in the sequence
     * space. Results:	result	implies
     *			  - 	 a < b
     *			  0 	 a = b
     *			  + 	 a > b
     */
  bool newBcast(int16_t proposed) {
    if ((proposed - bcastSeqno) > 0) {
      bcastSeqno++;
      return TRUE;
    } else {
      return FALSE;
    }
  }

  /**
   * Each unique broadcast wave is signaled to applications once, but
   * may be rebroadcast multiple times to ensure reception.
   */
  void fwdBcast() {
    bHeader *h = (bHeader *)rptMsg.data;
    // Before resending, copy the message
    TOS_MsgPtr nMsg = call CreateMsg.createCopy[rptType](&rptMsg);
    if (nMsg == NULL) {
      dbg(DBG_USR1, "Bcast: Type: %i, Seq: %i, unable to copy!\n", rptType, h->seqNo);
      return;
    }
    dbg(DBG_USR1, "Bcast: Type: %i, Seq: %i, fwding, %i repeat(s) left...\n", 
        rptType, h->seqNo, curRepsLeft);
    call IO.sendRadio[rptType](TOS_BCAST_ADDR, rptMsg.length); 
    if (--curRepsLeft > 0)
      call Repeat.start(TIMER_ONE_SHOT, BCAST_REP_DELAY);
  }
  
  /**
   * All received messages come here, since the medium is unimportant.
   */
  TOS_MsgPtr receive(uint8_t type, TOS_MsgPtr msg) {
    bHeader *h = (bHeader *)msg->data;
    if (newBcast(h->seqNo)) {
      dbg(DBG_USR1, "Bcast: Type: %i, Seq: %i, rcvd\n", type, h->seqNo);
      // Store received message to be repeated
      memcpy(&rptMsg, msg, sizeof(TOS_Msg));
      curRepsLeft = BCAST_REPEATS;
      rptType = type;
      fwdBcast();
      // Remove broadcast header
      msg->length -= sizeof(bHeader);
      memmove(msg->data, msg->data + sizeof(bHeader), msg->length);
      msg = signal SrcReceiveMsg.receive[type](TOS_BCAST_ADDR, msg);
    }
    return msg;
  }

  // Commands and Events

  /**
   * After a delay of BCAST_REP_DELAY bms, a broadcast message
   * is repeat to ensure neighbors receive it.
   */
  event result_t Repeat.fired() {
    fwdBcast();
    return SUCCESS;
  }

  /**
   * Sends message data to the network
   * TODO: Can't initiate broadcasts on a mote yet.
   */
  command result_t SendMsg.send[uint8_t type](uint16_t dest, uint8_t len, TOS_MsgPtr msg) {
    if (dest == TOS_BCAST_ADDR)
      return FAIL;
    return SUCCESS;
  }
  
  /**
   * A message was sent over radio.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t IO.radioSendDone[uint8_t type](TOS_MsgPtr m, result_t result) {
    bHeader *h = (bHeader *)m->data;
    if (m->addr != TOS_BCAST_ADDR)
      return SUCCESS;
    if (result == SUCCESS) {  
      dbg(DBG_USR1, "Bcast: Type: %i, Seq: %i, fwd succeeded\n", type, h->seqNo);
    } else {
      dbg(DBG_USR1, "Bcast: Type: %i, Seq: %i, fwd failed!\n", type, h->seqNo);
    }
    return SUCCESS;
  }
  
  /**
   * A message was sent over UART.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t IO.uartSendDone[uint8_t type](TOS_MsgPtr m, result_t result) {
    if (m->addr != TOS_BCAST_ADDR)
      return SUCCESS;
    return SUCCESS; // Broadcasts aren't sent via the UART  
  }
  
  /**
   * Received a message over the radio
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveRadio[uint8_t type](TOS_MsgPtr m) {
    if (m->addr != TOS_BCAST_ADDR)
      return m;
    call MoteOptions.resetSleep();
    return receive(type, m);	
  }
  
  /**
   * Received a message over UART
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveUart[uint8_t type](TOS_MsgPtr m) {
    if (m->addr != TOS_BCAST_ADDR)
      return m;
    return receive(type, m);	
  }
  
  /**
   * Signaled when an option affecting other applications is received.
   */
  event void MoteOptions.receive(uint8_t optMask, uint8_t optValue) {}
}

