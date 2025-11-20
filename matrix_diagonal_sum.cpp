#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[10][10];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> A[i][j];

    int mainSum=0, secSum=0;

    for(int i=0;i<n;i++){
        mainSum += A[i][i];
        secSum += A[i][n-i-1];
    }

    cout << "Main diagonal sum = " << mainSum << endl;
    cout << "Secondary diagonal sum = " << secSum << endl;
}
