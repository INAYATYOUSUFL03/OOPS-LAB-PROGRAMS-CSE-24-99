#include <iostream>
using namespace std;

class Rectangle {
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    Rectangle(double side) : length(side), width(side) {}
    double area() const { return length * width; }
    double perimeter() const { return 2 * (length + width); }
    void show() const {
        cout << "Length: " << length << ", Width: " << width 
             << "\nArea: " << area() << ", Perimeter: " << perimeter() << '\n';
    }
};

int main() {
    cout << "Rectangle (length width): ";
    double l, w;
    cin >> l >> w;
    Rectangle r1(l, w);
    r1.show();

    cout << "Square (side): ";
    double s; cin >> s;
    Rectangle r2(s);
    r2.show();
    return 0;
}
