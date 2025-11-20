#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    double x, sum=0, mn, mx, sq=0;
    cin >> x;

    mn=mx=x;
    sum=x;
    sq=x*x;

    for(int i=1;i<n;i++){
        cin >> x;
        if(x < mn) mn=x;
        if(x > mx) mx=x;
        sum+=x;
        sq+=x*x;
    }

    double avg = sum/n;
    double stdev = sqrt((sq/n) - (avg*avg));

    cout << mn << "\n" << mx << "\n" << avg << "\n" << stdev;
    return 0;
}
