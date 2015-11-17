//Lesson 59 - ops.h

class Calculator
{
	public:
		//(constructor) to set initial status
		Calculator();
		//to display initial instructions
		void launch();
		//to get expression
		void readInput();
		//do display result
		void writeOutput();
		//(accessor) to get current status
		bool run();

	private:
		//to store input numbers
		double num1, num2;
		//to store input operator
		char oper;
		//to store current status
		bool status;
};