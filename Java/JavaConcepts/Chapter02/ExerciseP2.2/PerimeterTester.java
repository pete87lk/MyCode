/*
Chapter 2 - Exercise P2.2

Write a program that constructs a Rectangle object and then computes and prints its perimeter. Use the getWidth and getHeight methods.

*/

import java.awt.Rectangle;

public class PerimeterTester
{
	public static void main(String[] args)
	{
		//construct a new Rectangle object called box
		Rectangle box = new Rectangle(10, 10, 30, 40);

		//print out leading sentence
		System.out.print("The perimeter of the created rectangle is: ");
		//calculate the perimeter by adding height, height, width, width and outputting result
		System.out.println(box.getHeight() + box.getHeight() + box.getWidth() + box.getWidth());
	}
}