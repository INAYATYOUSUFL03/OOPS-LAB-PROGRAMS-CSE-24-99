#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Enter temperature in Celsius (as float): ";
    float cf; cin >> cf;
    float ff = (cf * 9.0f / 5.0f) + 32.0f;
    float kf = cf + 273.15f;

    cout << fixed << setprecision(7);
    cout << "Using float: Fahrenheit = " << ff << ", Kelvin = " << kf << "\n";

    cout << "Enter temperature in Celsius (as double): ";
    double cd; cin >> cd;
    double fd = (cd * 9.0 / 5.0) + 32.0;
    double kd = cd + 273.15;

    cout << setprecision(12);
    cout << "Using double: Fahrenheit = " << fd << ", Kelvin = " << kd << "\n";

    cout << "\nComparison (float -> double difference): " << (double)ff - fd << "\n";
    return 0;
}
