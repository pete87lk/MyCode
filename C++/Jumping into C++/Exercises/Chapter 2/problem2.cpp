//Chapter 2 - Practice Problem 2
//Write a program that displays multiple lines of text onto the screen, each one displaying the name of one of your friends.

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string friend1 = "Shaun";
	string friend2 = "Conor";
	string friend3 = "Steven";

	cout<< "My first friend is " + friend1 <<endl;
	cout<< "My second friend is " + friend2 <<endl;
	cout<< "My third friend is " + friend3 <<endl;

	return 0;
}