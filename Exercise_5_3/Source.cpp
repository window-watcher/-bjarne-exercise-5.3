/*
	Project: Exercise 5.3
	By: Adrian Rodriguez
	Date: 8/12/20
	Objective: Have the caller of ctok() check if user input is legal
	Version 1.0

	Change log
	version 1.0 :

*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

const double CELSIUS_TO_KELVIN = 273.15;

double ctok(double c)//converts Celsius to Kelvin
{
	double k = c + CELSIUS_TO_KELVIN;
	return k;
}


int main()
{

	double c = 0; // declare input variable
	cin >> c;	  // retrieve temperature to input variable

	if (c <= CELSIUS_TO_KELVIN) { // Caller handles this error
		double k = ctok(c);	//convert temperature
		cout << k << endl;		//print out temperature
	}
	else {
		cerr << "Error: Temperature below absolute zero" << endl;
	}

	keep_window_open();//wait for a character to be enter
	return 0;
}


