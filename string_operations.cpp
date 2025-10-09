#include <iostream>
using namespace std;

int lengthOf(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void reverseStr(char s[]) {
    int n = lengthOf(s);
    for (int i = 0; i < n/2; ++i) {
        char t = s[i]; s[i] = s[n-1-i]; s[n-1-i] = t;
    }
}

void substring(char s[], int start, int len, char out[]) {
    int n = lengthOf(s);
    int j = 0;
    for (int i = start; i < n && j < len; ++i) {
        out[j++] = s[i];
    }
    out[j] = '\0';
}

void concat(char a[], char b[], char out[]) {
    int i = 0;
    while (a[i] != '\0') { out[i] = a[i]; i++; }
    int j = 0;
    while (b[j] != '\0') { out[i++] = b[j++]; }
    out[i] = '\0';
}

int freqOf(char s[], char ch) {
    int cnt = 0, i = 0;
    while (s[i] != '\0') {
        if (s[i] == ch) cnt++;
        i++;
    }
    return cnt;
}

int main() {
    char s1[200];
    cout << "Enter first string (no spaces): ";
    cin >> s1;
    cout << "Length = " << lengthOf(s1) << "\n";

    char rev[200];
    
    int i=0;
    while (s1[i] != '\0') { rev[i] = s1[i]; i++; }
    rev[i] = '\0';
    reverseStr(rev);
    cout << "Reverse = " << rev << "\n";

    int start, len;
    cout << "Enter substring start index (0-based) and length: ";
    cin >> start >> len;
    char sub[200];
    substring(s1, start, len, sub);
    cout << "Substring = " << sub << "\n";

    char s2[200];
    cout << "Enter second string to concatenate: ";
    cin >> s2;
    char con[400];
    concat(s1, s2, con);
    cout << "Concatenation = " << con << "\n";

    char ch;
    cout << "Enter character to find frequency: ";
    cin >> ch;
    cout << "Frequency of '" << ch << "' = " << freqOf(s1, ch) << "\n";

    return 0;
}
