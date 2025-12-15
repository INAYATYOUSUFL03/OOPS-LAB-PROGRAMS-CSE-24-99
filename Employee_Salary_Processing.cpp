#include <iostream>
using namespace std;

class Employee {
public:
    virtual float calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
public:
    float calculateSalary() { return 30000; }
};

class PartTimeEmployee : public Employee {
public:
    float calculateSalary() { return 15000; }
};

class Intern : public Employee {
public:
    float calculateSalary() { return 8000; }
};

int main() {
    Employee* e;
    FullTimeEmployee f;
    PartTimeEmployee p;
    Intern i;

    e = &f; cout << e->calculateSalary() << endl;
    e = &p; cout << e->calculateSalary() << endl;
    e = &i; cout << e->calculateSalary() << endl;
}
