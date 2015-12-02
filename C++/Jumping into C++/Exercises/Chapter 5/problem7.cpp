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
	//string variables to hold poll question and answers entered by user
	string question = "";
	string choice1 = "";
	string choice2 = "";
	string choice3 = "";

	//integer variables to store user votes and tallies
	int userInput;
	int optionOneCount = 0;
	int optionTwoCount = 0;
	int optionThreeCount = 0;

	//get the poll question and 3 possible answers from the user, store in variables from earlier
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
		//print out poll to user and take and store their vote
		cout<< ".....USER POLL....." <<endl <<endl;
		cout<< question <<endl <<endl;
		cout<< "1. " << choice1 <<endl;
		cout<< "2. " << choice2 <<endl; 
		cout<< "3. " << choice3 <<endl <<endl;
		cout<<"Please enter a choice from 1, 2 or 3...(Enter 0 to quit)" <<endl;
		cin>> userInput;

		//test user vote input against each option and increment counter for that option
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
			//we do not want to display the invalid option text if the user wants to quit the program
			if(userInput == 0)
			{
				continue;
			}
			cout<< "Invalid option! Try again..." <<endl;
		}
	}while(userInput != 0);

	//display results after user exits vote mode
	cout<< endl<< "Calculating Tally...." <<endl;
	cout<< endl<< "People who chose option 1: " <<endl;
	//use for loops to display a bar graph using * character
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
	return 0;
}