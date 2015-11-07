//Lesson 39 - deref.cpp

#include <iostream>
using namespace std;

int main()
{
	int a = 8, b = 16;

	//aPtr assigned address of a
	int* aPtr = &a;

	//bPtr declared
	int* bPtr;

	//bPtr assigned address of b
	bPtr = &b;

	cout<< "Adressess of pointers..." <<endl;
	cout<< "aPtr: " << &aPtr <<endl;
	cout<< "bPtr: " << &bPtr <<endl <<endl;

	cout<< "Values in pointers..." <<endl;
	cout<< "aPtr: " << aPtr <<endl;
	cout<< "bPtr: " << bPtr <<endl <<endl;

	cout<< "Values in addresses pointed to..." <<endl;
	cout<< "a: " << *aPtr <<endl;
	cout<< "b: " << *bPtr <<endl; 

	return 0;
}