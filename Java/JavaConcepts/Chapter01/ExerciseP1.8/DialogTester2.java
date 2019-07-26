/*
Chapter 1 - Exercise P1.8

Type in and run the following program:

import javax.swing.JOptionPane;

public class DialogTester2
{
	public static void main(String[] args)
	{
		String name = JOptionPane.showInputDialog("What is your name?");
		System.out.println(name);
		System.exit(0);
	}
}

Then modify	the program to show the message "Hello, name!", displaying the name that the user typed in.

*/

import javax.swing.JOptionPane;

public class DialogTester2
{
	public static void main(String[] args)
	{
		String name = JOptionPane.showInputDialog("What is your name?");
		System.out.print("Hello, ");
		System.out.print(name);
		System.out.print("!");
		System.exit(0);
	}
}