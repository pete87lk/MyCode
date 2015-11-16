//Lesson 57 - adt.cpp

#include <iostream>
using namespace std;

class Shape
{
	virtual int getArea() = 0;
	virtual int getEdge() = 0;
	virtual void Draw() = 0;
};

class Rect : public Shape
{
	private:
		int height, width;

	public:
		Rect(int initWidth, int initHeight)
		{
			height = initHeight;
			width = initWidth;
		}
	public:
		~Rect();

		int getArea()
		{
			return height * width;
		}
	public:
		int getEdge()
		{
			return (2 * height) + (2 * width);
		}
	public:
		void Draw()
		{
			for(int i = 0; i < height; i++)
			{
				for(int j = 0; j < width; j++)
				{
					cout<< "x ";
				}
				cout<< endl;
			}
		}
};

int main()
{
	Rect* pQuad = new Rect(3, 7);
	Rect* pSquare = new Rect(5, 5);

	pQuad -> Draw();
	cout<< "Area is " << pQuad -> getArea() <<endl;
	cout<< "Perimeter is " << pQuad -> getEdge() <<endl;

	pSquare -> Draw();
	cout<< "Area is " << pSquare -> getArea() <<endl;
	cout<< "Perimeter is " << pSquare -> getEdge() <<endl;

	return 0;
}