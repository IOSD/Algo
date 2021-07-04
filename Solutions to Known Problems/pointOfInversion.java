/*Hacker rank Problem  https://www.hackerrank.com/challenges/find-point/problem**/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int px[]=new int[15];
        int py[]=new int[15];
        int qx[]=new int[15];
        int qy[]=new int[15];
        int ansx[]=new int[15];
        int ansy[]=new int[15];
        
        for(int i=0;i<n;i++){
          px[i]=sc.nextInt();
          py[i]=sc.nextInt();
           qx[i]=sc.nextInt(); 
            qy[i]=sc.nextInt();
            }
        
        
        for(int j=0;j<n;j++)
      {
          ansx[j]=(2*qx[j])-px[j];
        
          ansy[j]=(2*qy[j])-py[j];
   System.out.print(ansx[j]+" "+ansy[j]+"\r\n"); 
      }
        
        
    }
}
