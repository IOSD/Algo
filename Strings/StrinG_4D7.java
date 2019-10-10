package com.journaldev.string.examples;

/**
 * Java String Example
 * 
 * @author pankaj
 *
 */
public class StringEqualExample {

	public static void main(String[] args) {
		//creating two string object
		String s1 = "abc";
		String s2 = "abc";
		String s3 = "def";
		String s4 = "ABC";
		
		System.out.println(s1.equals(s2));//true
		System.out.println(s2.equals(s3));//false
		
		System.out.println(s1.equals(s4));//false;
		System.out.println(s1.equalsIgnoreCase(s4));//true
	}

}
