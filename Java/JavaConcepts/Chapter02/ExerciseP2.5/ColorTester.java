/*
Chapter 2 - Exercise P2.5

In the Java library, a color is specified by its red, green and blue components between 0 and 255. Write a program that constructs a Color object with red, green, and blue values of 50, 100, and 150. Then apply the brighter method and print the red, green, and blue values of the resulting color.

*/

import java.awt.Color;

public class ColorTester
{
	public static void main(String[] args)
	{
		//create a new color object with the specified RGB values
		Color c1 = new Color(50, 100, 150);

		//apply brighter method to c1 and save output to new color c2
		Color c2 = c1.brighter();

		//print out original color c1
		System.out.println("The original color was: ");
		System.out.print("Red:");
		System.out.print(c1.getRed());
		System.out.print(" Green:");
		System.out.print(c1.getGreen());
		System.out.print(" Blue:");
		System.out.println(c1.getBlue());

		//print out new color c2
		System.out.println("The new color is: ");
		System.out.print("Red:");
		System.out.print(c2.getRed());
		System.out.print(" Green:");
		System.out.print(c2.getGreen());
		System.out.print(" Blue:");
		System.out.println(c2.getBlue());

	}
}