#include <iostream>
using namespace std;

int main() {
    int temps[] = {55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,
                   92,90,93,87,80,78,79,72,68,61,59};
    int n = sizeof(temps) / sizeof(temps[0]);

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += temps[i];
    }

    double avg = sum / n;
    cout << "Average Temperature = " << avg << endl;

    return 0;
}
