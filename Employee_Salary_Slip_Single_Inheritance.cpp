#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    float basic;
};

class Salary : public Employee {
public:
    void input() {
        cin >> name >> id >> basic;
    }
    void display() {
        float hra = basic * 0.2;
        float da = basic * 0.1;
        float net = basic + hra + da;
        cout << name << " " << id << endl;
        cout << net << endl;
    }
};

int main() {
    Salary e;
    e.input();
    e.display();
}
