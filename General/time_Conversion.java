
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String timeConversion(String s) {
     int a=Integer.parseInt(s.substring(0,2));
        if(a==12){
            if(s.charAt(8)=='A')
            {a=0;}
            else{a=12;}
                  }
        else if(s.charAt(8)=='P'){a=a+12;}
       String ab=String.format("%02d%s", a,s.substring(2,8));
           return ab;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}
