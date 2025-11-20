#include <iostream>
using namespace std;

void findMinMax(int *arr, int n, int &minVal, int &maxVal) {
    if (n <= 0) { minVal = maxVal = 0; return; }
    minVal = maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int arr[] = {7, 2, 9, -1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn, mx;
    findMinMax(arr, n, mn, mx);
    cout << "Min = " << mn << ", Max = " << mx << '\n';
    return 0;
}
