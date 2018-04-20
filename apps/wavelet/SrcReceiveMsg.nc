/**
 * Extends ReceiveMsg to provide the original source of
 * the message.
 * @author Ryan Stinnett
 */

includes AM;

interface SrcReceiveMsg
{
  event TOS_MsgPtr receive(uint16_t src, TOS_MsgPtr m);
}
