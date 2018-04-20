/**
 * Centralized list of message types used in CompassC.
 * @author Ryan Stinnett
 */

#ifndef _MESSAGETYPE_H
#define _MESSAGETYPE_H

enum {
  AM_MOTEOPTIONS = 20,
  AM_WAVELETDATA = 21,

  AM_WAVELETCONTROL = 24,
  AM_ROUTERDATA = 25,
  AM_PWRCONTROL = 26,
  AM_COMPTIME = 27,
  AM_PING = 28
};

#endif // _MESSAGETYPE_H
