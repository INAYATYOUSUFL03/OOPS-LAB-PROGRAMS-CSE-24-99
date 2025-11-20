#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int up=0, low=0, dig=0, sp=0, spc=0;

    for(char c:s){
        if(c>='A'&&c<='Z') up++;
        else if(c>='a'&&c<='z') low++;
        else if(c>='0'&&c<='9') dig++;
        else if(c==' ') sp++;
        else spc++;
    }

    cout<<up<<"\n"<<low<<"\n"<<dig<<"\n"<<sp<<"\n"<<spc;

    return 0;
}
