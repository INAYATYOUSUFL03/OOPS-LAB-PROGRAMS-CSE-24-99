#include <iostream>
using namespace std;

int main() {
    long income;
    cin >> income;
    float tax = 0;

    if(income > 1000000) tax = (income - 1000000)*0.30 + 500000*0.20 + 250000*0.05;
    else if(income > 500000) tax = (income - 500000)*0.20 + 250000*0.05;
    else if(income > 250000) tax = (income - 250000)*0.05;

    cout << tax;
}
