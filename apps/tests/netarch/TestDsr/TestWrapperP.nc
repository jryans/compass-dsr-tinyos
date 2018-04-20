generic module TestWrapperP() {
  provides {
    interface Init;
    interface TestWrapper as TestA;
    interface TestWrapper as TestB;
  }
  uses interface TestWrapper as TestClient;
}


implementation {

  uint8_t checkValue;

  uint8_t innerTest(uint8_t a, uint8_t b) {
    return (a > checkValue) ? a : b;
  }

  uint8_t outerTest(uint8_t a, uint8_t b) @C() {
    return innerTest(a, b);
  }

  command error_t Init.init() {
    call TestClient.doSomething();
    return SUCCESS;
  }

  command test_t TestA.doSomething() {
    return 1;
  }

  command test_t TestB.doSomething() {
    return 2;
  }

}
