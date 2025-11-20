#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[10][10];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> A[i][j];

    bool symmetric = true;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(A[i][j] != A[j][i])
                symmetric = false;

    if(symmetric) cout << "Matrix is Symmetric\n";
    else cout << "Matrix is NOT Symmetric\n";
}
