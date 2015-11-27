//Chapter 3 - Practice Problem 3
/**Write a program that performs division of two numbers read from the user and prints out an exact result.
Make sure to test your program with both integer inputs and decimal inputs.
*/

#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;

	cout<< "Please enter your first number: " <<endl;
	cin>> num1;

	cout<< "Please enter your second number: " <<endl;
	cin>> num2;

	cout<< "Performing division...." <<endl;
	cout<< num1 << " / " << num2 << " equals: " << (num1 / num2) <<endl;

	return 0;
}