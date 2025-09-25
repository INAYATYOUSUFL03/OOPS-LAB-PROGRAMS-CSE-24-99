#include <iostream>
using namespace std;

int main() {
    int lines = 20;
    for (int i = 1; i <= lines; i++) {
        for (int s = 0; s < lines - i; s++) cout << " ";
        for (int x = 0; x < (2*i - 1); x++) cout << "X";
        cout << endl;
    }
    return 0;
}
