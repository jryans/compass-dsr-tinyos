package edu.rice.wavelet.map;

import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;

public class Transform {
	
	private Point srcPt;
	
	private AffineTransform curAT = new AffineTransform();
	private AffineTransform newAT;
	
	private TransformState state;
	
	public AffineTransform getTransform() {
		return curAT;
	}
	
	public void mouseEvent(MouseEvent e) {
		
	}
	
	public void changeMode() {
		
	}

}

interface TransformState {
	
}
