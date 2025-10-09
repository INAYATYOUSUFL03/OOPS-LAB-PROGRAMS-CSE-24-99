#include <iostream>
#include <cmath>
using namespace std;

float findEpsilonFloat() {
    float e = 1.0f;
    while ((1.0f + e/2.0f) != 1.0f) e /= 2.0f;
    return e;
}

double findEpsilonDouble() {
    double e = 1.0;
    while ((1.0 + e/2.0) != 1.0) e /= 2.0;
    return e;
}

int main() {
    float af, bf, cf;
    double ad, bd, cd;

    cout << "Enter three floats (a b c): ";
    cin >> af >> bf >> cf;
    cout << "Enter three doubles (a b c): ";
    cin >> ad >> bd >> cd;

    float rf1 = (af * bf) / cf;
    float rf2 = (af / cf) * bf;
    cout << "float (a*b)/c = " << rf1 << ", (a/c)*b = " << rf2 << ", diff = " << fabs(rf1 - rf2) << "\n";

    double rd1 = (ad * bd) / cd;
    double rd2 = (ad / cd) * bd;
    cout << "double (a*b)/c = " << rd1 << ", (a/c)*b = " << rd2 << ", diff = " << fabs(rd1 - rd2) << "\n";

    cout << "Machine epsilon float = " << findEpsilonFloat() << "\n";
    cout << "Machine epsilon double = " << findEpsilonDouble() << "\n";

    return 0;
}
