/**
 * Applies various settings for this mote.
 * @author Ryan Stinnett
 */
 
includes MessageType;

configuration MoteOptionsC {
  uses {
    interface CreateMsg[uint8_t type];
    interface SendMsg[uint8_t type];
    interface SrcReceiveMsg[uint8_t type];
    interface Stats;
    interface StdControl as TransControl;
    interface StdControl as DelugeControl;
  }
  provides interface MoteOptions;
}
implementation {
  components MoteOptionsM, Main, TimerC, HPLPowerManagementM, 
             LedsC, TransceiverC, PingM, NetProgC;
#ifdef PLATFORM_MICAZ
  components CC2420RadioC;
  MoteOptionsM.MacControl -> CC2420RadioC;
  MoteOptionsM.CC2420Control -> CC2420RadioC;
#endif

  /*** MO Internal ***/
  Main.StdControl -> TimerC;
  MoteOptionsM.Wake -> TimerC.Timer[unique("Timer")];
  MoteOptionsM.Sleep -> TimerC.Timer[unique("Timer")];
  MoteOptionsM.Deluge -> TimerC.Timer[unique("Timer")];
  MoteOptionsM.Leds -> LedsC;
  MoteOptionsM.PM -> HPLPowerManagementM;
  MoteOptionsM.NetProg -> NetProgC;
  
  
  /*** Ping ***/
  PingM.Trans -> TransceiverC.Transceiver[AM_PING];
  PingM.Timer -> TimerC.Timer[unique("Timer")];
  PingM.CreateMsg = CreateMsg[AM_PING];
  PingM.SendMsg = SendMsg[AM_PING];
  MoteOptionsM.PingB -> PingM;
  
  /*** MO External ***/
  MoteOptionsM = Stats;
  MoteOptionsM = CreateMsg;
  MoteOptionsM = SendMsg;
  MoteOptionsM.RcvMO = SrcReceiveMsg[AM_MOTEOPTIONS];
  MoteOptionsM.RcvPWR = SrcReceiveMsg[AM_PWRCONTROL];
  MoteOptionsM.RcvCT = SrcReceiveMsg[AM_COMPTIME];
  MoteOptionsM.TransControl = TransControl;
  MoteOptionsM.DelugeControl = DelugeControl;
  MoteOptions = MoteOptionsM;
  Main.StdControl -> MoteOptionsM;
}
