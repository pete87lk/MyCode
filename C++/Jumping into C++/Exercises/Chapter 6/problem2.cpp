/**Chapter 6 - Practice Problem 2
Make your calculator program perform computations in a separate function for each type of computation.
*/
#include <iostream>
#include <string>
using namespace std;

int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

int divide(int num1, int num2)
{
	return num1 / num2;
}

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
		cout<< firstNum << " * " << secondNum << " equals: " << multiply(firstNum, secondNum) <<endl;
	}
	else if(operation == "/")
	{
		cout<< firstNum << " / " << secondNum << " equals: " << divide(firstNum, secondNum) <<endl;
	}
	else if(operation == "+")
	{
		cout<< firstNum << " + " << secondNum << " equals: " << add(firstNum, secondNum) <<endl;
	}
	else if(operation == "-")
	{
		cout<< firstNum << " - " << secondNum << " equals: " << subtract(firstNum, secondNum) <<endl;
	}
	else
	{
		cout<< "Invalid operation! Program terminating...." <<endl;
	}

	return 0;
}


