#include <iostream>
using namespace std;

int main()
{
	double charge;
	int dollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickles = 0;
	int pennies = 0;
	cout << "How much money do you have? ";
	cin >> charge;
	charge *= 100;
	while(charge > 0)
	{
		if(charge>=100)
		{
			charge -= 100;
			dollars += 1;
		}
		if(charge>=25)
		{
			charge -= 25;
			quarters += 1;
		}
		if(charge>=10)
		{
			charge -= 10;
			dimes += 1;
		}
		if(charge>=5)
		{
			charge -= 5;
			nickles += 1;
		}
		if(charge>=1)
		{
			charge -= 1;
			pennies += 1;
		}
	}
	cout << "You need:" << endl << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickles: " << nickles << endl;
	cout << "Pennies: " << pennies << endl;
} 		
