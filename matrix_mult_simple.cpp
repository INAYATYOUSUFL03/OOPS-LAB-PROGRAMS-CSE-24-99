#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    int A[20][20], B[20][20], R[20][20]={0};
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];

    int r2,c2;
    cin>>r2>>c2;

    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin>>B[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c;k++)
                R[i][j]+=A[i][k]*B[k][j];

    for(int i=0;i<r;i++){
        for(int j=0;j<c2;j++)
            cout<<R[i][j]<<" ";
        cout<<"\n";
    }

    return 0;
}
