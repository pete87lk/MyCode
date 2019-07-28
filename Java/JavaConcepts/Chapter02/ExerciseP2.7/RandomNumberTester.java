/*
Chapter 2 - Exercise P2.7

The Random class implements a random number generator, which produces sequences of numbers that appear to be random. To generate random integers, you construct an object of the Random class, and then apply the nextInt method. For example, the call generator.nextInt(6) gives you a random number between 0 and 5.

Write a program that uses the Random class to simulate the cast of a die, printing a random number between 1 and 6 every time that the program is run.

*/

import java.util.Random;

public class RandomNumberTester
{
	public static void main(String[] args)
	{
		//create a new instance of the Random class
		Random num1 = new Random();

		//print out leading sentence
		System.out.println("Rolling dice....");
		System.out.print("The number is: ");
		System.out.println(num1.nextInt(6) + 1);
	}
}