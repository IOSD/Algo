package git;


import java.util.*;
// time complexity = O(n)
// space complexity = O(n)
public class fibonacci{
	public static void main(String args[]) {
		int r=0,s=1,t;
		Scanner input = new Scanner(System.in);  
				System.out.println("Enter the number of terms till which you want to find fibonacci series");
				int n= input.nextInt();    //number input is taken from user
				
				System.out.print(r+" "+s); // first two numbers of the series are always printed
				
				  for(int i=2;i<n;i++)  //depends on the user , how long will be the series
				  {
					t=r+s;
					System.out.print(" "+t); //further numbers of the series
					r=s;
					s=t;;
				   }

}
