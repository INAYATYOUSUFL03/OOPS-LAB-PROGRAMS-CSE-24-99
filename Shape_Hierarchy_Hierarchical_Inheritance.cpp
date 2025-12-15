#include <iostream>
using namespace std;

class Shape {
public:
    float area;
};

class Circle : public Shape {
public:
    void calculate(float r) {
        area = 3.14 * r * r;
        cout << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void calculate(float l, float b) {
        area = l * b;
        cout << area << endl;
    }
};

class Triangle : public Shape {
public:
    void calculate(float b, float h) {
        area = 0.5 * b * h;
        cout << area << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.calculate(5);
    r.calculate(4, 6);
    t.calculate(3, 7);
}
