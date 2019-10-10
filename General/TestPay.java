 // an e.g of user defined exception class

  import java.util.*;

          class InvalidSalaryException  extends  Exception
                  { 
                         public  InvalidSalaryException()
                                { 
                                  super();
                                }
                         public  InvalidSalaryException(String   s)
                                {    
                                  super(s);
                                }
                  }


   class PayCalc     // is devlp by y programmer...
       {
        public static int computeSalary(int basic) throws  InvalidSalaryException
              {          
                 int grs   = 0;                            
                try 
                   {
                      if ( basic < 4000 )
                         { 
                           throw  new InvalidSalaryException ( basic  +  " mst be grtr thn  4000 " );
                         }
                      }  catch  ( InvalidSalaryException e )
                            {
                     System.out.println( " unable to compute gross pay.. ");
                              throw  e;
                            }

                    int ta    =   ( basic  * 5 )  / 100  ;
                    int  da   =   (  basic * 7  )  / 100;
                    grs    = ta  + da  +  basic ;
                    return grs  ;
            }   
           }

     public class TestPay     // is devl by  x prog
        {  
            public static void main(String args[] )    
              {
               Scanner   cin =  new Scanner(System.in);
               System.out.print(  " Enter ur basic pay ");

               int   bpay =   cin.nextInt();  // 4000
                    try {
                     int gross = PayCalc.computeSalary( bpay ) ;                  
                     System.out.println(" final pay slip  = " + gross);
                         } catch ( InvalidSalaryException e )
                                {
                           System.out.println( " unable to print pay slip ");
                             //  e.printStackTrace();
                                }
                 System.out.println(" Thanks for using application...");

              }
        }
























/* 
                    try {
                         throw  new   InvalidSalaryException(" invalid salary ");
                        } catch ( InvalidSalaryException e )
                           { 
                             System.out.println(" salary  > 7000 ");  
                             throw  e;
                           }



     public  InvalidSalaryException(int  s)
                                {    
                           super (  "ur inputed salary   " +  s  + "  must be > than 7000");
                       //    mymessage = "ur inputed salary   " +  s  + "  must be > than 7000";
                                }*/
/*
          class InvalidSalaryException  extends  Exception
                  { //    String mymessage;
                         public  InvalidSalaryException()
                                {
                         //           mymessage="salary must be greater than  > 7000"; 
                               
                                }
                   
               //          public String toString()     {  return( mymessage); }
                         public  InvalidSalaryException(String   s)
                                {    
                                  super(s);
                                }
                  }
           */



           
























