//Lesson 12 - precedence.cpp

#include <iostream>
using namespace std;

int main()
{
	int num;

	num = 1 + 4 * 3;
	cout<< endl<< "Default order: " << num <<endl;

	num = (1 + 4) * 3;
	cout<< "Forced order: " << num <<endl;

	num = 7 - 4 + 2;
	cout<< "Default direction: " << num <<endl;

	num = 7 - (4 + 2);
	cout<< "Forced direction: " << num <<endl;

	return 0;
}