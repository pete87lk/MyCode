/*
Chapter 2 - Exercise P2.1

Write a program that constructs a Rectangle object and then computes and prints its area. Use the getWidth and getHeight methods.

*/

import java.awt.Rectangle;

public class AreaTester
{
	public static void main(String[] args)
	{
		//create a new Rectangle object called box
		Rectangle box = new Rectangle(5, 10, 20 , 30);

		//print out leading sentence
		System.out.print("The area of the created rectangle is: ");
		//compute area by multiplying width by height and outputting answer
		System.out.println(box.getWidth() * box.getHeight());
	}
}