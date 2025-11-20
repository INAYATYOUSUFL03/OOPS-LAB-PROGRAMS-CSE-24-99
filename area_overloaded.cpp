#include <iostream>
using namespace std;

double area(double radius) {
    const double PI = 3.141592653589793;
    return PI * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height, bool isTriangle) {
    (void)isTriangle; 
    
    return 0.5 * base * height;
}

int main() {
    cout << "Circle radius 3 -> " << area(3.0) << '\n';
    cout << "Rectangle 4 x 5 -> " << area(4.0, 5.0) << '\n';
    cout << "Triangle base 6 height 4 -> " << area(6.0, 4.0, true) << '\n';
    return 0;
}
