#include <iostream>
using namespace std;

int strLen(char s[]){
    int i=0;
    while(s[i]) i++;
    return i;
}

void reverseStr(char s[], char r[]){
    int n = strLen(s);
    for(int i=0;i<n;i++) r[i] = s[n-1-i];
    r[n] = '\0';
}

int freq(char s[], char ch){
    int c=0;
    for(int i=0;s[i];i++)
        if(s[i]==ch) c++;
    return c;
}

int main(){
    char s[200], rev[200], ch;
    cin.getline(s,200);
    cin >> ch;

    reverseStr(s, rev);
    cout << strLen(s) << "\n";
    cout << rev << "\n";
    cout << freq(s,ch);

    return 0;
}
