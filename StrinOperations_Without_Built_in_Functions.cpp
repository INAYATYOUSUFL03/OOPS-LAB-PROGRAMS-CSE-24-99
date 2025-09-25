#include <iostream>
using namespace std;

int strLength(const char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void strReverse(char str[]) {
    int n = strLength(str);
    for (int i = 0; i < n/2; i++) {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int freqOfChar(const char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) count++;
    }
    return count;
}

int main() {
    char str[100] = "Programming";
    cout << "Length: " << strLength(str) << endl;
    strReverse(str);
    cout << "Reverse: " << str << endl;
    cout << "Frequency of g: " << freqOfChar("Programming", 'g') << endl;
    return 0;
}
