#include<stdio.h>  			//   including header file (standard input/output)
int main()					// main function starts here(begining)
{
 
 for(int i=1;i<=5;i++)      // this loop is used to print rows(upto 5)
 {
 	for(int j=1;j<=9;j++)   // this loop is used to print columns
	 { 
	 if(j>=i&&j<=10-i)		 //condition to print *
 		printf("*");
	else
 		printf(" ");			// if the above condition doesn't satisfies it prints space
     }	
 printf("\n");					/* Used ,Once all the numbers of a row a printed,
		 							 print a newline before starting the next row.
		 									*/
 }
 }
  /*  
   OUTPUT:
    
*********
 *******
  *****
   ***
    *
      
     */

