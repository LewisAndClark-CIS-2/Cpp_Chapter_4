#include <iostream>

using namespace std;

int main ( )
{
    float userNUmber;
    float owe;

    int change, amount, quarters, dimes, nickels, pennies; // declare variables
    cout <<"Enter the amount of money: ";
    cin >> userNUmber; // input the amount of change
    cout << "Enter how much you owe: ";
    cin >> owe;


    change = (userNUmber - owe) * 100;
    quarters = change / 25; // calculate the number of quarters
    change = change % 25; // calculate remaining change needed
    dimes = change / 10; // calculate the number of dimes
    change = change % 10; // calculate remaining change needed
    nickels = change / 5; // calculate the number of nickels
    pennies = change % 5; // calculate pennies

    cout << "\nQuarters: " << quarters << endl; // display # of quarters
    cout << " Dimes: " << dimes << endl; // display # of dimes
    cout << " Nickels: " << nickels << endl; // display # of nickels
    cout <<" Pennies: " << pennies << endl; // display # of pennies
    return (0);
}
