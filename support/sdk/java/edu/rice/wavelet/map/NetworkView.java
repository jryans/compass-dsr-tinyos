package edu.rice.wavelet.map;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;

public class NetworkView {

	private JFrame mainFrame = null; // @jve:decl-index=0:visual-constraint="10,10"
	private JPanel jContentPane = null;
	private JMenuBar menuBar = null;
	private JMenu fileMenu = null;
	private JMenuItem exitMenuItem = null;
	private JMenuItem loadStatsMenuItem = null;
	private JMenuItem loadNetworkMenuItem = null;

	private NetworkAdapter MoteNet;
	private Paintable Paint;
	private JPanel statusPanel = null;
	public JLabel statusLabel = null;
	private JSeparator fileSepExit = null;
	private JMenuItem openMapMenuItem = null;
	private JMenuItem saveMapMenuItem = null;
	private JSeparator fileSepLoad = null;
	private JToggleButton moveButton = null;
	private JSeparator modeButtonSep = null;
	private JToggleButton rotateButton = null;
	private JToggleButton zoomButton = null;
	private JSeparator viewButtonSep = null;
	private JToggleButton netButton = null;
	private JToggleButton backgroundButton = null;
	private JToggleButton compositeButton = null;
	public NetworkView(NetworkAdapter aMoteNet, Paintable aPaint) {
		MoteNet = aMoteNet;
		Paint = aPaint;
	}
	
	private JFileChooser fc = new JFileChooser();

