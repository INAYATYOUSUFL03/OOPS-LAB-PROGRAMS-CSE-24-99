#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x, sum=0, mn, mx;

    cin >> x;
    mn = mx = x;
    sum = x;

    for(int i=1;i<n;i++){
        cin >> x;
        if(x < mn) mn = x;
        if(x > mx) mx = x;
        sum += x;
    }

    cout << mn << "\n" << mx << "\n" << sum/n;
    return 0;
}
