#include <iostream>
using namespace std;

int main() {
    cout << "Enter A B C either 0/1 or true/false (0 or 1 recommended): ";
    int Ai, Bi, Ci;
    cin >> Ai >> Bi >> Ci;
    bool A = (Ai != 0), B = (Bi != 0), C = (Ci != 0);

    cout << "A AND B = " << (A && B) << "\n";
    cout << "A OR C = " << (A || C) << "\n";
    cout << "A XOR B = " << (A ^ B) << "\n";
    cout << "NOT A = " << (!A) << "\n";

    cout << "\nTruth table for 3 variables (A B C):\n";
    cout << "A B C | A&&B A||B !(A) A^B\n";
    for (int a = 0; a <= 1; ++a)
    for (int b = 0; b <= 1; ++b)
    for (int c = 0; c <= 1; ++c) {
        bool A0 = a, B0 = b, C0 = c;
        cout << a << " " << b << " " << c << " |  "
             << (A0 && B0) << "     " << (A0 || B0) << "     " << (!A0) << "     " << (A0 ^ B0) << "\n";
    }

    return 0;
}