	/**
	 * This method initializes loadStatsMenuItem
	 * 
	 * @return javax.swing.JMenuItem
	 */
	private JMenuItem getLoadStatsMenuItem() {
		if (loadStatsMenuItem == null) {
			loadStatsMenuItem = new JMenuItem();
			loadStatsMenuItem.setText("Load Stats Data...");
			loadStatsMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_D,
					Event.CTRL_MASK, false));
			loadStatsMenuItem.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					fc.setFileSelectionMode(JFileChooser.DIRECTORIES_ONLY);
					if (fc.showOpenDialog(mainFrame) == JFileChooser.APPROVE_OPTION) {
						File statsDir = fc.getSelectedFile();
						MoteNet.loadStats(statsDir);
						jContentPane.repaint();
					}
				}
			});
		}
		return loadStatsMenuItem;
	}

	/**
	 * This method initializes mainFrame
	 * 
	 * @return javax.swing.JFrame
	 */
	public JFrame getMainFrame() {
		if (mainFrame == null) {
			mainFrame = new JFrame();
			mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			mainFrame.setJMenuBar(getMenuBar());
			mainFrame.setSize(700, 700);
			mainFrame.setContentPane(getJContentPane());
			mainFrame.setTitle("Compass Mote Map");
      fc.setCurrentDirectory(new File(System.getProperty("user.dir")));
		}
		return mainFrame;
	}

	/**
	 * This method initializes jContentPane
	 * 
	 * @return javax.swing.JPanel
	 */
	private JPanel getJContentPane() {
		if (jContentPane == null) {
			BorderLayout borderLayout = new BorderLayout();
			jContentPane = new JPanel() {
				public void paintComponent(Graphics g) {
					super.paintComponent(g);
					Paint.paint((Graphics2D) g);
				}
			};
			jContentPane.setLayout(borderLayout);
			jContentPane.setBackground(Color.white);
			jContentPane.add(getStatusPanel(), BorderLayout.SOUTH);
			jContentPane.addMouseListener(new java.awt.event.MouseAdapter() {
				public void mouseClicked(java.awt.event.MouseEvent e) {
					MoteNet.mapClicked(e.getPoint());
					jContentPane.repaint();
				}
			});
		}
		return jContentPane;
	}

	/**
	 * This method initializes menuBar
	 * 
	 * @return javax.swing.JMenuBar
	 */
	private JMenuBar getMenuBar() {
		if (menuBar == null) {
			menuBar = new JMenuBar();
			menuBar.add(getFileMenu());
		}
		return menuBar;
	}

	/**
	 * This method initializes jMenu
	 * 
	 * @return javax.swing.JMenu
	 */
	private JMenu getFileMenu() {
		if (fileMenu == null) {
			fileMenu = new JMenu();
			fileMenu.setText("File");
			fileMenu.add(getOpenMapMenuItem());
			fileMenu.add(getSaveMapMenuItem());
			fileMenu.add(getFileSepLoad());
			fileMenu.add(getLoadNetworkMenuItem());
			fileMenu.add(getLoadStatsMenuItem());
			fileMenu.add(getFileSepExit());
			fileMenu.add(getExitMenuItem());
		}
		return fileMenu;
	}

	/**
	 * This method initializes jMenuItem
	 * 
	 * @return javax.swing.JMenuItem
	 */
	private JMenuItem getExitMenuItem() {
		if (exitMenuItem == null) {
			exitMenuItem = new JMenuItem();
			exitMenuItem.setText("Exit");
			exitMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Q, Event.CTRL_MASK, false));
			exitMenuItem.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					System.exit(0);
				}
			});
		}
		return exitMenuItem;
	}

	/**
	 * This method initializes loadNetworkMenuItem
	 * 
	 * @return javax.swing.JMenuItem
	 */
	private JMenuItem getLoadNetworkMenuItem() {
		if (loadNetworkMenuItem == null) {
			loadNetworkMenuItem = new JMenuItem();
			loadNetworkMenuItem.setText("Load Mote Network...");
			loadNetworkMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_N,
					Event.CTRL_MASK, false));
			loadNetworkMenuItem.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					fc.setFileSelectionMode(JFileChooser.FILES_ONLY);
					if (fc.showOpenDialog(mainFrame) == JFileChooser.APPROVE_OPTION) {
						File netData = fc.getSelectedFile();
						if (netData.getName().endsWith(".xml")) {
							MoteNet.loadNetwork(netData);
							jContentPane.repaint();
						}
					}
				}
			});
		}
		return loadNetworkMenuItem;
	}

	/**
	 * This method initializes statusPanel
	 * 
	 * @return javax.swing.JPanel
	 */
	private JPanel getStatusPanel() {
		if (statusPanel == null) {
			statusLabel = new JLabel();
			statusLabel.setText("");
			statusLabel.setMinimumSize(new Dimension(0, 25));
			statusPanel = new JPanel();
			statusPanel.setLayout(new BoxLayout(getStatusPanel(), BoxLayout.X_AXIS));
			statusPanel.setBorder(BorderFactory.createMatteBorder(1, 0, 0, 0,
					Color.gray));
			statusPanel.setPreferredSize(new Dimension(0, 25));
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(statusLabel, null);
			statusPanel.add(Box.createHorizontalGlue());
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getViewButtonSep(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getNetButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getBackgroundButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getCompositeButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getModeButtonSep(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getMoveButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getRotateButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
			statusPanel.add(getZoomButton(), null);
			statusPanel.add(Box.createHorizontalStrut(5));
		}
		return statusPanel;
	}

	/**
	 * This method initializes fileSepExit
	 * 
	 * @return javax.swing.JSeparator
	 */
	private JSeparator getFileSepExit() {
		if (fileSepExit == null) {
			fileSepExit = new JSeparator();
		}
		return fileSepExit;
	}

	/**
	 * This method initializes openMapMenuItem	
	 * 	
	 * @return javax.swing.JMenuItem	
	 */
	private JMenuItem getOpenMapMenuItem() {
		if (openMapMenuItem == null) {
			openMapMenuItem = new JMenuItem();
			openMapMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_O, Event.CTRL_MASK, false));
			openMapMenuItem.setText("Open Map...");
			openMapMenuItem.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {
					fc.setFileSelectionMode(JFileChooser.FILES_ONLY);
					if (fc.showOpenDialog(mainFrame) == JFileChooser.APPROVE_OPTION) {
						File mapData = fc.getSelectedFile();
						if (mapData.getName().endsWith(".xml")) {
							MoteNet.loadMap(mapData);
							jContentPane.repaint();
						}
					}
				}
			});
		}
		return openMapMenuItem;
	}

	/**
	 * This method initializes saveMapMenuItem	
	 * 	
	 * @return javax.swing.JMenuItem	
	 */
	private JMenuItem getSaveMapMenuItem() {
		if (saveMapMenuItem == null) {
			saveMapMenuItem = new JMenuItem();
			saveMapMenuItem.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S, Event.CTRL_MASK, false));
			saveMapMenuItem.setText("Save Map...");
			saveMapMenuItem.addActionListener(new java.awt.event.ActionListener() {
				public void actionPerformed(java.awt.event.ActionEvent e) {		
					fc.setFileSelectionMode(JFileChooser.FILES_ONLY);
					if (fc.showSaveDialog(mainFrame) == JFileChooser.APPROVE_OPTION) {
						File mapData = fc.getSelectedFile();
						if (mapData.getName().endsWith(".xml"))
							MoteNet.saveMap(mapData);
					}
				}
			});
		}
		return saveMapMenuItem;
	}

	/**
	 * This method initializes fileSepLoad	
	 * 	
	 * @return javax.swing.JSeparator	
	 */
	private JSeparator getFileSepLoad() {
		if (fileSepLoad == null) {
			fileSepLoad = new JSeparator();
		}
		return fileSepLoad;
	}

	/**
	 * This method initializes moveButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getMoveButton() {
		if (moveButton == null) {
			moveButton = new JToggleButton();
			moveButton.setText("M");
			moveButton.setMaximumSize(new Dimension(18, 18));
			moveButton.setPreferredSize(new Dimension(18, 18));
			moveButton.setAlignmentX(0.0F);
			moveButton.setSelected(true);
			moveButton.setFocusPainted(false);
			moveButton.setMargin(new Insets(0, 0, 0, 0));
		}
		return moveButton;
	}

	/**
	 * This method initializes modeButtonSep	
	 * 	
	 * @return javax.swing.JSeparator	
	 */
	private JSeparator getModeButtonSep() {
		if (modeButtonSep == null) {
			modeButtonSep = new JSeparator();
			modeButtonSep.setOrientation(SwingConstants.VERTICAL);
			modeButtonSep.setMaximumSize(new Dimension(2, 100));
		}
		return modeButtonSep;
	}

	/**
	 * This method initializes rotateButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getRotateButton() {
		if (rotateButton == null) {
			rotateButton = new JToggleButton();
			rotateButton.setAlignmentX(0.0F);
			rotateButton.setMaximumSize(new Dimension(18, 18));
			rotateButton.setMargin(new Insets(0, 0, 0, 0));
			rotateButton.setText("R");
			rotateButton.setFocusPainted(false);
			rotateButton.setPreferredSize(new Dimension(18, 18));
		}
		return rotateButton;
	}

	/**
	 * This method initializes zoomButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getZoomButton() {
		if (zoomButton == null) {
			zoomButton = new JToggleButton();
			zoomButton.setAlignmentX(0.0F);
			zoomButton.setMaximumSize(new Dimension(18, 18));
			zoomButton.setMargin(new Insets(0, 0, 0, 0));
			zoomButton.setText("Z");
			zoomButton.setFocusPainted(false);
			zoomButton.setPreferredSize(new Dimension(18, 18));
		}
		return zoomButton;
	}

	/**
	 * This method initializes viewButtonSep	
	 * 	
	 * @return javax.swing.JSeparator	
	 */
	private JSeparator getViewButtonSep() {
		if (viewButtonSep == null) {
			viewButtonSep = new JSeparator();
			viewButtonSep.setMaximumSize(new Dimension(2, 100));
			viewButtonSep.setOrientation(SwingConstants.VERTICAL);
		}
		return viewButtonSep;
	}

	/**
	 * This method initializes netButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getNetButton() {
		if (netButton == null) {
			netButton = new JToggleButton();
			netButton.setAlignmentX(0.0F);
			netButton.setMaximumSize(new Dimension(18, 18));
			netButton.setFocusPainted(false);
			netButton.setMargin(new Insets(0, 0, 0, 0));
			netButton.setSelected(true);
			netButton.setText("N");
			netButton.setPreferredSize(new Dimension(18, 18));
		}
		return netButton;
	}

	/**
	 * This method initializes backgroundButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getBackgroundButton() {
		if (backgroundButton == null) {
			backgroundButton = new JToggleButton();
			backgroundButton.setAlignmentX(0.0F);
			backgroundButton.setMaximumSize(new Dimension(18, 18));
			backgroundButton.setFocusPainted(false);
			backgroundButton.setMargin(new Insets(0, 0, 0, 0));
			backgroundButton.setText("B");
			backgroundButton.setPreferredSize(new Dimension(18, 18));
		}
		return backgroundButton;
	}

	/**
	 * This method initializes compositeButton	
	 * 	
	 * @return javax.swing.JToggleButton	
	 */
	private JToggleButton getCompositeButton() {
		if (compositeButton == null) {
			compositeButton = new JToggleButton();
			compositeButton.setAlignmentX(0.0F);
			compositeButton.setMaximumSize(new Dimension(18, 18));
			compositeButton.setFocusPainted(false);
			compositeButton.setMargin(new Insets(0, 0, 0, 0));
			compositeButton.setText("C");
			compositeButton.setPreferredSize(new Dimension(18, 18));
		}
		return compositeButton;
	}

}
