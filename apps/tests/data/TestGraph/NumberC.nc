generic configuration NumberC (typedef num_t @integer()) {}

implementation {
  
  components MainC, new NumberP(num_t);
  
  NumberP.Boot -> MainC;
  
}
