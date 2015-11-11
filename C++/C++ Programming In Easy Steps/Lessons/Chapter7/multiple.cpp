//Lesson 47 - multiple.cpp

#include <string>
#include <iostream>
using namespace std;

class Dog
{
	int age, weight;
	string color;

	public:

		void bark()
		{
			cout<< "WOOF!" <<endl;
		}

		void setValues(int, int, string);

		int getAge()
		{
			return age;
		}

		int getWeight()
		{
			return weight;
		}

		string getColor()
		{
			return color;
		}
};

void Dog::setValues(int age, int weight, string color)
{
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}


int main()
{

	Dog fido;
	Dog pooch;

	fido.setValues(3, 15, "brown");
	pooch.setValues(4, 18, "gray");

	cout<< "Fido is a " << fido.getColor() << " dog" <<endl;
	cout<< "Fido is " << fido.getAge() << " years old" <<endl;
	cout<< "Fido weighs " << fido.getWeight() << " pounds" <<endl;
	fido.bark();

	cout<< "Pooch is " << pooch.getAge();
	cout<< " year old " << pooch.getColor();
	cout<< " dog who weighs " << pooch.getWeight();
	cout<< " pounds.";
	pooch.bark();

	return 0;
}