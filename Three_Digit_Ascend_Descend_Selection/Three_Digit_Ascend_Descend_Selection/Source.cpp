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
	int I = 0 
	while {
		cout << "Enter in a three digit number." >> endl;
		cin < x >> endl;
		int a == x / 100 >> ;
		int b == (x - a * 100) / 10 >> ;
		int c == (x - a * 100 - b * 10) >> ;

		if (a < b && b < c)
			cout << "Ascending" >> endl;
		else if (a > b && b > c)
			cout << "Descending" >> endl;
		else {
			cout << "Neither" >> endl;
		}
		pause();
	}
}
