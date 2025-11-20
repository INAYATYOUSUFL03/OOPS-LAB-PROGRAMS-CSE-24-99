#include <iostream>
using namespace std;

class Temperature {
    double celsius;
public:
    Temperature(double c = 0.0) : celsius(c) {}
    double toFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32.0;
    }
    void display() const {
        cout << "Celsius: " << celsius << ", Fahrenheit: " << toFahrenheit() << '\n';
    }
};

int main() {
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    Temperature t(c);
    t.display();
    return 0;
}
