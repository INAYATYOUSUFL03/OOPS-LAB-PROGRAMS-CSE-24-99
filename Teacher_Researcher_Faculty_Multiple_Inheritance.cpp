#include <iostream>
using namespace std;

class Teacher {
public:
    string subject;
};

class Researcher {
public:
    string field;
};

class Faculty : public Teacher, public Researcher {
public:
    void input() {
        cin >> subject >> field;
    }
    void display() {
        cout << subject << " " << field << endl;
    }
};

int main() {
    Faculty f;
    f.input();
    f.display();
}
