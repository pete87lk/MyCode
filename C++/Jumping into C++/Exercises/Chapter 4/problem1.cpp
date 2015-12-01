/**Chapter 4 - Practice Problem 1
Ask the user for two users' ages, and indicate who is older; behave differently if both are over 100.
*/

#include <iostream>
using namespace std;

int main()
{
	int ageUserOne;
	int ageUserTwo;

	//prompt and get first user's age from input
	cout<< "Please enter the age of user 1: " <<endl;
	cin>> ageUserOne;

	//prompt and get second user's age from input
	cout<< "Please enter the age of user 2: " <<endl;
	cin>> ageUserTwo;

	//test if user1's age is greater than user2's
	if(ageUserOne > ageUserTwo)
	{
		cout<< "User One is older than User Two." <<endl;
	}
	//test if user2's age is greater than user1's
	else if(ageUserTwo > ageUserOne)
	{
		cout<< "User Two is older than User One." <<endl;
	}
	//default is that they are both the same age
	else
	{
		cout<< "Both users are the same age." <<endl;
	}

	//extra condition for if both users are over 100 years old
	if(ageUserOne > 100 && ageUserTwo > 100)
	{
		cout<< "Wow, both users are over 100 years old!" <<endl;
	}

	return 0;
}
