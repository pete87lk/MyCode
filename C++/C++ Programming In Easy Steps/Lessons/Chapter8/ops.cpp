//Lesson 59 - ops.cpp

//reference header file
#include "ops.h"
#include <iostream>
using namespace std;

Calculator::Calculator()
{
	//initialize status
	status = true;
}

void Calculator::launch()
{
	//display instructions
	cout<< endl <<"**** SUM CALCULATOR ****" <<endl;
	cout<< "Enter a number, an operator (+, - , *, /), and another number." <<endl << "Hit Return to calculate. Enter zero to exit." <<endl;
}

//get expression
void Calculator::readInput()
{
	cout<< "> ";
	//get 1st number
	cin >> num1;
	//exit if it's zero
	if(num1 == 0)
	{
		status = false;
	}
	//or get the rest
	else
	{
		cin>> oper;
		cin>> num2;
	}
}

//display result
void Calculator::writeOutput()
{
	if(status) switch(oper)
	{
		case '+' : {cout << (num1 + num2) <<endl; break;}
		case '-' : {cout << (num1 - num2) <<endl; break;}
		case '*' : {cout << (num1 * num2) <<endl; break;}
		case '/' : if(num2 != 0)
					{
						cout<< (num1 / num2) <<endl;
					}
					else cout << "Cannot divide by zero" <<endl;
	}
}

//get the current status
bool Calculator::run()
{
	return status;
}