/**
 * Sends ping messages for diagnostic purposes.
 * @author Ryan Stinnett
 */
 
includes AM;
includes Ping;
 
module PingM {
  uses {
    interface Timer;
    interface Transceiver as Trans;
    interface CreateMsg;
    interface SendMsg;
  }
  provides {
    interface PingB;
  }
}
implementation {
  
  bool trans;
  uint16_t numLeft;
  uint16_t dest;
  TOS_MsgPtr tmpPtr;
  
  result_t sendPingTrans(uint16_t pingNum) {
    PingData *msg;
    if ((tmpPtr = call Trans.requestWrite()) == NULL)
      return FAIL;
    msg = (PingData *) tmpPtr->data;
    msg->seqNum = pingNum;
    if (call Trans.sendRadio(TOS_BCAST_ADDR, sizeof(PingData)) == FAIL)
      return FAIL;
    return SUCCESS;
  }
  
  // PingB
  
  // Deprecated - Stats won't track this correctly in radioSendDone
  /**
   * Broadcasts a given number of ping messages.
   */
  command void PingB.send(uint16_t num) {
    /* numLeft = num;
    trans = TRUE;
    call Timer.start(TIMER_REPEAT, PING_INTERVAL); */
  }
  
  /**
   * Sends a given number of ping messages to a specific mote.
   */
  command void PingB.sendTo(uint16_t num, uint16_t mDest, uint8_t rRet) {
    numLeft = num;
    dest = mDest;
    trans = FALSE;
    call Timer.start(TIMER_REPEAT, PING_INTERVAL * rRet);
  }
  
  // Timer
  
  event result_t Timer.fired() {
    if (numLeft > 0) {
      if (trans) {
        if (sendPingTrans(numLeft) == FAIL) {
          dbg(DBG_USR2, "Ping: Unable to send message!");
        }
      } else {
        TOS_MsgPtr m = call CreateMsg.create();
        PingData *p = (PingData *)m->data;
        p->seqNum = numLeft;
        call SendMsg.send(dest, sizeof(PingData), m); 
      }
      numLeft--;
    } else {
      call Timer.stop();
    }
    return SUCCESS;
  }
  
  // PingTrans
  
  /**
   * A message was sent over radio.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t Trans.radioSendDone(TOS_MsgPtr m, result_t result) {
    return SUCCESS;
  }
  
  /**
   * A message was sent over UART.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t Trans.uartSendDone(TOS_MsgPtr m, result_t result) {
    return SUCCESS;
  }
  
  /**
   * Received a message over the radio
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr Trans.receiveRadio(TOS_MsgPtr m) {
    return m;
  }
  
  /**
   * Received a message over UART
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr Trans.receiveUart(TOS_MsgPtr m) {
    return m;
  }
  
  // PingMsg
  
  /**
   * sendDone is signaled when the send has completed
   */
  event result_t SendMsg.sendDone(TOS_MsgPtr msg, result_t success) {
    return SUCCESS;
  }
  
}
