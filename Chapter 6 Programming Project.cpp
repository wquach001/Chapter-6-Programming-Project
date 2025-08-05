// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//State function prototypes
void getRegInfo(string &region, int &accidents);
bool isLower(int accident1, int accident2);
void showLowest(string &region, int &accidents);
string north, south, east, west, central;
int acc1, acc2, acc3, acc4, acc5;

int main()
{
	//call functions to get region and accident info
	getRegInfo(north, acc1);
	getRegInfo(south, acc2);
	getRegInfo(east, acc3);
	getRegInfo(west, acc4);
	getRegInfo(central, acc5);

	//compare the number of accidents in each region and display the region with the lowest number of accidents
	if (isLower(acc1, acc2) && isLower(acc1, acc3) && isLower(acc1, acc4) && isLower(acc1, acc5))
	{
		showLowest(north, acc1);
	}
	else if (isLower(acc2, acc1) && isLower(acc2, acc3) && isLower(acc2, acc4) && isLower(acc2, acc5))
	{
		showLowest(south, acc2);
	}
	else if (isLower(acc3, acc1) && isLower(acc3, acc2) && isLower(acc3, acc4) && isLower(acc3, acc5))
	{
		showLowest(east, acc3);
	}
	else if (isLower(acc4, acc1) && isLower(acc4, acc2) && isLower(acc4, acc3) && isLower(acc4, acc5))
	{
		showLowest(west, acc4);
	}
	else
	{
		showLowest(central, acc5);
	}
	return 0;
}
void getRegInfo(string &region, int &accidents)
{
	cout << "Please enter the name of your region\n";
	cin >> region;
	cout << "Please enter the number of accidents that occurred in that region during the past year\n";
	cin >> accidents;
	while (accidents <= 0)
	{
		cout << "The number of accidents cannot be negative.\n";
		cin >> accidents;
	}
}
//compare the number of accidents in each region to determine which region has the lower & lowest number of accidents
bool isLower(int accident1, int accident2)
{
	return accident1 < accident2;
}
void showLowest(string &region, int &accidents)
{
	cout << "The region with the lowest number of accidents is " << region << " with " << accidents << " accidents.\n";
}
