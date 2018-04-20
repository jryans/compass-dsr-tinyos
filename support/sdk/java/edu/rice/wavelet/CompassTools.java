/**
 * Executes various utilities based on command line arguments
 * that are useful when working with motes running the Compass program.
 * Runs most of the error checking on user input.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet;

import java.util.*;
import java.io.*;
import java.net.*;
import com.martiansoftware.jsap.*;
import com.thoughtworks.xstream.*;
import edu.rice.wavelet.bigpack.*;
import edu.rice.wavelet.comm.*;

public class CompassTools {

	private static boolean debug;

	private JSAPResult config;
	public static XStream xs = new XStream();
	private WaveletController wCont;
	public static String packagePath;
	public static String workingDir;
	private static String inputFileName;

	public static void main(String[] args) {
		try {
			new CompassTools(args).execute();
		} catch (Exception e) {
			e.printStackTrace();
			System.exit(1);
		}
	}

	public CompassTools(String[] args) throws JSAPException {
		SimpleJSAP parser = new SimpleJSAP(
				"CompassTools",
				"Controls TinyOS motes running CompassC",
				new Parameter[] {
						new Switch("transform", 't', "transform",
								"Runs wavelet transform (T)"),
						new FlaggedOption("prog", JSAP.BOOLEAN_PARSER, "yes",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "prog",
								"T: Send wavelet configuration to mote (required for first transform run)"),
						new FlaggedOption("sampleTime", JSAP.LONG_PARSER, "0",
								JSAP.NOT_REQUIRED, 'l', "length",
								"T: Elapsed time between data samples"),
						new Switch("force", JSAP.NO_SHORTFLAG, "force",
								"T: Forces uses of given sample length, even if it is too short"),
						new FlaggedOption("config", JSAP.STRING_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "config",
								"T: Alternate wavelet configuration data path"),
						new FlaggedOption("sets", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, 's', "sets",
								"T: Number of transform runs to execute"),
						new FlaggedOption("raw", JSAP.BOOLEAN_PARSER, "yes",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "raw",
								"T: Raw sensor data will be sent from all motes if enabled"),
						new FlaggedOption("comp", JSAP.BOOLEAN_PARSER, "no",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "comp",
								"T: Compression reduces network traffic if enabled"),
						new FlaggedOption("transType", JSAP.STRING_PARSER, "2DRWAGNER",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "transType",
								"T: Sets the type of transform"),
						new FlaggedOption("tdLength", JSAP.SHORT_PARSER, "8",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "timeDomainLength",
								"T: Number of time domain samples"),
						new FlaggedOption("maxBand", JSAP.SHORT_PARSER, "0",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "maxBand",
								"T: Maximum compression band to wait for"),
						new Switch("stats", JSAP.NO_SHORTFLAG, "stats",
								"Retrieves stats data (S)"),
						new FlaggedOption("ping", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "ping",
								"Sends a given number of ping messages (P)"),
						new Switch("opt", 'o', "options",
								"Changes various mote system options (MO)"),
						new FlaggedOption("diag", JSAP.BOOLEAN_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "diag",
								"MO: Toggles diagnostic mode"),
						new FlaggedOption("pm", JSAP.BOOLEAN_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "pm",
								"MO: Toggles mote power management"),
						new FlaggedOption("chan", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "chan",
								"MO: Changes radio channel (valid: 11 - 26)"),
						new FlaggedOption("power", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "power",
								"MO: Changes radio transmission power (valid: 1 - 31)"),
						new FlaggedOption("rofftime", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, 'r', "radioofftime",
								"MO: Disables the radio for a set time length (s)"),
						new FlaggedOption("retries", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "radioretries",
								"MO: Number of unicast transmission attempts"),
						new Switch("clear", 'c', "clear", "MO: Clear stats data"),
						new Switch("pwrcntl", 'p', "pwrcntl",
								"Changes power control options (PO)"),
						new FlaggedOption("awake", JSAP.BOOLEAN_PARSER, "yes",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "awake",
								"PO: Motes will remain awake if enabled"),
						new FlaggedOption("mode", JSAP.STRING_PARSER, "CS",
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "mode",
								"PO: Sets power control mode"),
						new FlaggedOption("sleepInt", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "sleepInt",
								"PO: Wait time before sleeping (ms)"),
						new FlaggedOption("wakeInt", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "wakeInt",
								"PO: Time between wake events (ms)"),
						new Switch("reboot", JSAP.NO_SHORTFLAG, "reboot",
								"PO: Reboot mote remotely (make take several tries)"),
						new FlaggedOption("route", JSAP.BOOLEAN_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "route",
								"Toggles individual mote links (R)"),
						new FlaggedOption("mote", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, JSAP.NO_SHORTFLAG, "mote",
								"R: ID of mote that shares a route with 'dest'"),
						new Switch("load", JSAP.NO_SHORTFLAG, "load",
								"Loads saved stats data (L)"),
						new Switch("ver", JSAP.NO_SHORTFLAG, "ver",
								"Displays software version currently running on a mote (V)"),
						new Switch("summary", JSAP.NO_SHORTFLAG, "summary",
								"Summarizes a directory of multiple stats data files (SUM)"),
						new Switch("debug", JSAP.NO_SHORTFLAG, "debug",
								"Prints debug messages"),
						new FlaggedOption("dest", JSAP.INTEGER_PARSER, JSAP.NO_DEFAULT,
								JSAP.NOT_REQUIRED, 'd', "dest",
								"Destination mote ID for unicast messages"),
						new Switch("broadcast", 'b', "broadcast", "Broadcasts messages"),
						new Switch("ignoreseqno", JSAP.NO_SHORTFLAG, "ignoreseqno",
								"Ignores saves broadcast sequence number"),
						new UnflaggedOption("file") });

		config = parser.parse(args);
		if (parser.messagePrinted())
			System.exit(1);
	}

	private void execute() {
		debug = config.getBoolean("debug");

		// Store package path, working directory, and base file name
		Class pClass = CompassTools.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		packagePath = pAddr.getPath() + "/";
		workingDir = System.getProperty("user.dir") + "/";
		inputFileName = config.getString("file", "");

		// Load broadcast sequence number
		if (!config.getBoolean("ignoreseqno"))
			SeqNo.read();

		if (config.getBoolean("transform")) {
			// Ensure the wavelet config file exists
			File wcFile;
			if (config.contains("config")) { // Supplied path
				wcFile = new File(config.getString("config"));
				if (!wcFile.isAbsolute())
					wcFile = new File(workingDir + config.getString("config"));
			} else { // Default path
				wcFile = new File(packagePath + "waveletConfig.xml");
			}
			if (!wcFile.exists()) {
				System.out.println("Wavelet config file at " + wcFile.getPath()
						+ "does not exist!");
				System.exit(1);
			}
			// TODO: Make WaveletController do this
			// Try reading the config data
			try {
				FileInputStream fs = new FileInputStream(wcFile);
				// Read in the config data
				WaveletConfigData wc = (WaveletConfigData) xs.fromXML(fs);
				fs.close();
				debugPrintln("Wavelet config loaded");
				// WaveletController calls back over here as different steps are
				// completed.
				wCont = new WaveletController(wc);
			} catch (Exception e) {
				System.out.println("Error reading wavelet config!");
				e.printStackTrace();
				System.exit(1);
			}
			// Set transform options
			wCont.setNumSets(config.getInt("sets"));
			wCont.setTransformType(config.getString("transType"));
			wCont.setResultType(config.getBoolean("raw"), config.getBoolean("comp"));
			wCont.setTimeDomainLength(config.getShort("tdLength"));
			wCont.setMaxBand(config.getShort("maxBand"));
			wCont.setSampleTime(config.getLong("sampleTime"),
					config.getBoolean("force"));
			// Inputs are good, stop the motes to make sure they aren't
			// doing anything first.
			CompassMote.broadcast.sendStop();
			if (config.getBoolean("prog")) {
				wCont.configMotes(); // Send config to each mote
			} else {
				System.out.println("Skipping wavelet config transmission");
				wCont.runSets(); // Start transform
			}
		} else if (config.getBoolean("stats")) {
			new CompassMote(destCheck()).getStats();
			if (!debug)
				new Timer().schedule(new Timeout(), 5000);
		} else if (config.getInt("ping", 0) != 0 && !config.getBoolean("opt")) {
			new Timer().scheduleAtFixedRate(new PingTimer(config.getInt("ping"),
					new CompassMote(destCheck())), 100, 30);
		} else if (config.getBoolean("opt")) {
			CompassMote cm;
			CompassMote.MoteOptions opt;
			if (config.getBoolean("broadcast")) {
				opt = CompassMote.broadcast.makeOptions();
			} else {
				cm = new CompassMote(destCheck());
				opt = cm.makeOptions();
			}
			if (config.contains("power"))
				opt.txPower(config.getInt("power"));
			if (config.getBoolean("clear"))
				opt.clearStats();
			if (config.contains("rofftime")) {
				if (config.contains("ping")) {
					opt.pingNum(config.getInt("ping"), config.getInt("rofftime"));
				} else {
					opt.radioOffTime(config.getInt("rofftime"));
				}
			}
			if (config.contains("pm"))
				opt.hplPM(config.getBoolean("pm"));
			if (config.contains("chan"))
				opt.rfChan(config.getInt("chan"));
			if (config.contains("retries"))
				opt.radioRetries(config.getInt("retries"));
			opt.send();
			System.exit(0);
		} else if (config.getBoolean("pwrcntl")) {
			CompassMote cm = new CompassMote(destCheck());
			CompassMote.PwrControl pm = cm.makePwrControl();
			pm.pmMode(config.getString("mode"));
			pm.awake(config.getBoolean("awake"));
			if (config.contains("sleepInt"))
				pm.sleepInterval(config.getInt("sleepInt"));
			if (config.contains("wakeInt"))
				pm.wakeInterval(config.getInt("wakeInt"));
			pm.reboot(config.getBoolean("reboot"));
			pm.send();
			System.exit(0);
		} else if (config.contains("route") && config.contains("mote")) {
			CompassMote cm = new CompassMote(destCheck());
			cm.sendRouterLink(config.getInt("mote"), config.getBoolean("route"));
			System.exit(0);
		} else if (config.getBoolean("load")) {
			if (config.contains("file")) {
				try {
					File in = new File(config.getString("file"));
					if (!in.isAbsolute())
						in = new File(workingDir + config.getString("file"));
					FileInputStream fs = new FileInputStream(in);
					MoteStats stats = (MoteStats) xs.fromXML(fs);
					System.out.println("Stats from file:");
					stats.printStats();
					fs.close();
				} catch (Exception e) {
					e.printStackTrace();
					System.exit(1);
				}
				System.exit(0);
			} else {
				System.out.println("No input file was given!");
				System.exit(1);
			}
		} else if (config.getBoolean("ver")) {
			CompassMote cm = new CompassMote(destCheck());
			cm.getCompileTime();
		} else if (config.getBoolean("summary")) {
			if (config.contains("file")) {
				try {
					File in = new File(config.getString("file"));
					if (!in.isAbsolute())
						in = new File(workingDir + config.getString("file"));
					File dFiles[] = in.listFiles();
					if (dFiles == null) {
						System.out.println("No files in that directory!");
						System.exit(1);
					}
					System.out.println("Dest ID  P ACK %  M DEL %  AVG RET");
					System.out.println("-------  -------  -------  -------");
					TreeSet motes = new TreeSet(new Comparator() {
						public int compare(Object o0, Object o1) {
							File f0 = (File) o0;
							File f1 = (File) o1;
							int id0 = Integer.parseInt(f0.getName().substring(0,
									f0.getName().indexOf('.')));
							int id1 = Integer.parseInt(f1.getName().substring(0,
									f1.getName().indexOf('.')));
							return id0 - id1;
						}
					});
					for (int f = 0; f < dFiles.length; f++) {
						if (dFiles[f].getName().endsWith(".xml")) {
							motes.add(dFiles[f]);
						}
					}
					Iterator m = motes.iterator();
					while (m.hasNext()) {
						File aFile = (File) m.next();
						FileInputStream fs = new FileInputStream(aFile);
						MoteStats stats = (MoteStats) xs.fromXML(fs);
						String entry = aFile.getName().substring(0,
								aFile.getName().indexOf('.'));
						entry = strExpand(entry, 9);
						entry += (stats.get_pAcked() * 100 / stats.get_pSent());
						entry = strExpand(entry, 18);
						entry += (stats.get_mDelivered() * 100 / stats.get_mSent());
						entry = strExpand(entry, 27);
						entry += (stats.get_avgRetries());
						System.out.println(entry);
						fs.close();
					}
				} catch (Exception e) {
					e.printStackTrace();
					System.exit(1);
				}
				System.exit(0);
			} else {
				System.out.println("No input directory was given!");
				System.exit(1);
			}
		} else {
			System.out.println("Invalid command line options!");
			System.exit(1);
		}
	}

	private String strExpand(String src, int fLen) {
		int iLen = src.length();
		for (int sp = 0; sp < fLen - iLen; sp++)
			src += " ";
		return src;
	}

	private int destCheck() {
		if (!config.contains("dest") || (config.getInt("dest") < 0)) {
			System.out.println("No valid destination mote supplied!");
			System.exit(1);
		}
		return config.getInt("dest");
	}

	public static void saveResult(Object data, String fileName) {
		File out = getFile(fileName);
		try {
			FileOutputStream fs = new FileOutputStream(out);
			xs.toXML(data, fs);
			fs.close();
			System.out.println("Data write successful!");
		} catch (Exception e) {
			System.out.println("Couldn't write data!");
			e.printStackTrace();
			System.exit(1);
		}
		System.exit(0);
	}

	public static File getFile(String fileName) {
		if (!inputFileName.equals(""))
			fileName = inputFileName;
		File out = new File(fileName);
		if (!out.isAbsolute())
			out = new File(workingDir + fileName);
		return out;
	}

	public static void debugPrint(String s) {
		if (debug)
			System.out.print(s);
	}

	public static void debugPrintln(String s) {
		if (debug)
			System.out.println(s);
	}

	public static void debugPrintln() {
		if (debug)
			System.out.println();
	}

}

class Timeout extends TimerTask {

	public void run() {
		System.out.println("Timeout reached!");
		System.exit(1);
	}

}

class PingTimer extends TimerTask {

	private int numPings;
	private CompassMote mote;

	public PingTimer(int pings, CompassMote aMote) {
		numPings = pings;
		mote = aMote;
	}

	public void run() {
		if (numPings-- > 0) {
			System.out.println((numPings + 1) + " pings left!");
			mote.sendPing();
		} else {
			cancel();
			System.exit(0);
		}
	}

}
