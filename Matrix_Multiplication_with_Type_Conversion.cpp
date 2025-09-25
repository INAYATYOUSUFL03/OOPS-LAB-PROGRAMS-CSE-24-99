#include <iostream>
using namespace std;

#define N 2

template<typename T>
void multiply(T A[N][N], T B[N][N], T C[N][N]) {
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            C[i][j] = 0;
            for (int k=0;k<N;k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

template<typename T>
void printMatrix(T M[N][N]) {
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) cout << M[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[N][N] = {{1,2},{3,4}};
    int B[N][N] = {{2,0},{1,2}};
    int C[N][N];

    multiply(A,B,C);
    cout << "Int matrix result:\n";
    printMatrix(C);

    float Af[N][N] = {{1,2},{3,4}};
    float Bf[N][N] = {{2,0},{1,2}};
    float Cf[N][N];

    multiply(Af,Bf,Cf);
    cout << "Float matrix result:\n";
    printMatrix(Cf);

    return 0;
}
