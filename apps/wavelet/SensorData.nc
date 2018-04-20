/**
 * Allows applications to request and receive data from the sensor system.
 * @author Ryan Stinnett
 */

includes Sensors;

interface SensorData {
  /**
   * Requests new data from the sensor system by combining the bitmasks
   * in Sensors.h for each sensor needed.
   */
  command void readSensors();

  /**
   * When the sensors are done, this event returns the requested data
   * to applications.
   * @param data pointer to the requested values
   */
  event void readDone(float *data);
}
