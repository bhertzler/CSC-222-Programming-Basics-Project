// CSC 222 Programming Basics Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Ben Hertzler
// Programming Basics Project
// Project 2: Energy Drink Consumption

// Required User Input: None.
// Program Output: Converts survey results from percentages into numbers of participants.
// Supplied Constants: Total survey participants (16,500), weekly buyers (15%), buyers who prefer citrus flavor (58%)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables
	double customer_num, citrus_flavor_num;

	// Constants
	const int SAMPLE_SIZE = 16500;
	const double CUSTOMER_RATIO = 0.15, CITRUS_FLAVOR_RATIO = 0.58;

	customer_num = CUSTOMER_RATIO * SAMPLE_SIZE;
	citrus_flavor_num = customer_num * CITRUS_FLAVOR_RATIO;

	cout << "Energy Drink Survey Results: " << endl << fixed << setprecision(0);
	cout << "Number of customers who purchase at least one drink per week: " << customer_num << endl;
	cout << "Number of customers who prefer citrus flavored drinks: " << citrus_flavor_num << endl;

	return 0;
}
