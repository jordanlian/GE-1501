// This program computes the average weight per atom in an amino acid (g/mol) with atoms of Hydrogen, Carbon, Nitrogen, Oxygen, Sulfur
	
//library files
#include <cmath>
#include <iostream>
#include <iomanip> //set precision to 3 decimal places
using namespace std; //cin cout

#define H 1.00794
#define C 12.011
#define N 14.00674
#define O 15.9994
#define S 32.066

int main(void)
{
	//declare local variables
	int h; //atoms of hydrogen
	int c; //atoms of carbon
	int n; //atoms of nitrogen
	int o; //atoms of oxygen
	int s; //atoms of sulfur
	double AW; //average weight per atom (g/mol)
	
	//1. User inputs
	cout << "Please enter the number of atoms of each of the five elements (Hydrogen, Carbon, Nitrogen, Oxygen, Sulfur) for an amino acid below. ";
	
	cout << "\n\nHow many hydrogen atoms? ";
	cin >> h;
	
	cout << "How many carbon atoms? ";
	cin >> c; 
	
	cout << "How many nitrogen atoms? ";
	cin >> n; 
	
	cout << "How many oxygen atoms? ";
	cin >> o; 
	
	cout << "How many sulfur atoms? ";
	cin >> s; //user inputs
	
	//2. Define the average weight
	AW = (h*H + c*C + n*N + o*O + s*S) / (h + c + n + o + s); //average weight
	
	//3. Output
	cout << setprecision(3) << fixed ; //set 3 decimal places
	cout << "\nThe average weight per atom = " << AW << " g/mol\n";
	
	system("pause");  //hold dos window in DEV
    return 0;
    
} //end of main

