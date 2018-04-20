module TestServiceP {
  provides command void doSomething();
  enum {
    COUNT = uniqueCount("TestCount");
  }
}
implementation {

  command void doSomething() {
    return;
  }

}
