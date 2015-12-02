/**Chapter 5 - Practice Problem 6
Write a program that displays the first 20 square numbers.
*/

#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 20; i++)
	{
		cout<< i << " squared is " << i*i <<endl;
	}

	return 0;
}