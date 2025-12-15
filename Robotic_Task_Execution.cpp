#include <iostream>
using namespace std;

class Robot {
public:
    virtual void performTask() = 0;
};

class CleaningRobot : public Robot {
public:
    void performTask() { cout << "Cleaning" << endl; }
};

class SecurityRobot : public Robot {
public:
    void performTask() { cout << "Security Check" << endl; }
};

class DeliveryRobot : public Robot {
public:
    void performTask() { cout << "Delivering" << endl; }
};

int main() {
    Robot* r[3];
    CleaningRobot c;
    SecurityRobot s;
    DeliveryRobot d;

    r[0] = &c;
    r[1] = &s;
    r[2] = &d;

    for(int i = 0; i < 3; i++)
        r[i]->performTask();
}
