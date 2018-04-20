/**
 * Sends and receives unicast packets via the UART and the Radio.  Requires a
 * routing component that can fill in details of how to get from on mote to
 * another.  Supports retrying failed radio messages.
 * @author Ryan Stinnett
 */

includes AM;
includes Unicast;
includes Router;
includes MoteOptions;
includes MessageType;

module UnicastM {
  provides {
    interface SendMsg[uint8_t type];
    interface SrcReceiveMsg[uint8_t type];
    interface ProtoStats[uint8_t type];
  }
  uses {
    interface CreateMsg[uint8_t type];
    interface Transceiver as IO[uint8_t type];
    interface Router;
    interface Leds;
    interface MoteOptions;
#ifdef BEEP
    interface Beep;
#endif
  }
}

implementation {
#if 0 // TinyOS Plugin Workaround
  typedef char uHeader;
#endif
  
  uint8_t maxSendAttempts = UCAST_DEF_MAX_SEND_ATTEMPTS;

  // Internal Functions
  
  /**
   * Forwards packets destined for the UART.
   */
  void fwdUart(uint8_t type, uint8_t len, uHeader *h) {
    dbg(DBG_USR1, "Ucast: Type: %i, Mote: 0, Src: %i, fwding to UART...\n", type, h->src);
    call IO.sendUart[type](len); 
  }
  
  /**
   * Forwards packets for a different mote to their next hop.
   */
  void fwdNextHop(uint8_t type, uint8_t len, uHeader *h, uint8_t aNum) {
    uint16_t nextHop;
    if (type != AM_PING) {
      nextHop = call Router.getNextAddr(type, h->dest);
    } else {
      nextHop = h->dest;
    }
    if (nextHop == NET_BAD_ROUTE) {
      dbg(DBG_USR1, "Ucast: Route disabled intentionally or is this mote\n");
      return;
    }
    h->attemptNum = aNum;
    dbg(DBG_USR1, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, fwding to %i, attempt %i/%i...\n", 
        type, TOS_LOCAL_ADDRESS, h->src, h->dest, nextHop, aNum + 1, maxSendAttempts);
    if (call IO.sendRadio[type](nextHop, len) == FAIL) {
      dbg(DBG_USR2, "Ucast: sendRadio failed!");
    } else {
      call Leds.greenOn(); 
    }
  }
  
  /**
   * Delivers incoming radio and UART messages.
   */
  TOS_MsgPtr deliver(uint8_t type, TOS_MsgPtr msg) {
    uHeader *h = (uHeader *)msg->data;
    if (h->dest == TOS_LOCAL_ADDRESS) { // This packet is for us
      uint16_t src = h->src;
      // Send data on to applications
      dbg(DBG_USR1, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, rcvd\n", type,
          TOS_LOCAL_ADDRESS, src, h->dest);
      // Remove unicast header
      msg->length -= sizeof(uHeader);
      memmove(msg->data, msg->data + sizeof(uHeader), msg->length);
      msg = signal SrcReceiveMsg.receive[type](src, msg);
    } else {
      // Before resending, copy the message
      TOS_MsgPtr nMsg = call CreateMsg.createCopy[type](msg);
      if (nMsg == NULL) {
        dbg(DBG_USR1, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, unable to copy!\n", type,
            TOS_LOCAL_ADDRESS, h->src, h->dest);
        return msg;
      }
      h = (uHeader *)nMsg->data;
      if (h->dest == NET_UART_ADDR && TOS_LOCAL_ADDRESS == 0) {
        fwdUart(type, nMsg->length, h); // From normal motes to the sink
      } else { // This message is not for us, forward it on.
        fwdNextHop(type, nMsg->length, h, 0);
      }
    }
    return msg;
  }

  // Commands and Events
  
  /**
   * Takes a message with only raw data, adds a unicast header, and sends it to
   * the first hop towards its destination.
   */
  command result_t SendMsg.send[uint8_t type](uint16_t dest, uint8_t len, TOS_MsgPtr msg) {
    uHeader *h = (uHeader *)msg->data;
    // Could check this in NetworkM shim
    if (dest == TOS_BCAST_ADDR)
      return SUCCESS; // Ignore broadcase packets
    if (dest == TOS_LOCAL_ADDRESS)
      return FAIL; // Don't send messages to yourself!
    if (sizeof(uHeader) + len > TOSH_DATA_LENGTH)
      return FAIL; // Header and data exceeds max data length
    if (call Router.getStatus() != RO_READY)
      return FAIL; // Router isn't ready, this should be checked before sending
    // Add unicast header
    memmove(msg->data + sizeof(uHeader), msg->data, len);
    // Set source and destination mote IDs
    h->src = TOS_LOCAL_ADDRESS;
    h->dest = dest;
    if (TOS_LOCAL_ADDRESS == 0 && dest == NET_UART_ADDR) {
      fwdUart(type, len + sizeof(uHeader), h); // From UART bridge to the sink
    } else {
      fwdNextHop(type, len + sizeof(uHeader), h, 0); // Anything else goes on the radio
    }
    return SUCCESS;
  }
  
  /**
   * Helps other modules remove header data.
   */
  command result_t ProtoStats.removeHeader[uint8_t type](TOS_MsgPtr m) {
    if (m == NULL || m->addr == TOS_BCAST_ADDR)
      return FAIL;
    // Remove unicast header
    m->length -= sizeof(uHeader);
    memmove(m->data, m->data + sizeof(uHeader), m->length);
    return SUCCESS;
  }
  
  /**
   * A message was sent over radio.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t IO.radioSendDone[uint8_t type](TOS_MsgPtr m, result_t result) {
    uHeader *h = (uHeader *)m->data;
    if (m->addr == TOS_BCAST_ADDR)
      return SUCCESS;
    call Leds.greenOff();
    if ((result == SUCCESS) && (m->ack == 1)) {  
      dbg(DBG_USR1, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, fwd to %i succeeded\n", 
          type, TOS_LOCAL_ADDRESS, h->src, h->dest, m->addr);
      if (h->src == TOS_LOCAL_ADDRESS) {
        uint8_t aNum = h->attemptNum;
        // Remove unicast header
        m->length -= sizeof(uHeader);
        memmove(m->data, m->data + sizeof(uHeader), m->length);
        signal SendMsg.sendDone[type](m, SUCCESS);
        signal ProtoStats.sendDone[type](m, SUCCESS, aNum);
      }
    } else {
      // Either we got FAIL or there was no ACK
      uint8_t nextAttempt = h->attemptNum + 1;
      if (nextAttempt < maxSendAttempts) {
        TOS_MsgPtr nMsg = call CreateMsg.createCopy[type](m);
        if (nMsg == NULL) {
          dbg(DBG_USR1, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, unable to copy!\n", type, 
              TOS_LOCAL_ADDRESS, h->src, h->dest);
          return SUCCESS;
        }
        h = (uHeader *)nMsg->data;
        // Begin the next attempt
        fwdNextHop(type, nMsg->length, h, nextAttempt);
      } else {
#ifdef BEEP
        //call Beep.play(2, 250);
#endif
        dbg(DBG_USR2, "Ucast: Type: %i, Mote: %i, Src: %i, Dest: %i, fwd to %i failed!\n", 
          type, TOS_LOCAL_ADDRESS, h->src, h->dest, m->addr);
        if (h->src == TOS_LOCAL_ADDRESS) {
          uint8_t aNum = h->attemptNum;
          // Remove unicast header
          m->length -= sizeof(uHeader);
          memmove(m->data, m->data + sizeof(uHeader), m->length);
          signal SendMsg.sendDone[type](m, FAIL);
          signal ProtoStats.sendDone[type](m, FAIL, aNum);
        }
      }
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
    uHeader *h = (uHeader *)m->data;
    if (m->addr == TOS_BCAST_ADDR)
      return SUCCESS;
    if (result == SUCCESS) {  
      dbg(DBG_USR1, "Ucast: Type: %i, Mote: 0, Src: %i, fwd to UART succeeded\n", type, h->src);
    } else {
      dbg(DBG_USR1, "Ucast: Type: %i, Mote: 0, Src: %i, fwd to UART failed!\n", type, h->src);
    }
    return SUCCESS;
  }
  
  /**
   * Received a message over the radio
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveRadio[uint8_t type](TOS_MsgPtr m) {
    if (m->addr == TOS_BCAST_ADDR)
      return m;
    call MoteOptions.resetSleep();
    return deliver(type, m);
  }
  
  /**
   * Received a message over UART
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveUart[uint8_t type](TOS_MsgPtr m) {
    if (m->addr == TOS_BCAST_ADDR)
      return m;
    return deliver(type, m);	
  }
  
  /**
   * Signaled when an option affecting other applications is received.
   */
  event void MoteOptions.receive(uint8_t optMask, uint8_t optValue) {
    if ((optMask & MO_RADIORETRIES) != 0)
      maxSendAttempts = optValue;
  }
}
