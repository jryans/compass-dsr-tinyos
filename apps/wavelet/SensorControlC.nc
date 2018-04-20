/**
 * This application takes data readings from various sensors when requested
 * and sends back the values when they arrive.
 * @author Ryan Stinnett (Spring 2006 - Present)
 * @author The Moters (Fall 2005 - Spring 2006)
 */

configuration SensorControlC {
  provides interface SensorData[uint8_t type];
}

implementation {
  components SensorControlM, PhotoTemp, VoltageC, Main;

  SensorData = SensorControlM;
  Main.StdControl -> SensorControlM;
  SensorControlM.LightADC -> PhotoTemp.ExternalPhotoADC;
  SensorControlM.TempADC -> PhotoTemp.ExternalTempADC;
  SensorControlM.VoltADC -> VoltageC;
  SensorControlM.LightControl -> PhotoTemp.PhotoStdControl;
  SensorControlM.TempControl -> PhotoTemp.TempStdControl; 
  SensorControlM.VoltControl -> VoltageC;
}
