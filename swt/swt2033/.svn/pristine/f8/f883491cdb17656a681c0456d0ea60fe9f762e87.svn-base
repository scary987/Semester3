package swttest2033;
import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.Color;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.JTextField;
import java.awt.SystemColor;
import javax.swing.SwingConstants;
import java.awt.Cursor;
import java.awt.Component;
import javax.swing.UIManager;
import javax.swing.border.BevelBorder;
import javax.swing.JPasswordField;
import javax.swing.JTable;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import javax.swing.JEditorPane;

public class Registertest extends JFrame {

	private JPanel contentPane;
	private JTextField txtWellcomeToGedankenarchiv;
	private JTextField Vorname;
	private JTextField Nachname;
	private JTextField repassword;
	private JTextField password;
	private JTextField Geburtsdatum;
	private JTextField email;
	private JLabel lblNewLabel_4;
	private JLabel lblNewLabel_5;
	private JLabel lblNewLabel_6;
	private JLabel lblNewLabel_7;
	private JLabel lblNewLabel_8;
	private JLabel lblNewLabel_10;
	private JLabel lblNewLabel_11;
	private JPanel panel;
	private JPanel panel_1;
	private JPasswordField passwordField_1;
	private JPasswordField passwordField_2;

	/**
	 * Launch the application.
	 */
	
	

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Registertest frame = new Registertest();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Registertest() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(300, 100, 848, 500); // change the frame size and the position
		contentPane = new JPanel();
		contentPane.setBackground(Color.PINK);
		contentPane.setBorder(null);
		setContentPane(contentPane);
		
