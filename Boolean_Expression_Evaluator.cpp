#include <iostream>
using namespace std;

int main() {
    bool A, B, C;
    cout << "Enter three boolean values (0/1): ";
    cin >> A >> B >> C;

    cout << "A AND B = " << (A && B) << endl;
    cout << "A OR C  = " << (A || C) << endl;
    cout << "NOT A   = " << (!A) << endl;
    cout << "B XOR C = " << (B ^ C) << endl;

    return 0;
}
