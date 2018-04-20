generic module NumberP (typedef num_t @integer()) {
  uses interface Boot;
}

implementation {
  
  num_t test;
  
  event void Boot.booted() {}
  
}
