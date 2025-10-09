#include <iostream>
using namespace std;

int main() {
    char s[1000];
    cout << "Enter a line (use getline after clearing):\n";
    cin.ignore();
    cin.getline(s, 1000);

    int upper=0, lower=0, digits=0, spaces=0, special=0;
    int i=0;
    while (s[i] != '\0') {
        unsigned char c = s[i];
        if (c >= 'A' && c <= 'Z') upper++;
        else if (c >= 'a' && c <= 'z') lower++;
        else if (c >= '0' && c <= '9') digits++;
        else if (c == ' ' || c == '\t' || c == '\n' || c == '\r') spaces++;
        else special++;
        i++;
    }

    cout << "Uppercase letters: " << upper << "\n";
    cout << "Lowercase letters: " << lower << "\n";
    cout << "Digits: " << digits << "\n";
    cout << "Whitespace: " << spaces << "\n";
    cout << "Special characters: " << special << "\n";
    return 0;
}
