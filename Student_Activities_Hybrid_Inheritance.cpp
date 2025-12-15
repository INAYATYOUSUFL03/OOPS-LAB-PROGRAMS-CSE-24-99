#include <iostream>
using namespace std;

class Student {
public:
    int roll;
};

class Academics : public Student {
public:
    int marks;
};

class Sports {
public:
    int score;
};

class Result : public Academics, public Sports {
public:
    void input() {
        cin >> roll >> marks >> score;
    }
    void display() {
        cout << roll << " " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.input();
    r.display();
}
