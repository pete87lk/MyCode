/**Chapter 4 - Practice Problem 3
Write a small calculator that takes as input one of the four arithmetic operations, the two arguments to those operations, and then prints out the result.
*/

#include <iostream>
using namespace std;

int main()
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

	return 0;
}