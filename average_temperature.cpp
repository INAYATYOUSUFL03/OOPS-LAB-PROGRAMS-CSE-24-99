#include <iostream>
using namespace std;

int main(){
    double x, sum=0;
    int count=0;

    while(cin >> x){
        sum += x;
        count++;
    }

    cout << sum/count;
    return 0;
}
