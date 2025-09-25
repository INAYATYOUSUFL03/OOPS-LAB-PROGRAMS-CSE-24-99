#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Enter Celsius: ";
    cin >> c;

    double f = (c*9/5) + 32;
    double k = c + 273.15;

    cout << "Fahrenheit: " << f << endl;
    cout << "Kelvin: " << k << endl;

    return 0;
}
