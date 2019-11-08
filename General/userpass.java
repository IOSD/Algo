// program to input username and password
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class MyScreen extends JFrame implements ActionListener
    {private JLabel lbl_user;
	 private JLabel lbl_pass;
	 private JTextField tf_user;
	 private JPasswordField tf_pass;
	 private JButton btn;
	 MyScreen()
	 {lbl_user = new JLabel("Enter Username");
	  lbl_pass = new JLabel("Enter password");
	  tf_user = new JTextField( 40 );
	  tf_pass = new JPasswordField( 30 );
	  btn = new JButton("OK");
	  super.setLayout( new FlowLayout());
	    btn.addActionListener(this);
		add(lbl_user);
		add(lbl_pass);
		add(tf_user);
		add(tf_pass);
		add(btn);
		setSize(300,400);
		setVisible(true);
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);}
		public void actionPerformed( ActionEvent e )
		{tf_user.setText("hello world");}}
		   class UserPass
		   { public static void main(String args[])
			 {new MyScreen(); }}