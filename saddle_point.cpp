#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int A[10][10];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    bool found=false;

    for(int i=0;i<r;i++){
        int minVal = A[i][0];
        int colIndex = 0;

        for(int j=1;j<c;j++)
            if(A[i][j] < minVal){
                minVal = A[i][j];
                colIndex = j;
            }

        bool saddle = true;
        for(int k=0;k<r;k++)
            if(A[k][colIndex] > minVal)
                saddle = false;

        if(saddle){
            cout << "Saddle point = " << minVal << " at (" << i << "," << colIndex << ")\n";
            found = true;
        }
    }

    if(!found) cout << "No saddle point\n";
}
