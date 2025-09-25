#include <iostream>
#include <limits>
using namespace std;

void calculateInt(int a, int b) {
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    if (b != 0)
        cout << "Division: " << (a / b) << endl;

    
    if ((a > 0 && b > 0 && a > (numeric_limits<int>::max() - b)) ||
        (a < 0 && b < 0 && a < (numeric_limits<int>::min() - b))) {
        cout << "Warning: Integer overflow detected!" << endl;
    }
}

void calculateFloat(float a, float b) {
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    if (b != 0.0f)
        cout << "Division: " << (a / b) << endl;

    if ((a + b) > numeric_limits<float>::max())
        cout << "Warning: Float overflow detected!" << endl;
    if ((a + b) < -numeric_limits<float>::max())
        cout << "Warning: Float underflow detected!" << endl;
}

void calculateDouble(double a, double b) {
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    if (b != 0.0)
        cout << "Division: " << (a / b) << endl;
}

int main() {
    cout << "For int:\n";
    calculateInt(2000000000, 2000000000);

    cout << "\nFor float:\n";
    calculateFloat(1e20f, 1e20f);

    cout << "\nFor double:\n";
    calculateDouble(5.5, 2.2);

    return 0;
}
