#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose type of operands: 1=int  2=float  3=double : ";
    cin >> choice;

    cout << "Enter operand1 operator operand2 (example: 5 + 3): ";
    char op;

    if (choice == 1) {
        int a, b;
        cin >> a >> op >> b;
        int result;

        switch(op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b == 0) { cout << "Division by zero!\n"; return 0; }
                result = a / b; 
                break;
            case '%':
                if (b == 0) { cout << "Modulo by zero!\n"; return 0; }
                result = a % b; 
                break;
            default: cout << "Invalid operator!\n"; return 0;
        }
        cout << "Int result = " << result << endl;
    }
    else if (choice == 2) {
        float a, b;
        cin >> a >> op >> b;
        float result;

        switch(op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b == 0) { cout << "Division by zero!\n"; return 0; }
                result = a / b; 
                break;
            default: cout << "Invalid operator for float!\n"; return 0;
        }
        cout << "Float result = " << result << endl;
    }
    else if (choice == 3) {
        double a, b;
        cin >> a >> op >> b;
        double result;

        switch(op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b == 0) { cout << "Division by zero!\n"; return 0; }
                result = a / b; 
                break;
            default: cout << "Invalid operator for double!\n"; return 0;
        }
        cout << "Double result = " << result << endl;
    }
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
