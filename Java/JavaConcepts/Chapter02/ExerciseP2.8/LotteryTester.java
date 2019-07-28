/*
Chapter 2 - Exercise P2.8

Write a program that picks a combination in a lottery. In this lottery, players can choose 6 numbers (possible repeated) between 1 and 49. Your program should print out a sentence such as "Play this combination - it'll make you rich!". followed by a lottery combination.

*/

import java.util.Random;

public class LotteryTester
{
	public static void main(String[] args)
	{
		//create a new instance of the Random class
		Random ranNum = new Random();

		//generate 6 random lottery numbers and assign to variables
		int num1 = ranNum.nextInt(49) + 1;
		int num2 = ranNum.nextInt(49) + 1;
		int num3 = ranNum.nextInt(49) + 1;
		int num4 = ranNum.nextInt(49) + 1;
		int num5 = ranNum.nextInt(49) + 1;
		int num6 = ranNum.nextInt(49) + 1;

		//print out leading sentence
		System.out.println("Play this combination - it'll make you rich!");
		System.out.println(num1 + "," + num2 + "," + num3 + "," + num4 + "," + num5 + "," + num6);
	}
}