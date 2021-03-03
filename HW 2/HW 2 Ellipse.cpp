/* This program computes the area A of an ellipse with semiaxes a and b
User will input values a and b in meters */
	
//library files
#include <cmath>
#include <iostream>
#include <iomanip> //set precision to 3 decimal places
using namespace std; //cin cout

#define PI 3.1415

int main(void)
{
	//declare local variables
	double a; //semiaxis a
	double b; //semiaxis b
	double A; //area
	
	//1. User inputs
	cout <<"Please enter values for the semiaxes a and b (m) of an ellipse to compute the area A (m^2) --> ";
	cin >> a >> b; //user inputs
	
	//2. Calculate Area
	A = PI * a * b; //area of an ellipse
	
	//3. Output
	cout << setprecision(3) << fixed ; //set 3 decimal places
	cout << "\nThe value of a is " << a;
	cout << "\nThe value of b is " << b;
	cout << "\nThe calculated area = " << A << " m^2\n";
	
	
	system("pause");  //hold dos window in DEV
    return 0;
    
} //end of main
