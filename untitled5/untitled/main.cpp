#include <iostream>

using namespace std;

int main()
{
    int dollar = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;

    double due = 0.0;
    cout << "How much is due ";
    cin >> due;
    double give = 0.0;
    cout << "how much do give ";
    cin >> give;
    double back = give - due;
    cout << back <<endl;

    while (back >.01) {
    if (back > .99
            ) {
        dollar = dollar + 1;
        back = back - 1;
              }
    else if (back > .24) {
        quarter = quarter + 1;
        back = back - .25;
    }
    else if (back > .09) {
        dime = dime + 1;
        back = back - .10;
    }
    else if (back > .04) {
        nickel = nickel + 1
                ;
        back = back - .05;
    }
    else if (back > .01) {
        penny = penny + 1;
        back = back - .01;
    }
    };

    cout << dollar << quarter << dime << nickel << penny;
    return 0;


}

