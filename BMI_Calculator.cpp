#include <iostream>
#include <string>
using namespace std;

class BMI {
    double weight;
    double height;
public:
    BMI(double w, double h) : weight(w), height(h) {}
    double value() const {
        if (height <= 0) return 0.0;
        return weight / (height * height);
    }
    string category() const {
        double b = value();
        if (b < 18.5) return "Underweight";
        if (b < 25.0) return "Normal";
        if (b < 30.0) return "Overweight";
        return "Obese";
    }
    void display() const {
        cout << "Weight(kg): " << weight << ", Height(m): " << height
             << "\nBMI = " << value() << " (" << category() << ")\n";
    }
};

int main() {
    double w, h;
    cout << "Enter weight (kg) and height (m): ";
    cin >> w >> h;
    BMI b(w, h);
    b.display();
    return 0;
}
