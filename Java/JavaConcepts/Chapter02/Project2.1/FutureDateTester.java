/*
Chapter 2 - Project 2.1

The GregorianCalendar class describes a point in time, as measured by the Gregorian calendar, the standard calendar that is commonly used throughout the world today. You can construct a GregorianCalendar object from a year, month, and day of the month, like this:

GregorianCalendar cal = new GregorianCalendar(); //Today's date
GregorianCalendar eckertsBirthday =  new GregorianCalendar(1919, Calendar.APRIL, 9);

Use constants Calendar.JANUARY .... Calendar.DECEMBER to specify the month.

The add method can be used to add a number of days to a GregorianCalendar object:

cal.add(Calendar.DAY_OF_MONTH, 10); //Now cal is ten days from today

This is a mutator method - it changes the cal object.

The get method can be used to query a given GregorianCalendar object:

int dayOfMonth = cal.get(Calendar.DAY_OF_MONTH);
int month = cal.get(Calendar.MONTH);
int year = cal.get(Calendar.YEAR);
int weekday = cal.get(Calendar.DAY_OF_WEEK);
// 1 is Sunday, 2 is Monday, . . . , 7 is Saturday

Your task is to write a program that prints the following information:
• The date and weekday that is 100 days from today
• The weekday of your birthday
• The date that is 10,000 days from your birthday

Use the birthday of a computer scientist if you don’t want to reveal your own
birthday.

*/

import java.util.Calendar;
import java.util.GregorianCalendar;

public class FutureDateTester
{
	public static void main(String[] args)
	{
		//create a new GregorianCalendar object for today's date
		GregorianCalendar myCal	 = new GregorianCalendar();

		//print out today's date
		System.out.println("Today's date is: ");
		System.out.println("Day of week: " + myCal.get(Calendar.DAY_OF_WEEK));
		System.out.println("Day of the month: " + myCal.get(Calendar.DAY_OF_MONTH));
		System.out.println("Month: " + myCal.get(Calendar.MONTH));
		System.out.println("Year: " + myCal.get(Calendar.YEAR));
		System.out.println("-----------------------");

		//add 100 days to the calendar object
		myCal.add(Calendar.DAY_OF_MONTH, 100);

		//print out date 100 days from today's date
		System.out.println("The date 100 days from now is: ");
		System.out.println("Day of week: " + myCal.get(Calendar.DAY_OF_WEEK));
		System.out.println("Day of the month: " + myCal.get(Calendar.DAY_OF_MONTH));
		System.out.println("Month: " + myCal.get(Calendar.MONTH));
		System.out.println("Year: " + myCal.get(Calendar.YEAR));
		System.out.println("-----------------------");

		//create a new GregorianCalendar object for my birthday
		GregorianCalendar birthday = new GregorianCalendar(1984, Calendar.MAY, 13);

		//print out my birthday details and the day of the week I was born on
		System.out.println("Your birthday is: ");		
		System.out.println("Day of the month: " + birthday.get(Calendar.DAY_OF_MONTH));
		System.out.println("Month: " + birthday.get(Calendar.MONTH));
		System.out.println("Year: " + birthday.get(Calendar.YEAR));
		System.out.println("The day of the week that you were born on is: ");
		System.out.println(birthday.get(Calendar.DAY_OF_WEEK));
		System.out.println("-----------------------");

		//add 10,000 days to the birthday calendar object
		birthday.add(Calendar.DAY_OF_MONTH, 10000);

		//print out the details of 10,000 days from the birthday object
		System.out.println("10,000 days from your birthday is: ");
		System.out.println("Day of week: " + myCal.get(Calendar.DAY_OF_WEEK));		
		System.out.println("Day of the month: " + birthday.get(Calendar.DAY_OF_MONTH));
		System.out.println("Month: " + birthday.get(Calendar.MONTH));
		System.out.println("Year: " + birthday.get(Calendar.YEAR));
		System.out.println("-----------------------");

	}
}