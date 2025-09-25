#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, smallest, largest;
    double sum = 0, sum_squares = 0;

    cin >> num;
    smallest = largest = num;
    sum += num;
    sum_squares += num * num;

    for(int i = 1; i < n; i++) {
        cin >> num;
        if(num < smallest) smallest = num;
        if(num > largest) largest = num;
        sum += num;
        sum_squares += num * num;
    }

    double avg = sum / n;
    double stddev = sqrt((sum_squares / n) - (avg * avg));

    cout << "Range: " << largest - smallest << endl;
    cout << "Standard Deviation: " << stddev << endl;
    return 0;
}
