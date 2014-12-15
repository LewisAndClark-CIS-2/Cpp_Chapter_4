//  Ch4AppE02.cpp
// Calculates a square of a number
// Created by Matt Gilmore on 11/19/14

// 	IPO

//	Input			Processing			Output

//	input number		num *= num			num



#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

	
	int main()
	{
		int num = 0;
		
	
		cout << "Input number to calculate: ";
		cin >> num;
		
		num *= num;
		
		cout << num << endl;
		
		return 0;
	}

