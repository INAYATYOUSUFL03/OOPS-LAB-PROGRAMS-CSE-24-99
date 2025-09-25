#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for(int i=1; i<=n; i++) fact *= i;
    return fact;
}

int main() {
    int guests, chairs;
    cout << "Enter number of guests and chairs: ";
    cin >> guests >> chairs;

    long long arrangements = factorial(guests) / factorial(guests - chairs);
    cout << "Possible Arrangements: " << arrangements << endl;
    return 0;
}
