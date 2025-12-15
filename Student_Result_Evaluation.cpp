#include <iostream>
using namespace std;

class Student {
public:
    virtual string calculateResult() = 0;
};

class Undergraduate : public Student {
public:
    string calculateResult() { return "Pass"; }
};

class Postgraduate : public Student {
public:
    string calculateResult() { return "Distinction"; }
};

int main() {
    Student* s;
    Undergraduate u;
    Postgraduate p;

    s = &u; cout << s->calculateResult() << endl;
    s = &p; cout << s->calculateResult() << endl;
}
