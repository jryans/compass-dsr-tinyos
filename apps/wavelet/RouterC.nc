/**
 * Links together the networking system components and presents them as a
 * simple, tidy package to applications.
 * @author Ryan Stinnett
 */
 
includes MessageType;

configuration RouterC {
  provides {
    interface Router;
  }
}
implementation {
  components Main, NetworkC;
#ifdef ROUTE_STATIC
  components RouterStaticM;
#else
  components RouterSimM;
#endif
  
  /*** Routing ***/
#ifdef ROUTE_STATIC
  Main.StdControl -> RouterStaticM;
  RouterStaticM.SrcReceiveMsg -> NetworkC.SrcReceiveMsg[AM_ROUTERDATA];
  Router = RouterStaticM;
#else
  Main.StdControl -> RouterSimM;
  Router = RouterSimM;
#endif
}
