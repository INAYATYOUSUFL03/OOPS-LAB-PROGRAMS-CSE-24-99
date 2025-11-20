#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a,b,c;
    cin >> a >> b >> c;

    if(a+b<=c || a+c<=b || b+c<=a){
        cout << "Not a valid triangle";
        return 0;
    }

    cout << "Valid triangle\n";

    if(a==b && b==c) cout << "Equilateral\n";
    else if(a==b || a==c || b==c) cout << "Isosceles\n";
    else cout << "Scalene\n";

    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        cout << "Right-angled";
}
