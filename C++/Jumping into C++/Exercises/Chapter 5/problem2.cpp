/**Chapter 5 - Practice Problem 2
Write a menu program that lets the user select from a list of options, and if the input is not one of the options, reprint the list.
*/

#include <iostream>
using namespace std;

int main()
{
	int choice = 0;

	do
	{
		cout<< "	MENU 	" <<endl;
		cout<< " 1. Up" <<endl;
		cout<< " 2. Down" <<endl;
		cout<< " 3. Right" <<endl;
		cout<< " 4. Left" <<endl;
		cout<< "Please select an option(1-4): ";
		cin>> choice;

	}while (choice!= 1 && choice != 2 && choice != 3 && choice != 4);

	return 0;
}