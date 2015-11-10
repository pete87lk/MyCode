//Lesson 44 - fnref.cpp

#include <iostream>
using namespace std;

void writeOuput(int&);
void computeTriple(int&);

int main()
{
	int num = 5;
	int& ref = num;

	writeOuput(ref);
	//add and assign a referenced value
	ref += 15;
	writeOuput(ref);

	computeTriple(ref);
	writeOuput(ref);
	
	return 0;
}

void writeOuput(int& value)
{
	cout<< "Current value: " << value <<endl;
}

void computeTriple(int& value)
{
	//mulitply and assign a referenced value
	value *= 3;
}