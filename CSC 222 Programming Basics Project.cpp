// CSC 222 Programming Basics Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Ben Hertzler
// Programming Basics Project
// Project 1: Distance Per Tank of Gas

// Required User Input: None.
// Program Output: Calculates the total distance a car can travel on one tank of gas.
// Supplied Constants: Size of gas tank (20 gal.), urban fuel efficiency (23.5 mpg), highway fuel efficiency (28.9 mpg)

#include <iostream>
using namespace std;


int main()
{
    // Variables
    double town_range, highway_range;

    // Constants
    const double TANK_GAL = 20, TOWN_MPG = 23.5, HIGHWAY_MPG = 28.9;

    town_range = TANK_GAL * TOWN_MPG;
    highway_range = TANK_GAL * HIGHWAY_MPG;

    cout << "Maximum driving distance for a " << TANK_GAL << " gallon tank of gas:" << endl;
    cout << "In Town: " << town_range << " miles." << endl;
    cout << "On the Highway: " << highway_range << " miles." << endl;

    return 0;
}
