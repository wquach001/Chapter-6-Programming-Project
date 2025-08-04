// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Define and initialize global variables
int width = 0, perimeter = 0, area = 0, length = 0;

//Function prototypes
void getLength_Width(int &length, int &width);
int calcPerimeter(int, int);
int calcArea(int, int);
void displayProperties();

int main()
{
	getLength_Width(length, width);
	perimeter = calcPerimeter(length, width);
	area = calcArea(length, width);
	displayProperties();
	return 0;
}
void getLength_Width(int &length, int &width)
{
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	if (length <= 0 || width <= 0)
	{
		cout << "Length and width must be greater than 0." << endl;
	}
}
int calcPerimeter(int length, int width)
{
	return 2 * (length + width);
}
int calcArea(int length, int width)
{
	return length * width;
}
void displayProperties()
{
	cout << "The area of the rectangle is: " << area << endl;
	cout << "The perimeter of the rectangle is: " << perimeter << endl;
}
cout << "hi\n";
