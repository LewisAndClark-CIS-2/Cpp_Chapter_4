#include <iostream>
using namespace std;
int main()
{
	double cost = 0.0;
	double paid = 0.0;
	double change = 0.0;
	double dollar = 1.00;
	double quarter = 0.25;
	double dime = 0.10;
	double nickel = 0.05;
	double penny = 0.01;
	double total = 0.0;
	double changeBack = 0.0;
	cout << "how much money does it cost? ";
	cin >> cost;
	cout << "how much did they pay? ";
	cin >> paid;
	total = paid - cost;
	cout << total;
	change = total;
	if (dollar  < change)
	{
		changeBack =  change / dollar;
		change = changeBack - change;
		dollar = changeBack;
		cout << change << endl;
		cout << dollar << endl;
	}
	if (quarter <= change)
	{
		changeBack = change / quarter;
		change = changeBack - change;
		quarter = changeBack;
		cout << quarter << endl;
	}
	if (dime <= change)
	{
		changeBack = change / dime;
		change = changeBack - change;
		dime = changeBack;
		cout << dime << endl;
	}
	if (nickel <= change)
	{
		changeBack = change / nickel;
		change = changeBack - change;
		nickel = changeBack;
		cout << nickel << endl;
	}
	if (penny <= change)
	{
		changeBack = change / penny;
		change = changeBack - change;
		penny = changeBack;
		cout << penny << endl;
	}
	return 0;
}

