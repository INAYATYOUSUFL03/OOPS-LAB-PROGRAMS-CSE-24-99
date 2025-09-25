#include <iostream>
using namespace std;

string caesarCipher(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base + shift) % 26 + base);
        } else result += c;
    }
    return result;
}

string xorCipher(string text, char key) {
    string result = text;
    for (int i = 0; i < text.size(); i++) {
        result[i] = text[i] ^ key;
    }
    return result;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    string encrypted = caesarCipher(text, 3);
    cout << "Caesar Cipher: " << encrypted << endl;

    string xorEnc = xorCipher(text, 'K');
    cout << "XOR Cipher: " << xorEnc << endl;

    cout << "ASCII values after XOR: ";
    for (char c : xorEnc) cout << (int)c << " ";
    cout << endl;

    return 0;
}
