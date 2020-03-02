/*https://www.hackerrank.com/challenges/staircase/problem**/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++){System.out.print(" ");}
            int k=n-1-i;
            while(k<n)
            { System.out.print("#");k++;}
       System.out.println("");
        }
    }
}
