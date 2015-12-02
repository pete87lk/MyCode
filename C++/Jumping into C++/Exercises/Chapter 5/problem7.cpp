/**Chapter 5 - Practice Problem 7
Write a program that provides the option of tallying up the results of a poll with 3 possible values. The first input to the program is the poll question;
the next three inputs are the possible answers. The first answer is indicated by 1, the second by 2, the third by 3. The answers are tallied until a 0 is
entered. The program should then show the results of the poll - try making a bar graph that shows the results properly scaled to fit on your screen no matter
how many results were entered.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string question = "";
	string choice1 = "";
	string choice2 = "";
	string choice3 = "";

	int userInput;
	int optionOneCount = 0;
	int optionTwoCount = 0;
	int optionThreeCount = 0;

	cout<< "Please enter a poll question: " <<endl;
	getline( cin, question, '\n' );

	cout<< "Please enter the first choice for users: " <<endl;
	getline( cin, choice1, '\n' );

	cout<< "Please enter the second choice for users: " <<endl;
	getline( cin, choice2, '\n' );

	cout<< "Please enter the third choice for users: " <<endl;
	getline( cin, choice3, '\n' );

	do
	{
		cout<< ".....USER POLL....." <<endl <<endl;
		cout<< question <<endl <<endl;
		cout<< "1. " << choice1 <<endl;
		cout<< "2. " << choice2 <<endl; 
		cout<< "3. " << choice3 <<endl <<endl;
		cout<<"Please enter a choice from 1, 2 or 3...(Enter 0 to quit)" <<endl;
		cin>> userInput;

		if(userInput == 1)
		{
			cout<< "Option 1 selected. Thank you for voting." <<endl;
			optionOneCount++;
		}
		else if(userInput == 2)
		{
			cout<< "Option 2 selected. Thank you for voting." <<endl;
			optionTwoCount++;
		}
		else if(userInput == 3)
		{
			cout<< "Option 3 selected. Thank you for voting." <<endl;
			optionThreeCount++;
		}
		else
		{
			if(userInput == 0)
			{
				continue;
			}
			cout<< "Invalid option! Try again..." <<endl;
		}
	}while(userInput != 0);

	cout<< endl<< "Tally...." <<endl;
	cout<< endl<< "People who chose option 1: " <<endl;
	for(int i = 0; i <= optionOneCount; i++)
	{
		cout<< "*";
	}
	cout<< endl<< "People who chose option 2: " <<endl;
	for(int i = 0; i <= optionTwoCount; i++)
	{
		cout<< "*";
	}
	cout<< endl<< "People who chose option 3: " <<endl;
	for(int i = 0; i <= optionThreeCount; i++)
	{
		cout<< "*";
	}
	//cout<< optionOneCount << endl;
	//cout<< optionTwoCount << endl;
	//cout<< optionThreeCount << endl;
	return 0;
}