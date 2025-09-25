#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int upper=0, lower=0, digit=0, space=0, special=0;

    for (char c: str) {
        if (isupper(c)) upper++;
        else if (islower(c)) lower++;
        else if (isdigit(c)) digit++;
        else if (isspace(c)) space++;
        else special++;
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Spaces: " << space << endl;
    cout << "Special: " << special << endl;

    return 0;
}
