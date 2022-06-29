#include <iostream>

using namespace std;

int main()
{
    int begin = 1, val;
    cout << "1 - Celsius, 2 - Kelvin, 3 - Fahrenheit" << endl; 
    cin >> begin;
    cout << "Degrees - ";
    cin >> val;
    switch (begin) {
    case 1:
        cout << "Celsius - " << val << " C" << endl;
        break;

    case 2:
        cout << "Kelvin - " << val + 273.15 << " K" << endl;
        break;

    case 3:
        cout << "Fahrenheit - " << (val * 9 / 5) + 32 << " F" << endl;
        break;

    default:
        cout << "error" << endl;
        break;
    }
    return 0;
}