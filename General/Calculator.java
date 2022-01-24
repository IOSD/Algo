// Calculator to add or multiply two numbers 
import java.awt.*;
   import javax.swing.*;
   import java.awt.event.*;
 public class  MyFrame  extends  JFrame   implements  ActionListener
       { 
            JTextField  tf1, tf2,tf3; 
            JButton  btn_add,btn_multi ; 
            MyFrame()
                 {
                   tf1 = new JTextField ( 20 );
                   tf2 = new JTextField ( 20 );
                   tf3 = new JTextField ( 20 );

                   btn_add  = new JButton ("add");
                   btn_multi  = new JButton ("multi");

                  setLayout( new FlowLayout() );
                  add ( tf1 )   ;  add ( tf2 );  add ( tf3 );    tf3.setEditable(false);
                  add( btn_add);  add ( btn_multi ); 
 
                  btn_add.addActionListener( this  );
                  btn_multi.addActionListener( this  );
 
   setSize(280,180);  setVisible(true);   getContentPane().setBackground( Color.BLACK );
   setTitle("Caclulator");   setResizable( false);
    setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
                  }
              public void actionPerformed ( ActionEvent e )
                      {
                               JButton  temp  = (JButton) e.getSource(); 
                             try {
                                  int  a  =   Integer.parseInt( tf1.getText() );
                                  int  b  =   Integer.parseInt( tf2.getText() );
                                   int res  =0;                                 
                                  if ( temp  == btn_add )
                                     {
                                           res  =  a + b ;
                                     }
                                  else if ( temp   == btn_multi )
                                     {
                                           res   = a * b ;
                                     }
                              tf3.setText (  String.valueOf( res  ) );
                                  } catch ( NumberFormatException  ee )
                                          {
                                                tf3.setText(" invalid input ");
                                          }
                      }

           public static void main( String args[] )        {  new MyFrame();          }
       }
