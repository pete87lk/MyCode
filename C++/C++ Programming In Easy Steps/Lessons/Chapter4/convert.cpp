//Lesson 24 - convert.cpp

//include string support
#include <string>
//include stringstream support
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	string term = "100";
	int number = 100;
	//to store a converted string
	int num;
	//to store a converted integer
	string text;
	//to perform conversions
	stringstream stream;

	//load the string
	stream << term;

	//extract the integer
	stream >> num;

	num /= 4;
	cout<< "Integer value: " << num <<endl;

	//empty the contents
	stream.str("");
	//empty the bit flags
	stream.clear();

	//load the integer
	stream << number;

	//extract the string
	stream >> text;

	text += " Per Cent";
	cout<< "String value: " << text <<endl;

	return 0;
}