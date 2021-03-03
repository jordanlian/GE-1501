//This program "rolls the dice" twice, takes the sum of the two numbers generated, and records the percent of sums of 2-12 amongst the total number of rolls

//declare library files

#include <iostream> //input output
#include <cstdlib> //cstandard library - srand() rand()
#include <ctime>
#include <fstream>

using namespace std; //cin cout

int main(void)

{

//declare variables
	int n_rolls; //user input for number of rolls
	int i, roll_1, roll_2, sum, r1, r2;
	int n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0, n10 = 0, n11 = 0, n12 = 0;
	double perc_2s, perc_3s, perc_4s, perc_5s, perc_6s, perc_7s, perc_8s, perc_9s, perc_10s, perc_11s, perc_12s;
	
	ofstream outfile;
	outfile.open("roll_dice.txt");

	//set the seed value
	srand(time(NULL)); 
	
	cout << "Please enter the lower bound of the range for each roll (1 please because we're dealing with dice) --> ";
	cin >> r1;
	
	cout << "Please enter the upper bound of the range for each roll (6 please because we're dealing with dice) --> ";
	cin >> r2;
	
	cout << "Please enter the number of rolls --> "; 
	cin >> n_rolls; //get user input
	
		//for loop for number of tosses
	for(i=0 ; i < n_rolls; i++)
	{
		roll_1 = rand() %r2 + r1; //do mod 6 + 1 for the dice program
		roll_2 = rand() %r2 + r1; 
		sum = roll_1 + roll_2;
		
		cout << "\nthe number is " << roll_1; //output toss value
		outfile << "\nthe number is " << roll_1;
		cout << "\nthe number is " << roll_2; 
		outfile << "\nthe number is " << roll_2;
		cout << "\nthe sum of the two numbers is " << sum;
		outfile << "\nthe sum of the two numbers is " << sum;
		cout << "\n---------------";
		outfile << "\n---------------"; 
	
	switch (sum)
		{
			case 2:
				n2++;
				break;
			case 3:
				n3++;
				break;
			case 4:
				n4++;
				break;
			case 5:
				n5++;
				break;
			case 6:
				n6++;
				break;
			case 7:
				n7++;
				break;
			case 8:
				n8++;
				break;
			case 9:
				n9++;
				break;
			case 10:
				n10++;
				break;
			case 11:
				n11++;
				break;
			case 12:
				n12++;
				break;
		} // close switch
	
	} //end for loop

	perc_2s = (double) 1.0 * n2 / n_rolls * 100; //cast for integer division
	perc_3s = (double) 1.0 * n3 / n_rolls * 100; 
	perc_4s = (double) 1.0 * n4 / n_rolls * 100;
	perc_5s = (double) 1.0 * n5 / n_rolls * 100;
	perc_6s = (double) 1.0 * n6 / n_rolls * 100;
	perc_7s = (double) 1.0 * n7 / n_rolls * 100;
	perc_8s = (double) 1.0 * n8 / n_rolls * 100;
	perc_9s = (double) 1.0 * n9 / n_rolls * 100;
	perc_10s = (double) 1.0 * n10 / n_rolls * 100;
	perc_11s = (double) 1.0 * n11 / n_rolls * 100;
	perc_12s = (double) 1.0 * n12 / n_rolls * 100;
	
	
	cout << "\n\nPercent of 2s = " << perc_2s << "%";
	outfile << "\n\nPercent of 2s = " << perc_2s << "%";
	cout << "\nPercent of 3s = " << perc_3s << "%";
	outfile << "\nPercent of 3s = " << perc_3s << "%";
	cout << "\nPercent of 4s = " << perc_4s << "%";
	outfile << "\nPercent of 4s = " << perc_4s << "%";
	cout << "\nPercent of 5s = " << perc_5s << "%";
	outfile << "\nPercent of 5s = " << perc_5s << "%";
	cout << "\nPercent of 6s = " << perc_6s << "%";
	outfile << "\nPercent of 6s = " << perc_6s << "%";
	cout << "\nPercent of 7s = " << perc_7s << "%";
	outfile << "\nPercent of 7s = " << perc_7s << "%";
	cout << "\nPercent of 8s = " << perc_8s << "%";
	outfile << "\nPercent of 8s = " << perc_8s << "%";
	cout << "\nPercent of 9s = " << perc_9s << "%";
	outfile << "\nPercent of 9s = " << perc_9s << "%";
	cout << "\nPercent of 10s = " << perc_10s << "%";
	outfile << "\nPercent of 10s = " << perc_10s << "%";
	cout << "\nPercent of 11s = " << perc_11s << "%";
	outfile << "\nPercent of 11s = " << perc_11s << "%";
	cout << "\nPercent of 12s = " << perc_12s << "%\n\n";
	outfile << "\nPercent of 12s = " << perc_12s << "%\n\n";
	
system ("pause"); //for dev only to hold dos window
	return 0;  //assign value zero to main
}  //end of main

