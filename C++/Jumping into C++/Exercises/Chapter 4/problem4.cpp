/**Chapter 4 - Practice Problem 4
Expand the password checking program from earlier in this chapter and make it take multiple usernames, each with their own password,
and ensure that the right username is used for the right password. Provide the ability to prompt users again if the first login attempt failed.

Original Code:

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string username;
	string password;
	cout << "Enter your username: " << "\n";
	getline( cin, username, '\n' );

	cout << "Enter your password: " << "\n";
	getline( cin, password, '\n' );
	if ( username == "root" && password == "xyzzy" )
	{
		cout << "Access allowed" << "\n";
	}
	else
	{
		cout << "Bad username or password. Denied access!" << "\n";
		// returning is a convenient way to stop the program
		return 0;
	}
	// continue onward!
}
*/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string inputUserName;
	int inputPassword;

	cout << "Enter your username: " << "\n";
	cin>> inputUserName;

	cout << "Enter your password: " << "\n";
	cin>> inputPassword;

	if (((inputUserName == "Peter") && (inputPassword == 1234)) || ((inputUserName == "Dominique") && (inputPassword == 4321)))
	{
		cout << "Access allowed, Welcome " << inputUserName << "\n";
	}
	else
	{
		cout<< "Login attempt failed! Please try again...(1 attempt remaining)" <<endl;

		cout << "Enter your username: " << "\n";
		cin>> inputUserName;

		cout << "Enter your password: " << "\n";
		cin>> inputPassword;

		if (((inputUserName == "Peter") && (inputPassword == 1234)) || ((inputUserName == "Dominique") && (inputPassword == 4321)))
		{
			cout << "Access allowed, Welcome " << inputUserName << "\n";
		}
		else
		{
			cout<< "Login attempt failed! You have used all of your available login attempts! Program terminating...";
			return 0;
		}		
	}
	// continue onward!
}