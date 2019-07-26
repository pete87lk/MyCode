/*
Chapter 1 - Project 1.1

This project builds on Exercises P1.7 and P1.8. Your program should show a sequence of two dialog boxes:
* First, an input dialog box that asks: "What would you like me to do?"
* Then a message dialog box that says: "I'm sorry, Dave. I'm afraid I can't do that."

This program ignores the user input. Extra credit if you read the user's name and customize the message.

*/

import javax.swing.JOptionPane;

public class SpaceOdysseyTester
{
	public static void main(String[] args)
	{
		String name = JOptionPane.showInputDialog("What is your name?");
		JOptionPane.showInputDialog("What would you like me to do?");
		JOptionPane.showMessageDialog(null, "I'm sorry " + name +", I'm afraid I can't do that.");
		System.exit(0);
	}
}