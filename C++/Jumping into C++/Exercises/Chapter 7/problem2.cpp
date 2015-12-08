/**Chapter 7 - Practice Problem 2
Write a program that outputs all the lyrics of The Twelve Days of Christmas using switch-case(hint: you might want to take advantage of fall-through cases).
*/

#include <iostream>
using namespace std;

//function for outputting 12 days lyrics
void twelveDays()
{
	int dayNum = 1;

	//do-while loop that repeats until the 13th day and then breaks. dayNum is used to track the day and is incremented at the end of each loop.
	do
	{
		switch(dayNum)
		{
			case 12:
				//if the day is the 'X'th, output the starting line for that verse, with text changed accordingly
				if(dayNum == 12)
				{
					cout<< "On the Twelfth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "12 Drummers Drumming" <<endl;
				//no break statement so that we fall through for each verse's additional lines
			case 11:
				if(dayNum == 11)
				{
					cout<< "On the Eleventh day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "11 Pipers Piping" <<endl;
			case 10:
				if(dayNum == 10)
				{
					cout<< "On the Tenth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "10 Lords a-Leaping" <<endl;
			case 9:
				if(dayNum == 9)
				{
					cout<< "On the Ninth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "9 Ladies Dancing" <<endl;
			case 8:
				if(dayNum == 8)
				{
					cout<< "On the Eighth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "8 Maids a-Milking" <<endl;
			case 7:
				if(dayNum == 7)
				{
					cout<< "On the Seventh day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "7 Swans a-Swimming" <<endl;
			case 6:
				if(dayNum == 6)
				{
					cout<< "On the Sixth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "6 Geese a-Laying" <<endl;
			case 5:
				if(dayNum == 5)
				{
					cout<< "On the Fifth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "5 Gold Rings" <<endl;
			case 4:
				if(dayNum == 4)
				{
					cout<< "On the Fourth day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "4 Calling Birds" <<endl;
			case 3:
				if(dayNum == 3)
				{
					cout<< "On the Third day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "Three French Hens" <<endl;
			case 2:
				if(dayNum == 2)
				{
					cout<< "On the Second day of Christmas, my true love gave to me" <<endl;
				}
				cout<< "Two Turtle Doves" <<endl;
			default:
				//test whether it's the first day or any other day, as the text output changes accordingly
				if(dayNum == 1)
				{
					cout<< "On the First day of Christmas, my true love gave to me" <<endl;
					cout<< "a Partridge in a Pear Tree." <<endl <<endl;
				}
				else
				{
					cout<< "and a Partridge in a Pear Tree." <<endl <<endl;
				}
		}

	dayNum++;

	}while (dayNum != 13);
}

int main()
{
	twelveDays();
	return 0;
}