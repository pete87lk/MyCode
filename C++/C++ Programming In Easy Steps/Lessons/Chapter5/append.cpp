//Lesson 31 - append.cpp

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string info = "\n\tThe Ballad of Reading Gaol";
	info.append("\n\t\t\tOscar Wilde 1898");

	ofstream writer("poem.txt", ios::app);

	if(!writer)
	{
		cout<< "Error opening file for output" <<endl;
		//signal an error then exit the program
		return -1;
	}
	//append ouput
	writer << info <<endl;
	//close filestream
	writer.close();

	return 0;
}