#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=20;i++){
        int count = 2*i - 1;
        for(int j=0;j<count;j++)
            cout << "X";
        cout << "\n";
    }
    return 0;
}
