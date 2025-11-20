#include <iostream>
using namespace std;

class Distance {
    long totalCm;
public:
    
    Distance(long meters = 0) : totalCm(meters * 100) {}
    
    Distance(long meters, long centimeters) : totalCm(meters * 100 + centimeters) {}
   
    static Distance add(const Distance& d1, const Distance& d2) {
        Distance sum;
        sum.totalCm = d1.totalCm + d2.totalCm;
        return sum;
    }
    void display() const {
        long m = totalCm / 100;
        long cm = totalCm % 100;
        cout << m << " meters " << cm << " centimeters\n";
    }
};

int main() {
    cout << "Enter distance1 (m cm): ";
    long m1, c1; cin >> m1 >> c1;
    cout << "Enter distance2 (m cm): ";
    long m2, c2; cin >> m2 >> c2;

    Distance d1(m1, c1), d2(m2, c2);
    cout << "Distance1: "; d1.display();
    cout << "Distance2: "; d2.display();

    Distance total = Distance::add(d1, d2);
    cout << "Total distance: "; total.display();
    return 0;
}
