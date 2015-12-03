/**Chapter 6 - Practice Problem 1
Take the "menu program" you wrote earlier and break it out into a series of calls to functions for each of the menu items.
Add the calculator and "99 bottles of beer" as two different functions that can be called.
*/

#include <iostream>
using namespace std;

void up()
{
	cout<< "Up in the clouds!" <<endl;
}

void down()
{
	cout<< "Down in the ocean!" <<endl;
}

void calculator()
{
	string operation = "";
	int firstNum;
	int secondNum;

	//prompt user for the operation they want to perform and store as string
	cout<< "Please enter the operation (*, /, +, -) you want to perform: " <<endl;
	cin>> operation;

	//prompt user for a number and store as an integer
	cout<< "Please enter your first integer: " <<endl;
	cin>> firstNum;

	//prompt user for a number and store as an integer
	cout<< "Please enter your second integer: " <<endl;
	cin>> secondNum;

	if(operation == "*")
	{
		cout<< firstNum << " * " << secondNum << " equals: " << (firstNum * secondNum) <<endl;
	}
	else if(operation == "/")
	{
		cout<< firstNum << " / " << secondNum << " equals: " << (firstNum / secondNum) <<endl;
	}
	else if(operation == "+")
	{
		cout<< firstNum << " + " << secondNum << " equals: " << (firstNum + secondNum) <<endl;
	}
	else if(operation == "-")
	{
		cout<< firstNum << " - " << secondNum << " equals: " << (firstNum - secondNum) <<endl;
	}
	else
	{
		cout<< "Invalid operation! Program terminating...." <<endl;
	}
}

void bottles()
{
	for(int i = 99; i > 0; i--)
	{
		//one verse using the value of i to dynamically change the sentence.
		cout<< i << " bottles of beer on the wall, " << i << " bottles of beer." <<endl;
		cout<< "Take one down, pass it around, " << i << " bottles of beer on the wall..." <<endl;
		//another line-break for formatting
		cout<< endl;
	}

	//once i gets to zero, the loop is broken we get to the following statements
	cout<< "No more bottles of beer on the wall, no more bottles of beer." <<endl;
	cout<< "Go to the store and buy some more, 99 bottles of beer on the wall..." <<endl;
}

int main()
{
	int choice = 0;

	do
	{
		cout<< "	MENU 	" <<endl;
		cout<< " 1. Up" <<endl;
		cout<< " 2. Down" <<endl;
		cout<< " 3. Calculator" <<endl;
		cout<< " 4. 99 bottles of beer" <<endl;
		cout<< "Please select an option(1-4): ";
		cin>> choice;
		if(choice!= 1 && choice != 2 && choice != 3 && choice != 4)
		{
			cout<< "Invalid choice!" <<endl;
		}

	}while (choice!= 1 && choice != 2 && choice != 3 && choice != 4);

	if(choice == 1)
	{
		up();
	}
	else if(choice == 2)
	{
		down();
	}
	else if(choice == 3)
	{
		calculator();
	}
	else
	{
		bottles();
	}

	return 0;
}