#include <iostream>
using namespace std;

class Account {
protected:
    float balance;
};

class SavingsAccount : public Account {
public:
    void input() {
        cin >> balance;
    }
    void deposit(float amt) {
        balance += amt;
    }
    void withdraw(float amt) {
        balance -= amt;
    }
    void display() {
        cout << balance << endl;
    }
};

int main() {
    SavingsAccount s;
    s.input();
    s.deposit(500);
    s.withdraw(200);
    s.display();
}
