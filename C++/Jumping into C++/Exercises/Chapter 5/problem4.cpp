/**Chapter 5 - Practice Problem 4
Write a password prompt that gives a user only a certain number of password entry attempts - so that the user cannot easily write a password cracker.
*/

#include <iostream>
using namespace std;

int main()
{
	//set a counter variable for attempts remaining
	int attempts = 3;
	int secretPwd = 1234;
	int userInput;


	do
	{
		cout<< "Please enter a password...." <<endl;
		cin>> userInput;

		if(userInput == secretPwd)
		{
			cout<< "Access granted! Welcome!" <<endl;
		}
		else
		{
			cout<< "Incorrect password." <<endl;
			//decrement attempt counter
			attempts--;
			cout<< attempts << " attempts remaining!" <<endl;
		}
	}while(attempts != 0 && userInput != secretPwd);

	return 0;
}