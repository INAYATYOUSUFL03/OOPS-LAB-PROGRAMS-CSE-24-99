#include <iostream>
using namespace std;

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapReference: x = " << x << ", y = " << y << '\n';
    swapReference(x, y);
    cout << "After swapReference: x = " << x << ", y = " << y << '\n';
    return 0;
}
