#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int guests = 6, chairs = 4;
    int ways = factorial(guests) / factorial(guests - chairs);
    cout << "Number of arrangements = " << ways << endl;
    return 0;
}
