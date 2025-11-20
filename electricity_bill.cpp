#include <iostream>
using namespace std;

int main() {
    int u;
    cin >> u;
    double bill;

    if(u <= 100) bill = u * 1.5;
    else if(u <= 200) bill = 100 * 1.5 + (u - 100) * 2.5;
    else bill = 100 * 1.5 + 100 * 2.5 + (u - 200) * 4.0;

    if(bill > 500) bill += bill * 0.10;

    cout << bill;
}
