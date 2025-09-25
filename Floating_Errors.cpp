#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a = 1.0f, b = 3.0f, c = 7.0f;

    float val1 = (a * b) / c;
    float val2 = a * (b / c);

    cout << "(a*b)/c = " << val1 << endl;
    cout << "a*(b/c) = " << val2 << endl;

    float epsilon = fabs(val1 - val2);
    cout << "Difference (epsilon) = " << epsilon << endl;
    
return 0;
}
