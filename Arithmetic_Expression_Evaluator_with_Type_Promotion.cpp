#include <iostream>
using namespace std;

int main() {
    
    int a = 5;
    float b = 3.2f;
    double c = 2.0, d = 11.4;

    double step1 = (double)b * c;
    double step2 = (double)a + step1;
    double result = step2 - d;

    cout << "Expression: 5 + 3.2 * 2.0 - 11.4" << endl;
    cout << "Result = " << result << endl;

    return 0;
}
