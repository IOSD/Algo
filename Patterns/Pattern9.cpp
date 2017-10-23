  /*program to print the following pattern:-              
                 *
                * *
               * * *
              * * * *
             * * * * *
-----------------------------------------------------------------------------*/


    #include <stdio.h>  //header file for input and output
    #include <conio.h>  //header file for direct run
    void main()        //main function excute from here
    {
    	int i,j,k,t=0;  //declerations of the variables
    	clrscr();       //for clearing the screen
    	for (i=1; i<=5; i++) //loop for rows
            {   
    		for (k=t; k<5; k++) // loops for printins spaces
                   {
    			printf(" ");  //printing spaces
                   }
    		for (j=0; j< i; j++)   //loop for printing star
                   {
    			printf(" * ");//printing *
    			t = t + 1;    //updating the variable t
    		   } 
    		printf("\n");  //moving to new line
             }
    	getch();
    }_
  
