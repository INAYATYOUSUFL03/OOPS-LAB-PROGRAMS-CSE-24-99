#include <iostream>
using namespace std;

int main(){
    double v;
    char u;
    cin >> v >> u;

    double c,f,k;

    if(u=='C'){ c=v; f=c*9/5+32; k=c+273.15; }
    if(u=='F'){ f=v; c=(f-32)*5/9; k=c+273.15; }
    if(u=='K'){ k=v; c=k-273.15; f=c*9/5+32; }

    cout<<c<<"\n"<<f<<"\n"<<k;
    return 0;
}
