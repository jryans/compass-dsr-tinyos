/**
 * Sets options sent in a MoteOptions message.
 * @author Ryan Stinnett
 */

includes MessageType;
includes MoteOptions;

module MoteOptionsM {
  uses {
    // Shared
    interface CreateMsg[uint8_t type];
    interface SendMsg[uint8_t type];
    // Mote Options
#ifdef PLATFORM_MICAZ
  	interface CC2420Control;
    interface MacControl;
#endif
    interface Stats;
    interface SrcReceiveMsg as RcvMO;
    interface PingB;
    interface NetProg;
    // Power Management
    interface SrcReceiveMsg as RcvPWR;
    interface StdControl as TransControl;
    interface StdControl as DelugeControl;
    interface Timer as Wake;
    interface Timer as Sleep;
    interface Timer as Deluge;
    interface PowerManagement as PM;
    interface Leds;
    // Compile Time     
    interface SrcReceiveMsg as RcvCT;
  }
  provides {
    interface MoteOptions;
    interface StdControl;
  }
}
implementation {
#if 0 // TinyOS Plugin Workaround
  typedef char msgData;
  typedef char MoteOptData;
  typedef char PwrControl;
#endif

  uint8_t rRet;
  PwrControl pCntl;
  bool sleeping;
  bool startup;
  bool stayAwake;
  
  // Shared
  
  event result_t SendMsg.sendDone[uint8_t type](TOS_MsgPtr msg, result_t success) {
    return SUCCESS;
  }
  
  // Mote Options
    
  /**
   * Processes various mote options as they are received over
   * the network.
   */
  event TOS_MsgPtr RcvMO.receive(uint16_t src, TOS_MsgPtr m) {
    MoteOptData *o = (MoteOptData *)m->data;
    dbg(DBG_USR2, "MoteOptions: Rcvd new options data\n");
    if (o->mask & MO_CLEARSTATS) {
      dbg(DBG_USR2, "MoteOptions: Clearing stats data\n");
      call Stats.clear();
    }
    if (o->mask & MO_HPLPM) {
      dbg(DBG_USR2, "MoteOptions: Setting power management to %i\n", o->hplPM);
      (o->hplPM) ? call PM.enable()
                 : call PM.disable();
    }
    if (o->mask & MO_RADIORETRIES) {
      dbg(DBG_USR2, "MoteOptions: Setting radio retries to %i\n", o->radioRetries);
      signal MoteOptions.receive(MO_RADIORETRIES, o->radioRetries);
      rRet = o->radioRetries;
    }
#ifdef PLATFORM_MICAZ
    if (o->mask & MO_TXPOWER) {
      if (o->txPower > 0 && o->txPower < 32) {
        dbg(DBG_USR2, "MoteOptions: Setting TX power level to %i\n", o->txPower);
        call CC2420Control.SetRFPower(o->txPower);
      }
    }
    if (o->mask & MO_RFCHAN) {
      if (o->rfChan > 10 && o->rfChan < 27) {
        dbg(DBG_USR2, "MoteOptions: Setting RF channel to %i\n", o->rfChan);
        call CC2420Control.TunePreset(o->rfChan);
      }
    }
    if (o->mask & MO_RFACK) {
      dbg(DBG_USR2, "MoteOptions: Setting RF ACK support to %i\n", o->rfAck);
      (o->rfAck) ? call MacControl.enableAck()
                 : call MacControl.disableAck();
    }
#endif
    if (o->mask & MO_RADIOOFFTIME) {
      dbg(DBG_USR2, "MoteOptions: Turning radio off for %i bms\n", o->radioOffTime * 1024);
      call Wake.start(TIMER_ONE_SHOT, o->radioOffTime * 1024);
      signal Sleep.fired();
    }
    if (o->mask & MO_PINGNUM) {
      dbg(DBG_USR2, "MoteOptions: Sending %i pings to %i\n", o->pingNum, o->radioOffTime);
      call PingB.sendTo(o->pingNum, o->radioOffTime, rRet);
    }
    return m;
  }
  
  /**
   * Signaled when an option affecting other applications is received.
   */
  default event void MoteOptions.receive(uint8_t optMask, uint8_t optValue) {}
  
  /**
   * Reset sleep countdown.
   */
  command void MoteOptions.resetSleep() {
    if (pCntl.pmMode == PM_SLEEP_ON_SILENCE) {
      dbg(DBG_USR1, "MoteOptions: Resetting sleep timer, will sleep in %i ms\n", pCntl.sleepInterval);
      call Sleep.stop();
      call Sleep.start(TIMER_ONE_SHOT, pCntl.sleepInterval);
    }
  }
  
  // Compile Time
  
  event TOS_MsgPtr RcvCT.receive(uint16_t src, TOS_MsgPtr m) {
    TOS_MsgPtr mOut = call CreateMsg.create[AM_COMPTIME]();
    CompTime *ct = (CompTime *)mOut->data;
#ifdef IDENT_UNIX_TIME
    ct->time = IDENT_UNIX_TIME;
#else
    ct->time = 0;
#endif
    call SendMsg.send[AM_COMPTIME](src, sizeof(CompTime), mOut);
    return m;
  }
  
  // Power Management
  
  event TOS_MsgPtr RcvPWR.receive(uint16_t src, TOS_MsgPtr m) {
    PwrControl *p;
    if (TOS_LOCAL_ADDRESS == 0 && src != NET_UART_ADDR) {
      // Send power control data to others
      TOS_MsgPtr mOut = call CreateMsg.create[AM_PWRCONTROL]();
      p = (PwrControl *)mOut->data;
      memcpy(p, &pCntl, sizeof(PwrControl));
      call SendMsg.send[AM_PWRCONTROL](src, sizeof(PwrControl), mOut);
    } else {
      p = (PwrControl *)m->data;
      memcpy(&pCntl, p, sizeof(PwrControl));
      if (pCntl.reboot)
        call NetProg.reboot();
    }
    return m;
  }
  
  /**
   * Checks with the sink for the latest power control settings.
   */
  void checkSink() {
    TOS_MsgPtr mOut = call CreateMsg.create[AM_PWRCONTROL]();
    call SendMsg.send[AM_PWRCONTROL](0, sizeof(PwrControl), mOut);
    dbg(DBG_USR1, "MoteOptions: Waiting %i ms to hear from sink\n", pCntl.sleepInterval);
    call Sleep.start(TIMER_ONE_SHOT, pCntl.sleepInterval);
  }
  
  /**
   * Wakes up to check for updated power control settings.
   */
  event result_t Wake.fired() {
    dbg(DBG_USR1, "MoteOptions: Reached next wake up interval\n");
    if (pCntl.pmMode != PM_INSOMNIAC)
      call Wake.start(TIMER_ONE_SHOT, pCntl.wakeUpInterval);
    if (sleeping) { 
      call TransControl.start();
    }
    call Deluge.start(TIMER_ONE_SHOT, 10);    
    return SUCCESS;
  }
  
  /**
   * Moves to sleep mode until the next wake up interval.
   */
  void goToSleep() {
    dbg(DBG_USR1, "MoteOptions: Going to sleep until next wake up interval\n");
    sleeping = TRUE;
    call Leds.redOff();
    call DelugeControl.stop();
    call TransControl.stop();
  }
  
  /**
   * Based on the active sleep mode, various actions are taken
   * on each sleep interval.
   */
  event result_t Sleep.fired() {
    switch (pCntl.pmMode) {
    case PM_CHECK_SINK: {
      call Wake.stop();
      call Wake.start(TIMER_ONE_SHOT, pCntl.wakeUpInterval - pCntl.sleepInterval);
      if (pCntl.stayAwake)
        return SUCCESS; }
    case PM_SLEEP_ON_SILENCE:
    case PM_INSOMNIAC: {
      goToSleep();
      break; }
    }
    return SUCCESS;
  }
  
  /**
   * Delays Deluge startup to give other systems time
   * to start first.
   */
  event result_t Deluge.fired() {
    if (startup && TOS_LOCAL_ADDRESS != 0) {
      startup = FALSE;
      call PM.enable();
    }
    if (sleeping) {
      sleeping = FALSE;
      call DelugeControl.start();
      call Leds.redOn();
      if (TOS_LOCAL_ADDRESS != 0 && pCntl.pmMode == PM_SLEEP_ON_SILENCE) 
        call MoteOptions.resetSleep();
    }
    if (TOS_LOCAL_ADDRESS != 0 && pCntl.pmMode == PM_CHECK_SINK)
      checkSink();    
    return SUCCESS;
  }

  // StdControl
  
  command result_t StdControl.init() {
    rRet = 5;
    pCntl.sleepInterval = MO_DEF_SLEEP;
    pCntl.wakeUpInterval = MO_DEF_WAKE;
    pCntl.stayAwake = FALSE;
    //pCntl.pmMode = PM_CHECK_SINK;
    pCntl.pmMode = PM_INSOMNIAC;
    sleeping = TRUE;
    startup = TRUE;
    call Leds.init();
    call TransControl.init();
    call DelugeControl.init();
    return SUCCESS;
  }

  command result_t StdControl.start() {
#ifdef PLATFORM_MICAZ
    call MacControl.enableAck();
#endif
    if (TOS_LOCAL_ADDRESS != 0) {
      signal Wake.fired();
    } else {
      call TransControl.start();
      call Deluge.start(TIMER_ONE_SHOT, 10);
    }
    return SUCCESS;
  }

  command result_t StdControl.stop() {
    call DelugeControl.stop();
    call TransControl.stop();
    return SUCCESS;
  }
  
}
