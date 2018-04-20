/**
 * Links together the networking system components and presents them as a
 * simple, tidy package to applications.
 * @author Ryan Stinnett
 */

configuration NetworkC {
  provides {
    interface CreateMsg[uint8_t type];
    interface SendMsg[uint8_t type];
    interface SrcReceiveMsg[uint8_t type];
    interface ProtoStats[uint8_t type];
    interface Router;
    interface StdControl;
    interface StdControl as TransControl;
  }
  uses {
    interface MoteOptions;
  }
}
implementation {
  components BroadcastM, UnicastM, RouterC, NetworkShimM,
             TransceiverC, LedsC, TimerC;
#ifdef BEEP
  components BeepC;
#endif
  
  /*** Timer ***/
  StdControl = TimerC;
  BroadcastM.Repeat -> TimerC.Timer[unique("Timer")];
  
  /*** Transceiver ***/
  TransControl = TransceiverC;
  BroadcastM.IO -> TransceiverC;
  UnicastM.IO -> TransceiverC;
  
  /*** Broadcast ***/
  SendMsg = BroadcastM;
  SrcReceiveMsg = BroadcastM;
  MoteOptions = BroadcastM;
  BroadcastM.Leds -> LedsC;
#ifdef BEEP
  BroadcastM.Beep -> BeepC;
#endif
  
  /*** Unicast ***/
  SendMsg = UnicastM;
  SrcReceiveMsg = UnicastM;
  ProtoStats = UnicastM;
  MoteOptions = UnicastM;
  UnicastM.Leds -> LedsC;
#ifdef BEEP
  UnicastM.Beep -> BeepC;
#endif
  
  /*** Routing ***/
  Router = RouterC;
  UnicastM.Router -> RouterC;
  
  /*** Wrapper ***/
  CreateMsg = NetworkShimM;
  NetworkShimM.IO -> TransceiverC;
  BroadcastM.CreateMsg -> NetworkShimM;
  UnicastM.CreateMsg -> NetworkShimM;
}
