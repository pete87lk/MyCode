//Lesson 43 - ref.cpp

#include <iostream>
using namespace std;

int main()
{
	int num;
	int& rNum = num;

	rNum = 400;

	cout<< "Value direct: " << num <<endl;
	cout<< "Value via reference: " << rNum <<endl;

	cout<< "Address direct: " << &num <<endl;
	cout<< "Address via reference: " << &num <<endl;

	rNum *= 2;

	cout<< "Value direct: " << num <<endl;
	cout<< "Value via reference: " << rNum <<endl;

	return 0;
}