#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue: a = " << a << ", b = " << b << '\n';
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapValue: x = " << x << ", y = " << y << '\n';
    swapValue(x, y);
    cout << "After swapValue: x = " << x << ", y = " << y << " (unchanged)\n";
    return 0;
}
