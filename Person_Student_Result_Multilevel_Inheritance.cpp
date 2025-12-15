#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int roll;
};

class Result : public Student {
public:
    int m1, m2;
    void input() {
        cin >> name >> roll >> m1 >> m2;
    }
    void display() {
        int total = m1 + m2;
        cout << name << " " << roll << " " << total << endl;
    }
};

int main() {
    Result r;
    r.input();
    r.display();
}