		JLabel lblClose = new JLabel("    X");
		lblClose.setBorder(null);
		lblClose.setBounds(0, 0, 58, 31);
		lblClose.setForeground(Color.GRAY);
		lblClose.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				 
					if (JOptionPane.showConfirmDialog(null,"Are you sure you want to close this Window?","Confirmation", JOptionPane.YES_NO_OPTION)==0) {
						Registertest.this.dispose();
					
					}
							}
							@Override
							public void mouseEntered(MouseEvent e) {
								lblClose.setForeground(Color.RED);
							}
							@Override
							public void mouseExited(MouseEvent e) {
								lblClose.setForeground(Color.WHITE);
							}
});
		contentPane.setLayout(null);
		
		txtWellcomeToGedankenarchiv = new JTextField();
		txtWellcomeToGedankenarchiv.setBounds(28, 164, 298, 137);
		txtWellcomeToGedankenarchiv.setOpaque(false);
		txtWellcomeToGedankenarchiv.setForeground(Color.DARK_GRAY);
		txtWellcomeToGedankenarchiv.setBorder(null);
		txtWellcomeToGedankenarchiv.setFont(new Font("Arial", Font.BOLD, 18));
		txtWellcomeToGedankenarchiv.setText("  Wellcome to Gedankenarchiv !");
		contentPane.add(txtWellcomeToGedankenarchiv);
		txtWellcomeToGedankenarchiv.setColumns(10);
		lblClose.setAlignmentX(Component.RIGHT_ALIGNMENT);
		lblClose.setHorizontalAlignment(SwingConstants.LEFT);
		lblClose.setFont(new Font("Arial", Font.BOLD, 17));
		contentPane.add(lblClose);
		
		JLabel lblNewLabel = new JLabel("");
		lblNewLabel.setBounds(0, 0, 368, 500);
		lblNewLabel.setOpaque(true);
		lblNewLabel.setBackground(Color.YELLOW);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("");
		lblNewLabel_1.setBounds(0, 0, 368, 500);
		lblNewLabel_1.setOpaque(true);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("New label");
		lblNewLabel_2.setBounds(111, 194, 45, 13);
		contentPane.add(lblNewLabel_2);
		
		Vorname = new JTextField();
		Vorname.setHorizontalAlignment(SwingConstants.CENTER);
		Vorname.setBounds(415, 65, 319, 31);
		Vorname.setBorder(null);
		contentPane.add(Vorname);
		Vorname.setColumns(10);
		
		Nachname = new JTextField();
		Nachname.setBounds(415, 140, 319, 31);
		Nachname.setBorder(null);
		contentPane.add(Nachname);
		Nachname.setColumns(10);
		
		repassword = new JTextField();
		repassword.setBounds(415, 426, 329, 31);
		repassword.setBorder(null);
		contentPane.add(repassword);
		repassword.setColumns(10);
		
		password = new JTextField();
		password.setBounds(415, 352, 319, 31);
		password.setBorder(null);
		contentPane.add(password);
		password.setColumns(10);
		
		Geburtsdatum = new JTextField();
		Geburtsdatum.addKeyListener(new KeyAdapter() {
			
			}
		);
		Geburtsdatum.setFont(new Font("Tahoma", Font.BOLD, 12));
		Geburtsdatum.setBounds(415, 218, 319, 31);
		Geburtsdatum.setBorder(null);
		contentPane.add(Geburtsdatum);
		Geburtsdatum.setColumns(10);
		
		email = new JTextField();
		email.setBounds(415, 278, 319, 31);
		email.setBorder(null);
		contentPane.add(email);
		email.setColumns(10);
		
		
		JLabel lblNewLabel_3 = new JLabel("Vorname");
		lblNewLabel_3.setBounds(415, 45, 101, 23);
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 12));
		contentPane.add(lblNewLabel_3);
		
		lblNewLabel_4 = new JLabel("Nachname");
		lblNewLabel_4.setBounds(415, 126, 73, 13);
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 13));
		contentPane.add(lblNewLabel_4);
		
		lblNewLabel_5 = new JLabel("Geburtsdatum");
		lblNewLabel_5.setBounds(415, 186, 112, 26);
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 13));
		contentPane.add(lblNewLabel_5);
		
		lblNewLabel_6 = new JLabel("E-Mail");
		lblNewLabel_6.setBounds(415, 257, 101, 23);
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 13));
		contentPane.add(lblNewLabel_6);
		
		lblNewLabel_7 = new JLabel("Password");
		lblNewLabel_7.setBounds(415, 331, 101, 23);
		lblNewLabel_7.setFont(new Font("Tahoma", Font.BOLD, 13));
		contentPane.add(lblNewLabel_7);
		
		lblNewLabel_8 = new JLabel("Re-Password");
		lblNewLabel_8.setBounds(415, 393, 146, 33);
		lblNewLabel_8.setFont(new Font("Tahoma", Font.BOLD, 13));
		contentPane.add(lblNewLabel_8);
		
		JLabel lblNewLabel_9 = new JLabel("");
		lblNewLabel_9.setOpaque(true);
		lblNewLabel_9.setBackground(Color.GRAY);
		lblNewLabel_9.setVerifyInputWhenFocusTarget(false);
		lblNewLabel_9.setBounds(369, 0, 479, 33);
		contentPane.add(lblNewLabel_9);
		
		lblNewLabel_10 = new JLabel("Register as Author");
		lblNewLabel_10.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
		lblNewLabel_10.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				
				if (JOptionPane.showConfirmDialog(null,"Are you sure you want to close this Window?","Confirmation", JOptionPane.YES_NO_OPTION)==0) {
					Registertest.this.dispose();
			
				}}			@Override
			public void mouseEntered(MouseEvent e) {
					
					lblNewLabel_10.setForeground(Color.RED);
			}
				
				
			@Override
			public void mouseExited(MouseEvent e) {
				
				lblNewLabel_10.setForeground(Color.WHITE);
			}
			
});
		lblNewLabel_10.setForeground(Color.BLACK);
		lblNewLabel_10.setBackground(Color.YELLOW);
		lblNewLabel_10.setHorizontalAlignment(SwingConstants.CENTER);
		lblNewLabel_10.setBorder(new BevelBorder(BevelBorder.RAISED, Color.CYAN, Color.GREEN, Color.CYAN, null));
		lblNewLabel_10.setOpaque(true);
		lblNewLabel_10.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_10.setBounds(665, 467, 173, 33);
		contentPane.add(lblNewLabel_10);
		
		panel = new JPanel();
		panel.setBounds(425, 467, 196, 33);
		contentPane.add(panel);
		panel.setLayout(null);
		
		lblNewLabel_11 = new JLabel("Register as Reader");
		lblNewLabel_11.setBounds(0, 0, 196, 33);
		panel.add(lblNewLabel_11);
		lblNewLabel_11.setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
		lblNewLabel_11.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				
				
				if (JOptionPane.showConfirmDialog(null,"Submit?","Confirmation", JOptionPane.YES_NO_OPTION)==0) {
					Registertest.this.dispose();
		
	
				}}			@Override
			public void mouseEntered(MouseEvent e) {
					
					lblNewLabel_11.setForeground(Color.RED);
			}
			@Override
			public void mouseExited(MouseEvent e) {
				lblNewLabel_11.setForeground(Color.WHITE);
			}
});
		lblNewLabel_11.setForeground(Color.BLACK);
		lblNewLabel_11.setBackground(Color.YELLOW);
		lblNewLabel_11.setOpaque(true);
		lblNewLabel_11.setHorizontalAlignment(SwingConstants.CENTER);
		lblNewLabel_11.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_11.setBorder(new BevelBorder(BevelBorder.RAISED, Color.CYAN, Color.GREEN, Color.CYAN, null));
		
		panel_1 = new JPanel();
		panel_1.setBounds(665, 467, 173, 33);
		contentPane.add(panel_1);
		
		passwordField_1 = new JPasswordField();
		passwordField_1.setHorizontalAlignment(SwingConstants.CENTER);
		passwordField_1.setBounds(415, 352, 319, 31);
		contentPane.add(passwordField_1);
		
		passwordField_2 = new JPasswordField();
		passwordField_2.setHorizontalAlignment(SwingConstants.CENTER);
		passwordField_2.setBounds(415, 426, 329, 31);
		contentPane.add(passwordField_2);
		setUndecorated(true);
	}	
}

		
		
		
