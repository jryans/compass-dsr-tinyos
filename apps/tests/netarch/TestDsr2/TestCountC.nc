configuration TestCountC {}

implementation {

  components new TestClientP() as Test1C, new TestClientP() as Test2C,
             TestServiceP, TestCountP, MainC;

  TestCountP.doSomething -> TestServiceP;
  TestCountP.doStuff -> Test1C;
  TestCountP.doStuff -> Test2C;

  TestCountP.Boot -> MainC;

}
