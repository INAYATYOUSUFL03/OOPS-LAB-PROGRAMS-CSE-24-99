#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

class Marks : public Student {
public:
    int m1, m2, m3;
    void input() {
        cin >> name >> roll >> m1 >> m2 >> m3;
    }
    void display() {
        int total = m1 + m2 + m3;
        float per = total / 3.0;
        cout << name << " " << roll << endl;
        cout << total << " " << per << endl;
    }
};

int main() {
    Marks s;
    s.input();
    s.display();
}
