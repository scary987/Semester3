package swttest2033;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.Color;
import javax.swing.border.LineBorder;
import javax.swing.SpringLayout;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import java.awt.SystemColor;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.awt.Image;

import javax.swing.SwingConstants;
import java.awt.Rectangle;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;
import javax.swing.JButton;

public class logintest extends JFrame {
	
	private Image img_logo = new ImageIcon(logintest.class.getResource("res/old people.png")).getImage().getScaledInstance(100, 100, Image.SCALE_SMOOTH);
	private Image img_UserName = new ImageIcon(logintest.class.getResource("res/user.png")).getImage().getScaledInstance(40, 40, Image.SCALE_SMOOTH);
	private Image img_PassWord = new ImageIcon(logintest.class.getResource("res/icons8-key-24.png")).getImage().getScaledInstance(40, 40, Image.SCALE_SMOOTH);
	
	
	private JPanel contentPane;
	private JTextField txtUsername;
	private JPasswordField txtPassword;
	private JLabel lblNewLabel;
	private JLabel lblNewLabel_1;
	private JLabel lblNewLabel_2;
	private JPanel panel_3;
	private JTextField txtPasswordForget;
	private JPanel panel_4;
	private JTextField txtRegisterNow;
	private JPanel panel_5;
	private JTextField txtAboutUs;
	private JLabel lblIconlogo;
	private JLabel lblUsername;
	private JLabel lblKey;
	private JLabel lblNewLabel_3;
	private JLabel lblLoginMessage = new JLabel("");

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					logintest frame = new logintest();
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
	public logintest() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 800, 500);
		contentPane = new JPanel();
		contentPane.setBackground(Color.LIGHT_GRAY);
		contentPane.setBorder(new LineBorder(new Color(0, 0, 255), 2));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setBounds(138, 157, 373, 46);
		panel.setForeground(SystemColor.info);
		contentPane.add(panel);
		panel.setLayout(null);
		
		txtUsername = new JTextField();
		txtUsername.addFocusListener(new FocusAdapter() {
			@Override
			public void focusGained(FocusEvent e) {
			if(txtUsername.getText().contentEquals("Username")) {
				txtUsername.setText("");
			}
			else {
				txtUsername.selectAll();
			}
			}
			@Override
			public void focusLost(FocusEvent e) {
				if(txtUsername.getText().contentEquals(""))
				txtUsername.setText("Username");
			}
		});
		txtUsername.setBorder(null);
		txtUsername.setFont(new Font("Tahoma", Font.BOLD, 13));
		txtUsername.setText("User Name?");
		txtUsername.setBounds(10, 10, 295, 26);
		panel.add(txtUsername);
		txtUsername.setColumns(10);
		
		lblUsername = new JLabel("");
		lblUsername.setBounds(318, 0, 55, 46);
		lblUsername.setIcon(new ImageIcon(img_UserName));
		panel.add(lblUsername);
		
		JPanel panel_1 = new JPanel();
		panel_1.setBounds(138, 228, 373, 46);
		contentPane.add(panel_1);
		panel_1.setLayout(null);
		
		txtPassword = new JPasswordField();
		txtPassword.addFocusListener(new FocusAdapter() {
			@Override
			public void focusGained(FocusEvent e) {
			if(txtPassword.getText().contentEquals("PassWord")) {
				txtPassword.setEchoChar('●');
			    txtPassword.setText("");
			}
			else {
				txtPassword.selectAll();
			}
			
			}
			@Override
			public void focusLost(FocusEvent e) {
				if (txtPassword.getText().contentEquals("")) {
					txtPassword.setText("Password");
					txtPassword.setEchoChar((char)0);
				}
			}
		});
		txtPassword.setBorder(null);
		txtPassword.setEchoChar((char)0);
		txtPassword.setFont(new Font("Tahoma", Font.BOLD, 14));
		txtPassword.setText("PassWord");
		txtPassword.setBounds(10, 10, 296, 26);
		panel_1.add(txtPassword);
		
		lblKey = new JLabel("");
		lblKey.setBounds(316, 0, 57, 46);
		lblKey.setIcon(new ImageIcon(img_PassWord));
		panel_1.add(lblKey);
		
		JPanel panel_2 = new JPanel();
		panel_2.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseEntered(MouseEvent e) {
				panel_2.setBackground(new Color(30, 60, 60));
			}
			@Override
			public void mouseExited(MouseEvent e) {
				panel_2.setBackground(new Color(47, 80, 80));
			}
			@Override
			public void mousePressed(MouseEvent e) {
				panel_2.setBackground(new Color(60, 80, 80));
			}
			@Override
			public void mouseReleased(MouseEvent e) {
				panel_2.setBackground(new Color(47, 79, 79));
			}
		});
		panel_2.setBounds(138, 311, 371, 46);
		panel_2.setBackground(new Color(47, 79, 79));
		contentPane.add(panel_2);
		panel_2.setLayout(null);
		
		lblNewLabel = new JLabel("LOG IN");
		lblNewLabel.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				if(txtUsername.getText().equals("admin") && txtPassword.getText().equals("admin123")) {
					// if user inputs are Correct
					lblLoginMessage.setText("");
					JOptionPane.showMessageDialog(null, "Login Successful");
				}
				else if (txtUsername.getText().contentEquals("") || txtUsername.getText().equals("Username") || 
						  txtPassword.getText().equals("") || txtPassword.getText().equals("Password")) {
					lblLoginMessage.setText("Please Enter the required Information!");
				}
				else {
					lblLoginMessage.setText("Invalid Entry please Check the Password and Username! ");
				}
			}
		});
		lblNewLabel.setHorizontalAlignment(SwingConstants.CENTER);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 16));
		lblNewLabel.setBounds(141, 0, 116, 36);
		panel_2.add(lblNewLabel);
		
		JLabel lblX = new JLabel("X");
		lblX.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
	if (JOptionPane.showConfirmDialog(null,"Are you sure you want to close this Window?","Confirmation", JOptionPane.YES_NO_OPTION)==0) {
		logintest.this.dispose();
	
	}
			}
			@Override
			public void mouseEntered(MouseEvent e) {
				lblX.setForeground(Color.RED);
			}
			@Override
			public void mouseExited(MouseEvent e) {
				lblX.setForeground(Color.WHITE);
			}
		});
		lblX.setBounds(768, 10, 22, 22);
		lblX.setForeground(new Color(0, 139, 139));
		lblX.setHorizontalAlignment(SwingConstants.CENTER);
		lblX.setFont(new Font("Tahoma", Font.BOLD, 18));
		contentPane.add(lblX);
		
		lblNewLabel_2 = new JLabel("Wellcomen beim Gedankemarchiv");
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 20));
		lblNewLabel_2.setBounds(111, 86, 418, 39);
		contentPane.add(lblNewLabel_2);
		
		panel_3 = new JPanel();
		panel_3.setForeground(new Color(176, 224, 230));
		panel_3.setBounds(53, 409, 302, 60);
		contentPane.add(panel_3);
		panel_3.setLayout(null);
		
		txtPasswordForget = new JTextField();
		txtPasswordForget.setBorder(null);
		txtPasswordForget.setFont(new Font("Tahoma", Font.BOLD, 15));
		txtPasswordForget.setText("Password forget?");
		txtPasswordForget.setBounds(10, 10, 269, 40);
		panel_3.add(txtPasswordForget);
		txtPasswordForget.setColumns(10);
		
		panel_4 = new JPanel();
		panel_4.setBackground(SystemColor.info);
		panel_4.setBounds(454, 409, 258, 60);
		contentPane.add(panel_4);
		panel_4.setLayout(null);
		
		txtRegisterNow = new JTextField();
		txtRegisterNow.addMouseListener(new MouseAdapter() {
			
		 
			@Override
			public void mouseClicked(MouseEvent e) {
				if (JOptionPane.showConfirmDialog(null,"go to Register Field?","Confirmation", JOptionPane.YES_NO_OPTION)==0) {
					logintest.this.dispose();
				}}
			@Override
			public void mouseEntered(MouseEvent e) {
				
		    txtRegisterNow.setForeground(Color.RED);
				
			}
			@Override
			public void mouseExited(MouseEvent e) {
				txtRegisterNow.setForeground(Color.blue);
			}
		});
		txtRegisterNow.setBorder(null);
		txtRegisterNow.setFont(new Font("Tahoma", Font.BOLD, 16));
		txtRegisterNow.setText("Register now !");
		txtRegisterNow.setBounds(10, 10, 238, 40);
		panel_4.add(txtRegisterNow);
		txtRegisterNow.setColumns(10);
		
		panel_5 = new JPanel();
		panel_5.setBackground(new Color(204, 153, 102));
		panel_5.setBounds(598, 67, 192, 39);
		contentPane.add(panel_5);
		panel_5.setLayout(null);
		
		txtAboutUs = new JTextField();
		txtAboutUs.setFont(new Font("Tahoma", Font.BOLD, 15));
		txtAboutUs.setText("About us !");
		txtAboutUs.setBounds(37, 10, 96, 19);
		panel_5.add(txtAboutUs);
		txtAboutUs.setColumns(10);
		
		lblIconlogo = new JLabel("");
		lblIconlogo.setBounds(572, 157, 100, 146);
		contentPane.add(lblIconlogo);
		lblIconlogo.setIcon(new ImageIcon(img_logo));
		
		lblLoginMessage.setForeground(new Color(238, 232, 170));
		lblLoginMessage.setFont(new Font("Tahoma", Font.BOLD, 18));
		lblLoginMessage.setBounds(53, 371, 311, 28);
		contentPane.add(lblLoginMessage);
		setUndecorated(true);
		setLocationRelativeTo(null);
	}
}
