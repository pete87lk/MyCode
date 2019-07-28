/*
Chapter 2 - Exercise P2.9

Write a program that encodes a string by replacing all letters "i" with "!" and letters "s" with "$". Use the replace method. Demonstrate that you can correctly encode the string "Mississippi".

*/

public class EncoderTester
{
	public static void main(String[] args)
	{
		//create a new string to hold original word
		String orgWord = "Mississippi";
		//replace "i" with "!" first and store results in new string
		String newWord = orgWord.replace("i", "!");
		//now replace "s" with "$"
		newWord = newWord.replace("s", "$");

		//print out results
		System.out.println("The original word was: " + orgWord);
		System.out.println("The encoded word is: " + newWord);
	}
}