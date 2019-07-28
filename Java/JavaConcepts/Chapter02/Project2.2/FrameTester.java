/*
Chapter 2 - Project 2.2

Run the following program:

		import javax.swing.JFrame;
		import javax.swing.JTextField;

		public class FrameTester
		{

			public static void main(String[] args)
			{
				JFrame frame = new JFrame();
				frame.setSize(200, 200);
				JTextField text = new JTextField("Hello, World!");
				text.setBackground(Color.PINK);
				frame.add(text);
				frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
				frame.setVisible(true);
			}
		}

Modify the program as follows:
* Double the frame size.
* Change the greeting to "Hello, your name!".
* Change the background color to pale green (see Exercise P2.5).

*/

import javax.swing.JFrame;
import java.awt.Color;
import javax.swing.JTextField;

public class FrameTester
{

	public static void main(String[] args)
	{
		JFrame frame = new JFrame();
		frame.setSize(400, 400);
		JTextField text = new JTextField("Hello, Peter!");
		text.setBackground(new Color(0, 200, 0));
		frame.add(text);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setVisible(true);
	}
}