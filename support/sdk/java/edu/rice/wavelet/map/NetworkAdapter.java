package edu.rice.wavelet.map;

import java.awt.*;
import java.io.*;

public interface NetworkAdapter {
	
	public void loadNetwork(File netConfig);
	
	public void loadStats(File statsDir);
	
	public void mapClicked(Point pt);
	
	public void saveMap(File map);
	
	public void loadMap(File map);

}
