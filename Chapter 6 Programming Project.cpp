// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>

double getCelsius(double farenheit);
double farenheit, celsius;
int main()
{
	cout << setprecision(1) << fixed << showpoint;
	cout << "\tFarenheit" << setw(10) << "\tCelsius" << endl;
	cout << "-----------------------------------" << endl;

	for (double farenheit = 0; farenheit <= 20; farenheit++) 
	{
		getCelsius(farenheit);
		cout << right << setw(15) << farenheit << setw(15) << celsius << endl;
	}
	return 0;
}
double getCelsius(double farenheit)
{
	celsius = (farenheit - 32) * 5 / 9;
	return celsius;
}