package git;
import java.util.*;

// Time Complexity: O(n^3)
// Space Complexity: O(n)

public class palindrome {
	public static void main(String args[]) {
		int r=0,sum=0,temp;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the number you want to be checked for pallindrome");
		int n = input.nextInt();  //to take the input for "n"
		temp=n;
		       
		while(n>0) {
			r=n%10;    // TO FIND REMAINDER
		   	sum=(sum*10)+r;
		   	n=n/10;      //TO REMOVE DIGIT AT ONE PLACE IN "n"
		    	   
		}
		if(temp==sum)
			System.out.println("the number is a PALLINDROME");
		else
			System.out.println("the number is NOT a PALLINDROME");
		    	   
		
	}

}
