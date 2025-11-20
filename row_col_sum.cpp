#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int A[10][10];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++) sum += A[i][j];
        cout << "Row " << i+1 << " sum = " << sum << endl;
    }

    for(int j=0;j<c;j++){
        int sum = 0;
        for(int i=0;i<r;i++) sum += A[i][j];
        cout << "Column " << j+1 << " sum = " << sum << endl;
    }
}
