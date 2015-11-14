//Lesson 54 - virtual.cpp

#include <iostream>
using namespace std;

class Parent
{
	public:
		void Common() const
		{
			cout<< "I am a part of this family, ";
		}

		virtual void Identify() const
		{
			cout<< "I am the parent" <<endl;
		}
};

class Child : public Parent
{
	public:
		void Identify() const
		{
			cout<< "I am the child" <<endl;
		}
};

class Grandchild : public Child
{
	public:
		void Identify() const
		{
			cout<< "I am the grandchild" <<endl;
		}

		void Relate() const
		{
			cout<< "Grandchild has parent and grandparent";
		}
};

int main()
{
	Child son;
	Grandchild grandson;
	Parent* ptrChild = &son;
	Parent* ptrGrandchild = &grandson;

	//Inherited
	ptrChild -> Common();
	//Overriding
	ptrChild -> Identify();
	//Inherited
	ptrGrandchild -> Common();
	//Overriding
	ptrGrandchild -> Identify();
	//Explicit
	ptrChild -> Parent::Common();
	//Explicit
	ptrChild -> Parent::Identify();
	//Via instance
	grandson.Relate();

	return 0;
}