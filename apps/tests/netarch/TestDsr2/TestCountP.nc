module TestCountP {
  uses {
    interface Boot;
    command void doSomething();
    command void doStuff();
  }
}

implementation {

  event void Boot.booted() {
    call doSomething();
    call doStuff();
  }

}
