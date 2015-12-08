/**Chapter 7 - Practice Problem 1
Rewrite the menu program you wrote in the practice problems for the Functions chapter on page 103 using switch-case.
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
	char operation;
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

	switch(operation)
	{
		case '*':
			cout<< firstNum << " * " << secondNum << " equals: " << (firstNum * secondNum) <<endl;
			break;

		case '/':
			cout<< firstNum << " * " << secondNum << " equals: " << (firstNum / secondNum) <<endl;
			break;

		case '+':
			cout<< firstNum << " + " << secondNum << " equals: " << (firstNum + secondNum) <<endl;
			break;

		case '-':
			cout<< firstNum << " - " << secondNum << " equals: " << (firstNum - secondNum) <<endl;
			break;

		default:
			cout<< "Invalid operation! Program terminating...." <<endl;
			break;
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

	switch(choice)
	{
		case 1:
			up();
			break;

		case 2:
			down();
			break;

		case 3:
			calculator();
			break;

		default:
			bottles();
			break;
	}

	return 0;
}