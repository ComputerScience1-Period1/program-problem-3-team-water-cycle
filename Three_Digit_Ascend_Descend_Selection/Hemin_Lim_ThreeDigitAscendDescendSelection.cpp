/*
Angelina Biswas, Hemin Lim, Brooke Vaughan - 10/4/2017 Period 1
Three Digit Ascend Descend Selection
Assign ascending or descending to a three digit number
*/

// Libraries
#include <iostream> 
#include <conio.h>
#include <math.h>

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// Variables
int x;
int a;
int b;
int c;

// MAIN
void main() {
	cout << "Enter in a three digit number to see if the number is ascending, descending, or neither. \n";
	cin >> x ;
	a = x / 100 ;
	b = (x - a * 100) / 10 ;
	c = (x - a * 100 - b * 10)  ;

	if (a < b && b < c) {
		cout << "Ascending \n";
	}
	else if (a > b && b > c) {
		cout << "Descending \n";
	}
		else {
			cout << "Neither \n";
	}
	pause();
}

