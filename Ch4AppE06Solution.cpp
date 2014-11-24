#include <iostream>
using namespace std;

int main()
{
	double length;
	double width;
	double depth;
	cout << "What is the length: ";
	cin >> length;
	cout << "What is the width: ";
	cin >> width;
	cout << "What is the depth: ";
	cin >> depth;
	double volume = length*width*depth;
	cout << volume << endl;
}
