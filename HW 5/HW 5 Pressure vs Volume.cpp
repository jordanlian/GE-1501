/* This program will calculate the pressure of carbon dioxide given the volumes input into the program
We will use the Van der Waals equation to calculate this
There will be a table that illustrates the relationship between pressure, volume, and temperature
The table values will be based on the volume increment */

//libraries

#include <iostream>
#include <fstream>
using namespace std; 

//define constants

#define R 0.08206 // units of (L * atm) / (mol * K)
#define a 3.592 // units of L^2 * atm / mol^2 for carbon dioxide
#define b 0.0427 // units L / mol for carbon dioxide

//declare variables

double n;
double T;
double V0;
double V1;
double VI;
double P;

int main (void)

{
	//outfiles to store output data
	ofstream outfile; 
	outfile.open("volume_pressure.txt");

	//enter inputs
	
	cout << "Please enter the amount of carbon dioxide in moles (mol) --> ";
	cin >> n;
	
	cout << "Please enter the temperature in Kelvin (K) --> ";
	cin >> T;
	
	cout << "Please enter the initial volume in milliliters (mL) --> ";
	cin >> V0;
	
	cout << "Please enter the final volume in milliliters (mL) --> ";
	cin >> V1;
	
	cout << "Please enter the volume increment in milliliters (mL) --> ";
	cin >> VI;
	
	//show values entered in the program (basically a repeat and confirmation)
	
cout << "\nQuantity of carbon dioxide (moles) > " << n;
	outfile << "Quantity of carbon dioxide (moles) > " << n;
	
	cout << "\nTemperature (K) > " << T;	
	outfile << "\nTemperature (K) > " << T;
	
	cout << "\nInitial Volume (milliliters) > " << V0;	
	outfile << "\nInitial Volume (milliliters) > " << V0;
	
	cout << "\nFinal Volume (milliliters) > " << V1;
	outfile << "\nFinal Volume (milliliters) > " << V1;
	
	cout << "\nVolume Increment (milliliters) > " << VI << "\n";				
	outfile << "\nVolume Increment (milliliters) > " << VI << "\n";			
	
	cout << "\n" << n << " moles of carbon dioxide at " << T << " Kelvin\n\n";
	outfile << "\n" << n << " moles of carbon dioxide at " << T << " Kelvin\n\n";
	
	cout << "Volume (mL) \t Pressure (atm)\n\n"; //organizing the tables
	outfile << "Volume (mL) \t Pressure (atm)\n\n";
	
	for (double x = V0; x <= V1; x += VI) //use to keep adding the increment amount to the original volume until the sum is equal to the final volume
	
	{
		P = n*R*T / (x/1000 - b*n) - (a * n * n  / (x*x/1000/1000)); //solving for pressure here
		cout << x << " \t\t" << P << "\n"; //volume to the left, pressure to the right
		outfile << x << " \t\t" << P << "\n";
	}
	
system ("pause");
return 0;	

	}	
