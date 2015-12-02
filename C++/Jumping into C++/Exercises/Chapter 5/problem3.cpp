/**Chapter 5 - Practice Problem 3
Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of 0.
*/

#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	int userInput;

	while(userInput != 0)
	{
		cout<< "Please enter an integer to add to the total. To quit, enter 0." <<endl;
		cin>> userInput;
		//test if the user entered 0 as we do not want to perform statements in brackets on zero
		if(userInput != 0)
		{
			cout<< "Adding " << userInput << " to total... " <<endl;
			total += userInput;
		}		
		
	}

	//after breaking out of loop, display the total to the user
	cout<< "The total of the integers entered is " << total <<endl;

	return 0;
}