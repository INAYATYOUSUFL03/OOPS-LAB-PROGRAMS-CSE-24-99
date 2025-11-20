#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << "Zero";
    else {
        string sign = (n > 0) ? "Positive" : "Negative";
        string type = (abs(n) % 2 == 0) ? "Even" : "Odd";
        cout << sign << " " << type;
    }
}
