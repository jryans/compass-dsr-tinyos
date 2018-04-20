generic module TestClientP() {
  provides command void doStuff();
  enum {
    CLIENT_ID = unique("TestCount")
  };
}
implementation {

  command void doStuff() {
    return;
  }

}
