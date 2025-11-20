#include <iostream>
using namespace std;

class Interest {
    double principal;
    double rate; 
    double time;
public:
    Interest(double p, double r, double t) : principal(p), rate(r), time(t) {}
    double simpleInterest() const {
        return (principal * rate * time) / 100.0;
    }
    void display() const {
        cout << "Principal: " << principal << "\nRate(%): " << rate << "\nTime(years): " << time
             << "\nSimple Interest = " << simpleInterest() << '\n';
    }
};

int main() {
    double p, r, t;
    cout << "Enter principal, rate(%) and time(years): ";
    cin >> p >> r >> t;
    Interest in(p, r, t);
    in.display();
    return 0;
}
