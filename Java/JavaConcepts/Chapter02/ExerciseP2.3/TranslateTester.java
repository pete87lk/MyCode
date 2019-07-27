/*
Chapter 2 - Exercise P2.3

Write a program that constructs a Rectangle object, prints its location, and then translates and prints it three more times, so that, if the rectangles were drawn, they would form one large rectangle.

*/

import java.awt.Rectangle;

public class TranslateTester
{
	public static void main(String[] args)
	{
		//construct a new Rectangle object called box
		Rectangle box = new Rectangle(0, 0, 30, 40);

		//print out current location
		System.out.println("The current top left corner of the rectangle is: ");
		//print X co-ordinate
		System.out.println(box.getX());
		//print Y co-ordinate
		System.out.println(box.getY());

		//move the X and Y co-ordinate
		box.translate(30, 0);
		//print out current location
		System.out.println("The current top left corner of the rectangle is: ");
		//print X co-ordinate
		System.out.println(box.getX());
		//print Y co-ordinate
		System.out.println(box.getY());

		//move the X and Y co-ordinate
		box.translate(-30, 40);
		//print out current location
		System.out.println("The current top left corner of the rectangle is: ");
		//print X co-ordinate
		System.out.println(box.getX());
		//print Y co-ordinate
		System.out.println(box.getY());

		//move the X and Y co-ordinate
		box.translate(30, 0);
		//print out current location
		System.out.println("The current top left corner of the rectangle is: ");
		//print X co-ordinate
		System.out.println(box.getX());
		//print Y co-ordinate
		System.out.println(box.getY());
	}
}