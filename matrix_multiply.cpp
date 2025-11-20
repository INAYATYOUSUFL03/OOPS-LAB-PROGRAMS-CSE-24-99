#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2;
    cout << "Enter rows & cols of matrix1: ";
    cin >> r1 >> c1;
    cout << "Enter rows & cols of matrix2: ";
    cin >> r2 >> c2;

    if(c1 != r2){
        cout << "Multiplication NOT possible!";
        return 0;
    }

    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter matrix 1:\n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin >> A[i][j];

    cout << "Enter matrix 2:\n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin >> B[i][j];

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c1;k++)
                C[i][j] += A[i][k]*B[k][j];

    cout << "Product:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) cout << C[i][j] << " ";
        cout << endl;
    }
}
