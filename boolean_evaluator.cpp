#include <iostream>
using namespace std;

int toBool(string s){
    if(s=="1" || s=="true") return 1;
    return 0;
}

int main(){
    string a,b;
    cin >> a >> b;

    int x = toBool(a);
    int y = toBool(b);

    cout << (x && y) << "\n";
    cout << (x || y) << "\n";
    cout << (!x) << "\n";

    return 0;
}
