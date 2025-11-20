#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) return -1; 
    int result = 1;
    for (int i = 2; i <= n; ++i) result *= i;
    return result;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    int f = factorial(n);
    if (f == -1) cout << "Invalid input\n"; else cout << "Factorial of " << n << " = " << f << '\n';
    return 0;
}
