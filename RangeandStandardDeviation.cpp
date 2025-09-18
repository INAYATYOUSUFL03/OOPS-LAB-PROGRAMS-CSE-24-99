#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, smallest, largest;
    double sum = 0, sumSquares = 0;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0) smallest = largest = num;
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;

        sum += num;
        sumSquares += num * num;
    }

    double average = sum / n;
    double std_dev = sqrt(sumSquares / n - average * average);

    cout << "Range = " << largest - smallest << endl;
    cout << "Standard Deviation = " << std_dev << endl;

    return 0;
}
