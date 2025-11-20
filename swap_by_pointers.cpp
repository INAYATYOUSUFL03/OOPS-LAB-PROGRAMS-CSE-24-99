#include <iostream>
using namespace std;

void swapPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 9;
    cout << "Before swapPointers: x = " << x << ", y = " << y << '\n';
    swapPointers(&x, &y);
    cout << "After swapPointers: x = " << x << ", y = " << y << '\n';
    return 0;
}
