/**Chapter 5 - Practice Problem 1
Write a program that prints out the entire lyrics to a full rendition of "99 bottles of beer".
*/

#include <iostream>
using namespace std;

int main()
{
	for(int i = 99; i > 0; i--)
	{
		//one verse using the value of i to dynamically change the sentence.
		cout<< i << " bottles of beer on the wall, " << i << " bottles of beer." <<endl;
		cout<< "Take one down, pass it around, " << i << " bottles of beer on the wall..." <<endl;
		//another line-break for formatting
		cout<< endl;
	}

	//once i gets to zero, the loop is broken we get to the following statements
	cout<< "No more bottles of beer on the wall, no more bottles of beer." <<endl;
	cout<< "Go to the store and buy some more, 99 bottles of beer on the wall..." <<endl;

	return 0;
}
