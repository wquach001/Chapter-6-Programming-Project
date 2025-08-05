// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double galpft = 1.0 / 110.0;
const double labpft = 8.0 / 110.0;
const int laborChargePerHour = 25; // Cost of labor per hour

double getSqFt();
int gallonsForRoom(int squareFeet);
double getPricePerGallon();
int getRooms();
void displayEstimate(int paintCharge, int gallonsNeeded, int laborCharge, int laborHours, int numrooms);

int main()
{
	double paintCharge = 0;
	double laborCharge = 0;
	int gallonsNeeded = 0;
	double laborHours = 0;

	int numrooms = getRooms();
	int squareFeet = getSqFt();
	int gallons = gallonsForRoom(squareFeet);
	gallonsNeeded += gallons;

	double paintPrice = getPricePerGallon();
	paintCharge += gallons * paintPrice;

	double labor = squareFeet * labpft;
	laborHours += labor;

	laborCharge = laborCharge * laborHours;
	void displayEstimate(int paintCharge, int gallonsNeeded, int laborCharge, int laborHours, int numrooms);

	return 0;
}
double getSqFt()
{
	double squareFeet = 0;
	cout << "Enter the square footage of the room: ";
	cin >> squareFeet;
	if (squareFeet < 0) {
		cout << "Invalid square footage. Please enter a positive number." << endl;
		cin >> squareFeet;
	}
	return squareFeet;
}
int gallonsForRoom(int squareFeet)
{
	double gallons = 0;
	gallons = squareFeet * galpft;
	if (gallons < 1) {
		gallons = 1; // At least one gallon is needed
	}
	return gallons;
}
double getPricePerGallon()
{
	double paintPrice = 0;
	cout << "Enter the price per gallon of paint: ";
	cin >> paintPrice;
	if (paintPrice <= 10) 
	{
		cout << "Invalid price. Please enter a price greater than $10." << endl;
		cin >> paintPrice;
	}
	return paintPrice;
}
int getRooms()
{
	int numrooms = 0;
	cout << "Enter the number of rooms to be painted: ";
	cin >> numrooms;
	if (numrooms < 1) {
		cout << "Invalid number of rooms. Please enter a positive number." << endl;
		cin >> numrooms;
	}
	return numrooms;
}
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours, int numrooms)
{
	cout << "Estimate for painting " << numrooms << " room(s):" << endl;
	cout << "Gallons of paint to purchase: " << gallonsNeeded << endl;
	cout << "Number of hours required to paint rooms: " << laborHours << endl;
	cout << "Cost of paint: $" << paintCharge << endl;
	cout << "Cost of labor: $" << laborCharge << endl;
	cout << "Total cost for job: $" << (paintCharge + laborCharge) << endl;

}

