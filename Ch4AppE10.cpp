//  Ch4AppE10.cpp
// Calculates a square of a number
// Created by Matt Gilmore on 11/24/14

// 	IPO

//	Input			Processing			Output

//	cin amount due	chang = payed - due	coins and amount
//	and amount payed	for change type		and change
//					coin = change // type
//					chang - coin * amount	

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

	
	int main()
	{
		double due = 0;
		double pay = 0;
		double change = 0;
		double change1 = 0;
		int dollar = 0;
		int quarter = 0;
		int dime = 0;
		int nickle = 0;
		int penny = 0;
		
	
		cout << "How much cash is due?: ";
		cin >> due;
		
		cout << "How much cash was paid?: ";
		cin >> pay;
		
		change = pay - due;
		change1 = change;
		dollar = change / 1;
		change -= dollar;
		
		quarter = change / .25;
		change -= quarter * .25;
		
		dime = change / .10;
		change -= dime * .10;
		
		nickle = change / .05;
		change -= nickle * .05;
		
		penny = change * 100;
		change -= penny * .01;
		
		cout << endl;
		cout << "with a toal of $" << due << " your change out of $" << pay << " is"; 
		cout << endl << "$" << change1 << endl;
		
		cout << endl;
		cout << dollar << ": dollar(s)" << endl;
		cout << quarter << ": quarter(s)" << endl;
		cout << dime << ": dime(s)" << endl;
		cout << nickle << ": nickle(s)" << endl;
		cout << penny << ": pennie(s)" << endl;



	return 0;
	}

