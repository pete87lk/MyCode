//Lesson 30 - write.cpp

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string poem = "\n\tI never saw a man who looked";
	poem.append("\n\tWith such a wistful eye");
	poem.append("\n\tUpon that little tent of blue");
	poem.append("\n\tWhich prisoners call the sky");

	//create an output filestream object
	ofstream writer("poem.txt");

	if(!writer)
	{
		cout<< "Error opening file for output" <<endl;
		//signal an error then exit the program
		return -1;
	}
	//write ouput
	writer << poem <<endl;
	//close filestream
	writer.close();

	return 0;
}
