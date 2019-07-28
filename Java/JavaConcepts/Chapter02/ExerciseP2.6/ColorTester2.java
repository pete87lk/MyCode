/*
Chapter 2 - Exercise P2.6

Repeat Exercise P2.5, but apply the darken method twice to the predefined object Color.RED.

*/

import java.awt.Color;

public class ColorTester2
{
	public static void main(String[] args)
	{
		//create a new color object with the predefined RED value for comparison
		Color c1 = Color.RED;

		//create a new color object with the predefined RED value and then apply darker method twice
		Color c2 = Color.RED.darker().darker();		

		//print out original color c1
		System.out.println("The original RED color was: ");
		System.out.print("Red:");
		System.out.print(c1.getRed());
		System.out.print(" Green:");
		System.out.print(c1.getGreen());
		System.out.print(" Blue:");
		System.out.println(c1.getBlue());

		//print out new color c2
		System.out.println("The new RED color is: ");
		System.out.print("Red:");
		System.out.print(c2.getRed());
		System.out.print(" Green:");
		System.out.print(c2.getGreen());
		System.out.print(" Blue:");
		System.out.println(c2.getBlue());

	}
}