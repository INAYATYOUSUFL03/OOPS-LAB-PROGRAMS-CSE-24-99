#include <iostream>
using namespace std;

int main() {
    int temp, count = 0, sum = 0;

    cout << "Enter temperatures (-1 to stop): ";
    while (true) {
        cin >> temp;
        if (temp == -1) break;
        sum += temp;
        count++;
    }

    cout << "Average Temperature: " << (double)sum / count << endl;
    return 0;
}
