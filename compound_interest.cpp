#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest {
    double principal;
    double rate; 
    int n; 
public:
    CompoundInterest(double p, double r, int compoundsPerYear = 1)
        : principal(p), rate(r), n(compoundsPerYear) {}
    double amount(int years) const {
        double R = rate / 100.0;
        
        return principal * pow(1.0 + R / n, n * years);
    }
    double compoundInterest(int years) const {
        return amount(years) - principal;
    }
    void display(int years) const {
        cout << "P=" << principal << ", Rate=" << rate << "%, n=" << n << ", t=" << years << " years\n";
        cout << "Amount = " << amount(years) << ", Compound Interest = " << compoundInterest(years) << '\n';
    }
};

int main() {
    double p, r;
    int n, t;
    cout << "Enter principal and rate(%): ";
    cin >> p >> r;
    cout << "Enter compounds per year (enter 0 to use default 1): ";
    cin >> n;
    if (n <= 0) n = 1;
    cout << "Enter time in years: ";
    cin >> t;
    CompoundInterest ci(p, r, n);
    ci.display(t);
    return 0;
}
