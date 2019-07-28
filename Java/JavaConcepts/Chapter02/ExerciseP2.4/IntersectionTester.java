/*
Chapter 2 - Exercise P2.4

The intersection method computes the intersection of two rectangles -  that is, the rectangle that is formed by two overlapping rectangles.

You call this method as follows;

Rectangle r3 = r1.intersection(r2);

Write a program that constructs two rectangle objects, prints them, and then prints the rectangle object that describes the intersection. What happens when the rectangles do not overlap?

*/

import java.awt.Rectangle;

public class IntersectionTester
{
	public static void main(String[] args)
	{
		//construct two new Rectangle objects called r1, r2
		Rectangle r1 = new Rectangle(0, 0, 50, 60);
		Rectangle r2 = new Rectangle(30, 40, 50, 60);

		//print out the details of first rectangle
		System.out.println("The current top left corner of the first rectangle is: ");
		//print X co-ordinate
		System.out.println(r1.getX());
		//print Y co-ordinate
		System.out.println(r1.getY());
		//print width
		System.out.println("The width of the first rectangle is: ");
		System.out.println(r1.getWidth());
		//print height
		System.out.println("The height of the first rectangle is: ");
		System.out.println(r1.getHeight());

		//print out the details of second rectangle
		System.out.println("The current top left corner of the second rectangle is: ");
		//print X co-ordinate
		System.out.println(r2.getX());
		//print Y co-ordinate
		System.out.println(r2.getY());
		//print width
		System.out.println("The width of the second rectangle is: ");
		System.out.println(r2.getWidth());
		//print height
		System.out.println("The height of the second rectangle is: ");
		System.out.println(r2.getHeight());

		//create new rectangle r3 based on intersection of r1 and r2
		Rectangle r3 = r1.intersection(r2);
		//print out the details of third rectangle
		System.out.println("The current top left corner of the third rectangle is: ");
		//print X co-ordinate
		System.out.println(r3.getX());
		//print Y co-ordinate
		System.out.println(r3.getY());
		//print width
		System.out.println("The width of the third rectangle is: ");
		System.out.println(r3.getWidth());
		//print height
		System.out.println("The height of the third rectangle is: ");
		System.out.println(r3.getHeight());
	}
}