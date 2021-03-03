//This program will read in a set of grades from a file called "grade.txt"
//This program will report the total number of letter grades (A, B, C, D, F) in the file
//This program will use logic and the switch statement
//libraries
#include <iostream> //almost always include iostream
#include <fstream> //need ifstream and ofstream to set up file pointer permission (o = output, i = input)
#include <string> //c_str used with .open() and allows for user input of a file name
using namespace std;
int main(void)
{
	//declare variables
	char grade; //grade character
	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0; // initialization of variables
	string filename = "grade.txt"; //input filename
	
	//set up file pointers and permission to read or write
	ofstream outfile; //outfile is a variable - permission to write
	ifstream infile; //infile is a variable - permission to read
	
	//set value of file pointer to file names using .open()
	outfile.open("sum_of_grades.txt"); //write output to this file)
	infile.open(filename.c_str()); //use function c_str so that .open() can see the value of file_name
	
	while (infile >> grade) { //use a while loop get the number of each letter grades
		switch (grade)
		{ //set up switch to test input
			case 'A': //set up case to test if true
			A++;
			break; //end switch test since true
			case 'B': //set up case to test if true
			B++;
			break; //end switch test since true
			case 'C': //set up case to test if true
			C++;
			break; //end switch test since true
			case 'D': //set up case to test if true
			D++;
			break; //end switch test since true
			case 'F': //set up case to test if true
			F++;
			break; //end switch test since true
		}
	}
	
	// output
	cout << "There are " << A << " As\n";
	cout << "There are " << B << " Bs\n";
	cout << "There are " << C << " Cs\n";
	cout << "There are " << D << " Ds\n";
	cout << "There are " << F << " Fs\n\n";
	system("pause");
	return 0;
}

