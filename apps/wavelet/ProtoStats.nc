/**
 * Special commands and events for tracking routing protocol
 * statistics.
 * @author Ryan Stinnett
 */
 
includes AM;
 
interface ProtoStats {

  event result_t sendDone(TOS_MsgPtr msg, result_t success, uint8_t attemptNum);
  
  command result_t removeHeader(TOS_MsgPtr m);
  
}
