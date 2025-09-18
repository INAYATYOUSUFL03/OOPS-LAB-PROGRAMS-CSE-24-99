#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    int id, hours;
    double rate, gross, net, totalPay = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter ID, hourly rate, hours worked: ";
        cin >> id >> rate >> hours;

        if (hours > 40) 
            gross = 40 * rate + (hours - 40) * (1.5 * rate);
        else 
            gross = hours * rate;

        net = gross - (0.03625 * gross); 

        cout << "Employee ID: " << id << " Net Pay: " << net << endl;
        totalPay += net;
    }

    cout << "\nTotal Payroll = " << totalPay << endl;
    cout << "Average Pay = " << totalPay / n << endl;

    return 0;
}
