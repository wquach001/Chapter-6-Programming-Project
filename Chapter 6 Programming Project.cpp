// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double galpft = 1.0 / 110.0;
const double labpft = 8.0 / 110.0;
const double laborChargePerHour = 25.0; // Cost of labor per hour

double getSqFt();
int gallonsForRoom(double squareFeet);
double getPricePerGallon();
int getRooms();
void displayEstimate(double paintCharge, int gallonsNeeded, double laborCharge, double laborHours, int numrooms);

int main()
{
	double paintCharge = 0;
	double laborCharge = 0;
	int gallons = 0;
	int gallonsNeeded = 0;
	double laborHours = 0;
	double squareFeet = 0.0;
	double totalSquareFeet = 0.0;

	int numrooms = getRooms();
	for (int i=0; i < numrooms; i++) {
		cout << "Sq Feet Room " << (i + 1) << ":" << endl;
		squareFeet = getSqFt();
		totalSquareFeet += squareFeet;
	}

	gallonsNeeded = gallonsForRoom(totalSquareFeet);
	double paintPrice = getPricePerGallon();
	paintCharge += gallonsNeeded * paintPrice;

	 laborHours = totalSquareFeet * labpft;

	laborCharge = laborChargePerHour * laborHours;
	displayEstimate (paintCharge, gallonsNeeded, laborCharge, laborHours, numrooms);

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
#include <cmath> // For std::ceil
// Function to calculate the number of gallons needed for a room based on its square footage
int gallonsForRoom (double squareFeet)
{
	int galNeeded = 0;
	galNeeded = (int) std::ceil(squareFeet * galpft);
	if (galNeeded < 1) {
		galNeeded = 1; // At least one gallon is needed
	}
	return galNeeded;
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
	int numRooms = (int) 0;
	cout << "Enter the number of rooms to be painted: ";
	cin >> numRooms;
	if (numRooms < 1) {
		cout << "Invalid number of rooms. Please enter a positive number." << endl;
		cin >> numRooms;
	}
	return numRooms;
}
void displayEstimate (double paintCharge, int gallonsNeeded, double laborCharge, double laborHours, int numrooms)
{
	cout << "Estimate for painting " << numrooms << " room(s):" << endl;
	cout << "Gallons of paint to purchase: " << gallonsNeeded << endl;
	cout << "Number of hours required to paint rooms: " << laborHours << endl;
	cout << "Cost of paint: $" << paintCharge << endl;
	cout << "Cost of labor: $" << laborCharge << endl;
	cout << "Total cost for job: $" << (paintCharge + laborCharge) << endl;

}

