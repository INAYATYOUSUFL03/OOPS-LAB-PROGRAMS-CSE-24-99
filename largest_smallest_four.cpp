#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mx = a, mn = a;

    if(b > mx) mx = b;
    if(c > mx) mx = c;
    if(d > mx) mx = d;

    if(b < mn) mn = b;
    if(c < mn) mn = c;
    if(d < mn) mn = d;

    cout << "Largest = " << mx << "\nSmallest = " << mn;
}
