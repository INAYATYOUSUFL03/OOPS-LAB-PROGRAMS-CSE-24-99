#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int A[10][10];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    int max=A[0][0], min=A[0][0];
    int maxR=0,maxC=0,minR=0,minC=0;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            if(A[i][j] > max){ max=A[i][j]; maxR=i; maxC=j; }
            if(A[i][j] < min){ min=A[i][j]; minR=i; minC=j; }
        }

    cout << "Max = " << max << " at (" << maxR << "," << maxC << ")\n";
    cout << "Min = " << min << " at (" << minR << "," << minC << ")\n";
}
