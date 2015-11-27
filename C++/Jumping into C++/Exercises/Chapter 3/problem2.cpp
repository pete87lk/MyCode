//Chapter 3 - Practice Problem 2
//Write a program that reads in two numbers and adds them together.

#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout<< "Please enter the first integer: " <<endl;
	cin>> num1;

	cout<< "Please enter the second integer: " <<endl;
	cin>> num2;

	cout<< "Performing addition...." <<endl;
	cout<< num1 << " + " << num2 << " equals: " << (num1 + num2) <<endl;

	return 0;
}