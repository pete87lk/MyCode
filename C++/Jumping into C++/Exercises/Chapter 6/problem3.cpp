/**Chapter 6 - Practice Problem 3
Modify your password program from before to put all of the password checking logic into a separate function, apart from the rest of the program.
*/

#include <iostream>
using namespace std;

bool checkPwd(int pwd)
{
	int secretPwd = 1234;

	if(pwd == secretPwd)
	{
		return true;	
	}
	else
	{
		return false;	
	}
}

int main()
{
	//set a counter variable for attempts remaining
	int attempts = 3;
	int userInput;

	do
	{
		cout<< endl<< "Please enter a password...." <<endl;
		cin>> userInput;

		if(checkPwd(userInput))
		{
			cout<< "Access granted! Welcome!" <<endl;
		}
		else
		{
			cout<< "Incorrect password." <<endl;
			//decrement attempt counter
			attempts--;
			cout<< attempts << " attempts remaining!" <<endl <<endl;
		}
		
	}while(attempts != 0 && !checkPwd(userInput));

	return 0;
}