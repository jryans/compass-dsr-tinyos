package edu.rice.wavelet.map;

import javax.swing.*;

public class NetworkController extends JApplet {

	private static final long serialVersionUID = 1L;

	private NetworkView nv;
	private Network net;

	public void init() {
		try {
			UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		} catch (Exception e) {
		}
		net = new Network(new IStatus() {
			public void setStatusText(String text) {
				nv.statusLabel.setText(text);
			}
		});
		nv = new NetworkView(net, net);
		nv.getMainFrame().setVisible(true);
	}

	public static void main(String[] args) {
		SwingUtilities.invokeLater(new Runnable() {
			public void run() {
				NetworkController c = new NetworkController();
				c.init();
			}
		});
	}

}
