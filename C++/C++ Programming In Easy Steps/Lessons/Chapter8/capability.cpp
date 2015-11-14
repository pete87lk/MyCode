//Lesson 56 - capability.cpp

#include <iostream>
using namespace std;

class Bird
{
	public:
		virtual int Talk() const
		{
			return -1;
		}

		virtual int Fly() const
		{
			return -1;
		}
};

class Pigeon : public Bird
{
	public:
		int Talk() const
		{
			cout<< "Coo! Coo!" <<endl;
			return 0;
		}

		int Fly() const
		{
			cout<< "A pigeon flies away... " <<endl;
			return 0;
		}
};

class Chicken : public Bird
{
	public:
		int Talk() const
		{
			cout<< "Cluck! Cluck!" <<endl;
			return 0;
		}

		int Fly() const
		{
			cout<< "I\'m just a chicken - I can\'t fly!" <<endl;
			return 0;
		}
};

int main()
{
	Bird* pPigeon = new Pigeon;
	Bird* pChicken = new Chicken;

	pPigeon -> Talk();
	pChicken -> Talk();

	pPigeon -> Bird::Talk();
	if(-1)
	{
		cout<< "Error! - Program ended." <<endl;
		return 0;
	}

	//Call will not be made
	pPigeon -> Fly();
	//Call will not be made
	pChicken -> Fly();
	//statement will not be executed
	return 0;
}