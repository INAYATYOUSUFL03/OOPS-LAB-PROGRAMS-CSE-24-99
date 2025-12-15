#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual float interest() = 0;
};

class SavingsAccount : public BankAccount {
public:
    float interest() { return 5.0; }
};

class FixedDeposit : public BankAccount {
public:
    float interest() { return 7.5; }
};

class RecurringDeposit : public BankAccount {
public:
    float interest() { return 6.0; }
};

int main() {
    BankAccount* b;
    SavingsAccount s;
    FixedDeposit f;
    RecurringDeposit r;

    b = &s; cout << b->interest() << endl;
    b = &f; cout << b->interest() << endl;
    b = &r; cout << b->interest() << endl;
}
