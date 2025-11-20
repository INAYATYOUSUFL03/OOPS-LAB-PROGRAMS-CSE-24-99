#include <iostream>
#include <string>
using namespace std;

void display(int x) {
    cout << "Integer: " << x << '\n';
}

void display(float x) {
    cout << "Float: " << x << '\n';
}

void display(const string &s) {
    cout << "String: " << s << '\n';
}

int main() {
    display(10);
    display(3.14f);
    display(string("Hello Inayat"));
    return 0;
}
