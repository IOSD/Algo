/*Hackerrank problem https://www.hackerrank.com/challenges/grading/problem**/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades,int n){
        for(int i=0;i<n;i++)
        {
            if(grades[i]%5>2 &&grades[i]>=38){
            
                grades[i]=grades[i]+(5-grades[i]%5);
                
        }
        }
  return grades;  }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades,n);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}
