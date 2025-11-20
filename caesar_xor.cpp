#include <iostream>
using namespace std;

int main(){
    string s;
    int key;
    char x;
    getline(cin, s);
    cin >> key >> x;

    string c1=s, c2=s;

    for(int i=0;i<s.size();i++) c1[i] = s[i] + key;
    for(int i=0;i<s.size();i++) c2[i] = s[i] ^ x;

    cout << c1 << "\n" << c2;

    return 0;
}
