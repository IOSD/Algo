// this program will help in understanding the construction of object in java 
 class Rect
  { 
      private int length, breadth;
	  private double arr1[] = new double[999];
	  private double arr2[] = new double[999];
	  Rect()
	  {  length=0 ; breadth=0;  }
	  Rect(  int l , int b )
	  {  length = l ; breadth = b;
        System.out.println("object constructed" + length + " " + breadth);	  }
	  
	  
	  protected void finalize()
	  {
	    System.out.println("bye bye" + length + " " + breadth );    
	  }
	  }
	  
	  class Demo
	  {     static
	         {
				  System.runFinalizersOnExit(true);
			 }
	     public static void main(String args[]) throws InterruptedException
		 {   int i ; 
		   Rect rob = new Rect();
       	 for(i=1;i<=50;i++)
		 {			 
            rob = new Rect(i,i*2);
           if(i%3==0)
		   {
    System.gc();        // System.gc(); or Runtime r = Runtime.getRuntime();
		   }
		   Thread.sleep(200);
		   }				
		System.out.println("Invalid input");
		  Thread.sleep(3000);
		   }
		   }