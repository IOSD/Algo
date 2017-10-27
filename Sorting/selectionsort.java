package git;
import java.util.*;
// time complexity = O(n^2)
// space complexity = O(1)

public class selectionsort {

	    void selectionsort(int a[])
	    {
	        int n = a.length;
	 
	        for (int i = 0; i < n-1; i++)
	        {
	            
	            int min= i;
	            for (int j = i+1; j < n; j++)
	                if (a[j] < a[min])
	                    min = j;
	 
	           
	            int temp = a[min];
	            a[min] = a[i];
	            a[i] = temp;
	        }
	    }
	 
	    void output(int a[])
	    {
	        int n = a.length;
	        for (int i=0; i<n; ++i)
	            System.out.print(a[i]+" ");
	        System.out.println();
	    }
	
	    public static void main(String args[])
	    {
	        selectionsort ob = new selectionsort();
	        Scanner input = new Scanner(System.in);
	        System.out.println("Enter the length array you want to be sorted"); 
	        int n;
	        n=input.nextInt();
			System.out.println("Enter the array(6) you want to be sorted");
			int i;
			int a[] = new int[n];
			for( i=0;i<n;i++)
			{
	        a[i] = input.nextInt();  //to take the input for array members
			}
	        ob.selectionsort(a);
	        System.out.println("ARRAY SORTED USIMG SELECTION SORT ");
	        ob.output(a);
	    }
	}
