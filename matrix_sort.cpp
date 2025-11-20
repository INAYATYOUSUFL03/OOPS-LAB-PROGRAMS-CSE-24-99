#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int A[10][10];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    for(int i=0;i<r;i++)
        sort(A[i], A[i] + c);

    cout << "Row-wise sorted:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << A[i][j] << " ";
        cout << endl;
    }

    for(int j=0;j<c;j++){
        int col[10];
        for(int i=0;i<r;i++) col[i] = A[i][j];
        sort(col, col + r);
        for(int i=0;i<r;i++) A[i][j] = col[i];
    }

    cout << "Column-wise sorted:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << A[i][j] << " ";
        cout << endl;
    }
}
