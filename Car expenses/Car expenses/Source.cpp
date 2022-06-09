/* CSIT 121 - Pat Davidson

This program will read in the expenses of owning a car.
It will then print out the total cost.
The input will come from the keyboard and the output will go to
the screen.

All end user input variables should be monthly costs of desired variables unless specified.

Program Written By: Oliver Kirsch
*/

#include <iostream>		//Streams
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

	double CLoan, oil, tires, insurance, gas, maintenance, monthly, yearly;		//Variables for user input
	cout << setprecision(2) << fixed << showpoint;		//Stops decimals after 2 places

	cout << "Please enter the monthly cost of the car loan." << endl;	//Tells user what to do
	cin >> CLoan;	//Saves input number

	cout << "Please enter the monthly cost of oil." << endl;	//Tells user what to do
	cin >> oil;		//Saves input number

	cout << "Please enter the monthly cost of tire upkeep." << endl;	//Tells user what to do
	cin >> tires;	//Saves input number

	cout << "Please enter the monthly cost of insurance." << endl;		//Tells user what to do
	cin >> insurance;	//Saves inut number

	cout << "Please enter the monthly cost of gas." << endl;	//Tells user what to do
	cin >> gas;		//Saves input number

	cout << "Please enter the monthly cost of misc. maintenance ." << endl;		//Tells user what to do
	cin >> maintenance;		//Saves input number

	monthly = CLoan + oil + tires + insurance + gas + maintenance;		//Adds all costs together for total monthly cost
	yearly = monthly * 12;		//Calculates yearly cost
	
	cout << right << setw(7) << CLoan <<	//Displays CLoan 7 spaces right
		right << setw(10) << oil <<		//Displays oil 10 spaces right
		left << setw(9) << "" << tires << endl;		//Displays tires 9 spaces left

	cout << setfill('$') << right << setw(7) << insurance <<	//Displays insurance 7 spaces right
		setfill('$') << right << setw(10) << gas <<		//Displays gas 10 spaces right
		setfill('$') << left << setw(9) << "" <<  maintenance << endl;		//Displays maintenance 9 spaces left

	cout << "Monthly cost $" << monthly << endl;		//Displays monthly cost
	cout << "Yearly cost $" << yearly << endl;		//Displays yearly cost

	system("pause");
	
	return 0; 

}