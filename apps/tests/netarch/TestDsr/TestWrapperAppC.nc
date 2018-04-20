configuration TestWrapperAppC {}

implementation {

  components new TestWrapperP(), MainC;

  MainC.SoftwareInit -> TestWrapperP;

  TestWrapperP.TestClient -> TestWrapperP.TestA;
  TestWrapperP.TestClient -> TestWrapperP.TestB;

}
