/*
Chapter 1 - Exercise P1.7

Type in and run the following program:

import javax.swing.JOptionPane;

public class DialogTester
{
	public static void main(String[] args)
	{
		JOptionPane.showMessageDialog(null, "Hello, World!");
		System.exit(0);
	}
}

Then modify	the program to show the message "Hello, your name!".

*/

import javax.swing.JOptionPane;

public class DialogTester
{
	public static void main(String[] args)
	{
		JOptionPane.showMessageDialog(null, "Hello, Peter!");
		System.exit(0);
	}
}