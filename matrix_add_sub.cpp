#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[10][10], B[10][10], Add[10][10], Sub[10][10];

    cout << "Enter first matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    cout << "Enter second matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> B[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            Add[i][j] = A[i][j] + B[i][j];
            Sub[i][j] = A[i][j] - B[i][j];
        }

    cout << "\nAddition:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << Add[i][j] << " ";
        cout << endl;
    }

    cout << "\nSubtraction:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << Sub[i][j] << " ";
        cout << endl;
    }
}
