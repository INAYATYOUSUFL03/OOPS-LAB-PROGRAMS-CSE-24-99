#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, smallest, largest, sum = 0;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0) {
            smallest = largest = num;
        }
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
    }

    double average = (double)sum / n;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    cout << "Average = " << average << endl;

    return 0;
}
