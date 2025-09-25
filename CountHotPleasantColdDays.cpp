#include <iostream>
using namespace std;

int main() {
    int temp, hot = 0, pleasant = 0, cold = 0;

    cout << "Enter temperatures (-1 to stop): ";
    while (true) {
        cin >> temp;
        if (temp == -1) break;

        if (temp >= 85) hot++;
        else if (temp >= 60) pleasant++;
        else cold++;
    }

    cout << "Hot days: " << hot << endl;
    cout << "Pleasant days: " << pleasant << endl;
    cout << "Cold days: " << cold << endl;
    return 0;
}
