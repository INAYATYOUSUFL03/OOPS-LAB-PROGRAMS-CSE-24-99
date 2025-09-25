#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    double totalPay = 0;
    for (int i = 1; i <= n; i++) {
        int id, hours;
        double rate, pay;
        cout << "Enter ID, Rate, Hours: ";
        cin >> id >> rate >> hours;

        if (hours > 40)
            pay = (40 * rate) + ((hours - 40) * rate * 1.5);
        else
            pay = hours * rate;

        pay -= pay * 0.03625; 

        cout << "Employee " << id << " Pay: " << pay << endl;
    }

    cout << "Total Payroll: " << totalPay << endl;
    cout << "Average Pay: " << totalPay / n << endl;
    return 0;
}
