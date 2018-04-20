/**
 * Computes various statistics on a data stream without
 * storing the data itself.
 * @author Ryan Stinnett
 */
 
interface StatsArray {
  
  /**
   * Adds a new data element to the array.
   */
  command void newData(float newVal);
  
  /**
   * Returns the array's minimum value.
   */
  command float min();
  
  /**
   * Returns the array's maximum value.
   */
  command float max();
  
  /**
   * Returns the mean of the array.
   */
  command float mean();
  
  /**
   * Returns the <b>estimated</b> median of the array.
   */
  command float median();
  
  /**
   * Removes all data from the array.
   */
  command void clear();
  
}
