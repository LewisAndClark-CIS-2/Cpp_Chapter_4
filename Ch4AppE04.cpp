//  Ch4AppE06.cpp
// Calculates the volume of the pool
// Created by Matt Gilmore on 11/20/14

// 	IPO

//	Input			Processing			Output

//	doubles of width,	width * length * height	print total
// 	length, and height



#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;

	
	int main()
	{
		double depth = 4;
		double width = 30.5;
		double length = 100;
		double volume = 0;
	
		cout << "Calculating the volume of a pool: " <<  endl;
		cout << "Width: " << width <<  endl;
		cout << "Length: " << length <<  endl;
		cout << "Depth: " << depth <<  endl;
		
		volume = width * length * depth;
		
		cout << "Volume: " << volume <<  endl;
		
		return 0;
	}

