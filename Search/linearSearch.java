import java.util.Scanner;

class linear 
{  
public static int search(int a[], int x) 
{  
    for(int i = 0; i < a.length; i++) 
    { 
        if(a[i] == x) 
        //Returning the index.
            return i; 
    } 
    return -1; 
} 
  
public static void main(String args[]) 
{ 
    System.out.println("Enter size of array");
   Scanner sc=new Scanner(System.in);
    int n= sc.nextInt(); 
    int a[]=new int[n];
    System.out.println("Enter array elements");
      for(int i=0;i<n;i++)
      {
          a[i]=sc.nextInt();
      }
      System.out.println("Enter the element to be searched");
      int x=sc.nextInt();
    int r = search(a, x); 
    if(r == -1) 
        System.out.print("Element is not present in array"); 
    else
        System.out.print("Element is present at index " + r); 
} 
} 
//Time Complexity : O(n) => In the worst case,
//the element will be found at the last index or will return -1,therefore running for at most n times.
//Space Complexity : O(1) => No extra space used.