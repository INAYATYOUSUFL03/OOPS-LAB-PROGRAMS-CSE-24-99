#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b >> c;

    float r1 = (a*b)/c;
    float r2 = (a/c)*b;

    cout << r1 << "\n" << r2;

    return 0;
}
