package edu.rice.wavelet.map;

import java.awt.*;
import java.awt.geom.*;
import java.util.*;

public class Mote implements Paintable {

	private static final int MOTE_RADIUS = 8;
	private int id;
	private Point2D.Double pos;
	private Ellipse2D.Double ell;
	private MoteSelectState selState;
	private Vector nbLine;
	public static float maxValue = 0;

	public Mote(int mID, Point2D.Double aPos) {
		id = mID;
		pos = aPos;
		ell = new Ellipse2D.Double(pos.x - MOTE_RADIUS, pos.y - MOTE_RADIUS,
				MOTE_RADIUS * 2, MOTE_RADIUS * 2);
		nbLine = new Vector();
		deselect();
	}

	public void select() {
		selState = new MoteSelectState() {
			public boolean isSelected() {
				return true;
			}

			public void paint(Graphics2D g2d) {		
				Enumeration l = nbLine.elements();
				while (l.hasMoreElements()) {
					StatsLine line = (StatsLine) l.nextElement();
					line.paint(g2d);
				}			
				g2d.setColor(Color.LIGHT_GRAY);
				g2d.fill(ell);
				g2d.setColor(Color.BLACK);
				g2d.draw(ell);
				drawCenteredString(new Integer(id).toString(), g2d);
			}
		};
	}

	public void deselect() {
		selState = new MoteSelectState() {
			public boolean isSelected() {
				return false;
			}

			public void paint(Graphics2D g2d) {
				g2d.setColor(Color.WHITE);
				g2d.fill(ell);
				g2d.setColor(Color.BLACK);
				g2d.draw(ell);
				drawCenteredString(Integer.toString(id), g2d);
			}
		};
	}

	private void drawCenteredString(String s, Graphics2D g2d) {
		FontMetrics fm = g2d.getFontMetrics();
		int sLen = fm.stringWidth(s);
		int ascent = fm.getMaxAscent();
		int descent = fm.getMaxDescent();
		double sx = pos.x - sLen / 2;
		double sy = pos.y - descent / 2 + ascent / 2;
		g2d.drawString(s, (float) sx, (float) sy);
	}

	public boolean isSelected() {
		return selState.isSelected();
	}

	public boolean wasClicked(Point pt) {
		return ell.contains(pt);
	}

	public void paint(Graphics2D g) {
		selState.paint(g);
	}

	public void addLine(Mote nbMote, float value) {
		nbLine.add(new StatsLine(new Line2D.Double(pos, nbMote.pos), value));
		if (value > maxValue)
			maxValue = value;
	}

	public int getId() {
		return id;
	}

}

abstract class MoteSelectState implements Paintable {

	abstract public boolean isSelected();

}

class StatsLine implements Paintable {

	private Line2D.Double line;
	private float value;
	private AffineTransform at;

	StatsLine(Line2D.Double line, float value) {
		this.line = line;
		this.value = value;
		makeTransform();
	}

	public void paint(Graphics2D g2d) {
		AffineTransform oldAT = g2d.getTransform();
		AffineTransform newAT = (AffineTransform) oldAT.clone();
		newAT.concatenate(at);
		g2d.setTransform(newAT);
		g2d.setColor(Color.getHSBColor((1 - value / Mote.maxValue) / 3, 1.0f, 0.8f));
		g2d.draw(line);
		drawCenteredString(Float.toString(value), g2d);
		g2d.setTransform(oldAT);
		g2d.setColor(Color.BLACK);
	}

	private void drawCenteredString(String s, Graphics2D g2d) {
		FontMetrics fm = g2d.getFontMetrics();
		int sLen = fm.stringWidth(s);
		int descent = fm.getMaxDescent();
		double sx = (line.x1 + line.x2) / 2 - sLen / 2;
		double sy = line.y1 - descent;
		g2d.drawString(s, (float) sx, (float) sy);
	}

	private void makeTransform() {
		AffineTransform nAT = new AffineTransform();
		if (line.y2 != line.y1) {
			if (line.x2 <= line.x1) {
				double xlen = line.x1 - line.x2;
				double hyp = line.getP1().distance(line.getP2());
				double angle = Math.acos(xlen / hyp);
				if (line.y2 < line.y1) {
					nAT.rotate(-angle, line.x1, line.y1);
				} else {
					nAT.rotate(angle, line.x1, line.y1);
				}
			} else {
				double xlen = line.x2 - line.x1;
				double hyp = line.getP1().distance(line.getP2());
				double angle = Math.acos(xlen / hyp);
				if (line.y2 < line.y1) {
					nAT.rotate(angle, line.x1, line.y1);
				} else {
					nAT.rotate(-angle, line.x1, line.y1);
				}
			}
		}
		line.setLine(line.getP1(), nAT.transform(line.getP2(), null));
		try {
			at = nAT.createInverse();
		} catch (Exception ex) {
		}
	}
}
