/**Chapter 4 - Practice Problem 2
Implement a simple "password" system that takes a password in the form of a number. Make it so that either of two numbers is valid, 
but use only one IF statement to do the check.
*/

#include <iostream>
using namespace std;

int main()
{
	int pwdAttempt;

	//prompt for input and store as attempt
	cout<< "Please enter your password attempt: " <<endl;
	cin>> pwdAttempt;

	//test if attempt is equal to one of two predefined values
	if(pwdAttempt == 6 || pwdAttempt == 13)
	{
		cout<< "Password accepted. Welcome!" <<endl;
	}
	else
	{
		cout<< pwdAttempt << " is not the correct password! Program terminating...." <<endl;
		//end the program prematurely
		return 0;
	}

	return 0;
}