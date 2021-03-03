/* This program tests three functions to see if a square timber column can be designed. The constraints of those functions must be met. The user will enter a load that must be exceeded (in those functions) and a length will be applied in the three functions. The recommended width will determined based on the results. */
//library files
#include <iostream>
#include <cmath>
#include <fstream> //for outfile 

using namespace std; 

//constants
#define E 1700000 // modulus of elasticity (lb/in^2)
#define max_com_str 445 //maximum comopressive strength for a Douglas Fir tree (lb/in^2)

//repeat of all function prototypes ending with a semicolon!
	double buck_load (double max_load_BL, double column_length, double i); //buckling load
	double comp_stress (double max_load_CS, double i); //compressive stress
	double slend_limit (double SL, double column_length, double i); // slenderness limit
	
int main (void)

{
	//declare variables
	double column_load;
	double column_length;
	double max_load_BL;
	double max_load_CS;
	double SL;

	ofstream outfile;
	outfile.open("structure_test.txt");
	
	cout << "Please enter the expected load on the column in pounds --> ";
	cin >> column_load;
	
	cout << "\nPlease enter the length of the column in inches --> ";
	cin >> column_length;
	
	cout << "\n";
		
	for (int i = 2; i <= column_length; i = i+2) //for loop to add 2 inches to the width to test the function outputs 	
	{
		if (buck_load(max_load_BL, column_length, i) < column_load //if any of the conditions aren't met, use "or" statements
			|| comp_stress(max_load_CS, i) < column_load 
			|| slend_limit (SL, column_length, i) >= 50) {
			cout << "Testing a beam with Area of " << i << " by " << i << " inches --> Test Failed\n";
			outfile << "Testing a beam with Area of " << i << " by " << i << " inches --> Test Failed\n";

		}
		else { //all of the conditions are met
			cout << "Testing a beam with Area of " << i << " by " << i << " inches --> Test Passed\n";
			outfile << "Testing a beam with Area of " << i << " by " << i << " inches --> Test Passed\n";
			cout << "\nFor a load of " << column_load << " pounds and a length of " << column_length << " inches, the recommended square beam has sides of " << i << " inches\n\n";
			outfile << "\nFor a load of " << column_load << " pounds and a length of " << column_length << " inches, the recommended square beam has sides of " << i << " inches\n\n";
			break;
		}		
}
	system ("pause");
	return 0;  
} //end of main

//list all subfunctions below main ...
	double buck_load (double max_load_BL, double column_length, double i) //buckling load
{
	//local variables
	max_load_BL = (0.3 * E * i * i) / pow(column_length / i, 2);
	return max_load_BL;	
} // end of subfunction buck_load

double comp_stress (double max_load_CS, double i) //compressive stress
{
	max_load_CS = i * i * max_com_str;
	return max_load_CS;
} // end of subfunction comp_stress

double slend_limit (double SL, double column_length, double i) // slenderness limit
{
	SL = column_length / i;
	return SL;
} // end of subfunction slenderness limit

