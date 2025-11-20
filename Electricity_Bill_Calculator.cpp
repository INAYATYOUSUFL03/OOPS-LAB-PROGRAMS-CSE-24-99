#include <iostream>
using namespace std;

class Bill {
    int units;
    static constexpr double ratePerUnit = 5.0; 
public:
    Bill(int u = 0) : units(u) {}

    Bill(const Bill& other) : units(other.units) {}
    double total() const { return units * ratePerUnit; }
    void display(const string& tag = "") const {
        cout << tag << "Units: " << units << ", Total Bill: ₹" << total() << '\n';
    }
};

int main() {
    int u;
    cout << "Enter consumed units: ";
    cin >> u;
    Bill original(u);
    Bill copy = original; 
    original.display("Original: ");
    copy.display("Copy:     ");
    return 0;
}
