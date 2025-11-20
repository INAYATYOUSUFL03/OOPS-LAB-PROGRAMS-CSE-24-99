#include <iostream>
using namespace std;

int main(){
    int x;
    int hot=0, pleasant=0, cold=0;

    while(cin >> x){
        if(x >= 85) hot++;
        else if(x >= 60) pleasant++;
        else cold++;
    }

    cout << hot << "\n" << pleasant << "\n" << cold;
    return 0;
}
