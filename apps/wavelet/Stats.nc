/**
 * Applications file stats reports on events that can be transferred
 * to the computer at a later time.
 * @author Ryan Stinnett
 */
 
includes Stats;

interface Stats {
  
  /**
   * Submits a new report.
   */
  command void file(StatsReport report);
  
  /**
   * Clears current stats data.
   */
  command void clear();
  
}
