/*
Chapter 2 - Exercise P2.10

Write a program that switches the letters "e" and "o" in a string. Use the replace method repeatedly. Demonstrate that the string "Hello, World!" turns into "Holle, Werld!"

*/

public class SwitchLetterTester
{
	public static void main(String[] args)
	{
		//create a new string to hold original string
		String orgStr = "Hello, World!";
		//replace "e" instances with a temporary placeholder to prevent unwanted changes in second replace
		String newStr = orgStr.replace("e", "x");
		newStr = newStr.replace("o", "e");
		newStr = newStr.replace("x", "o");

		//print out results
		System.out.println("The original string was: " + orgStr);
		System.out.println("The new string is: " + newStr);
	}
}