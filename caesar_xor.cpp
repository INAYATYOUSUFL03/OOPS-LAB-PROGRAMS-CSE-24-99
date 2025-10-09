#include <iostream>
using namespace std;

int main() {
    cout << "Enter text (single word, no spaces): ";
    char s[500];
    cin >> s;
    cout << "Enter integer key for Caesar and XOR: ";
    int key; cin >> key;

    cout << "\nOriginal chars and ASCII:\n";
    int i = 0;
    while (s[i] != '\0') {
        cout << s[i] << " -> " << (int)(unsigned char)s[i] << "\n";
        i++;
    }

    cout << "\nCaesar encrypted chars and ASCII:\n";
    i = 0;
    while (s[i] != '\0') {
        unsigned char enc = (unsigned char)((s[i] + key) % 128);
        cout << enc << " -> " << (int)enc << "\n";
        i++;
    }

    cout << "\nXOR encrypted chars and ASCII:\n";
    i = 0;
    while (s[i] != '\0') {
        unsigned char x = (unsigned char)(s[i]) ^ (unsigned char)key;
        cout << x << " -> " << (int)x << "\n";
        i++;
    }

    return 0;
}
