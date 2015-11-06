//Lesson 41 - fnptr.cpp

#include <iostream>
using namespace std;

void writeOutput(int*);
void computeTriple(int*);

int main()
{
	int num = 5;

	int* ptr = &num;

	writeOutput(ptr);

	//add and assign a dereferenced value
	*ptr += 15;
	writeOutput(ptr);

	computeTriple(ptr);
	writeOutput(ptr);

	return 0;
}

void writeOutput(int* value)
{
	cout<< "Current value: " << *value <<endl;
}

void computeTriple(int* value)
{
	//Multiply and assign dereferenced value
	*value *= 3;
}