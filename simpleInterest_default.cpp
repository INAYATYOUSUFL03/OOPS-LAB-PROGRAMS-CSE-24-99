#include <iostream>
using namespace std;

float simpleInterest(float p, float r = 5.0f, float t = 2.0f) {
    return (p * r * t) / 100.0f;
}

int main() {
    cout << "SI(1000) with defaults = " << simpleInterest(1000.0f) << '\n';
    cout << "SI(1000, 7) with t default = " << simpleInterest(1000.0f, 7.0f) << '\n';
    cout << "SI(1000, 7, 3) = " << simpleInterest(1000.0f, 7.0f, 3.0f) << '\n';
    return 0;
}
