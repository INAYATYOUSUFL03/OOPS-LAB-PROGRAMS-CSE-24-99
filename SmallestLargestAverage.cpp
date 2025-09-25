#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    int num;
    int smallest, largest;
    int sum = 0;

    cout << "Enter " << n << " numbers: ";
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

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    cout << "Average: " << average << endl;

    return 0;
}
