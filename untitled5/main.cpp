#include <iostream>

using namespace std;

int main()
{
    double width = 0.0;
    double length = 0.0;
    double height = 0.0;


    cout << "enter the width ";
    cin >> width;

    cout << "enter the length ";
    cin >> length;

    cout << "enter the height ";
    cin >> height;

    double volume = width * length * height;

    cout << "The volume is" << volume;

    return 0;

}

