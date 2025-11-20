#include <iostream>
using namespace std;

class Speed {
    double distanceKm;
    double timeHours;
public:
    Speed(double d, double t) : distanceKm(d), timeHours(t) {}
    double getSpeed() const {
        if (timeHours <= 0) return 0.0;
        return distanceKm / timeHours;
    }
    void display() const {
        cout << "Distance: " << distanceKm << " km, Time: " << timeHours << " hr"
             << "\nSpeed: " << getSpeed() << " km/hr\n";
    }
};

int main() {
    double d, t;
    cout << "Enter distance (km) and time (hours): ";
    cin >> d >> t;
    Speed s(d, t);
    s.display();
    return 0;
}
