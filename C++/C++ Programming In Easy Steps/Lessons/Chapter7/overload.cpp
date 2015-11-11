//Lesson 49 - overload.cpp

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

		void bark(string noise)
		{
			cout<< noise <<endl;
		}

		//constructor method prototypes
		Dog();
		Dog(int, int);
		Dog(int, int, string);

		~Dog();

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

Dog::Dog()
{
	age = 1;
	weight = 2;
	color = "black";
}

Dog::Dog(int age, int weight)
{
	this -> age = 1;
	this -> weight = 2;
	color = "white";
}

Dog::Dog(int age, int weight, string color)
{
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}

Dog::~Dog()
{
	cout<< "Object destroyed." <<endl;
}

int main()
{

	Dog fido(3, 15, "brown");
	Dog pooch(4, 18, "gray");
	Dog rex;
	Dog sammy(2, 6);

	cout<< "Fido is a " << fido.getColor() << " dog" <<endl;
	cout<< "Fido is " << fido.getAge() << " years old" <<endl;
	cout<< "Fido weighs " << fido.getWeight() << " pounds" <<endl;
	fido.bark();

	cout<< "Pooch is " << pooch.getAge();
	cout<< " year old " << pooch.getColor();
	cout<< " dog who weighs " << pooch.getWeight();
	cout<< " pounds.";
	pooch.bark();

	cout<< "Rex is a " <<rex.getAge();
	cout<< " year old " <<rex.getColor();
	cout<< " dog who weighs " << rex.getWeight();
	cout<< " pounds.";
	rex.bark("GRRR!");

	cout<< "Sammy is a " <<sammy.getAge();
	cout<< " year old " <<sammy.getColor();
	cout<< " dog who weighs " <<sammy.getWeight();
	cout<< " pounds.";
	rex.bark("BOWOW!");

	return 0;
}