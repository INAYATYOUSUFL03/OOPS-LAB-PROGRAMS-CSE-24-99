#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int maintenanceCost() = 0;
};

class Car : public Vehicle {
public:
    int maintenanceCost() { return 5000; }
};

class Bike : public Vehicle {
public:
    int maintenanceCost() { return 2000; }
};

class Truck : public Vehicle {
public:
    int maintenanceCost() { return 8000; }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;
    Truck t;

    v = &c; cout << v->maintenanceCost() << endl;
    v = &b; cout << v->maintenanceCost() << endl;
    v = &t; cout << v->maintenanceCost() << endl;
}
