#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

string sum(const string &s1, const string &s2) {
    return s1 + s2;
}

int main() {
    cout << "sum(2,3) = " << sum(2,3) << '\n';
    cout << "sum(1,2,3) = " << sum(1,2,3) << '\n';
    cout << "sum(\"Hi \", \"Inayat\") = " << sum(string("Hi "), string("Inayat")) << '\n';
    return 0;
}
