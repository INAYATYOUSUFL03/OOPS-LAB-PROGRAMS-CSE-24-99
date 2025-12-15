#include <iostream>
using namespace std;

class Transport {
public:
    virtual float fare(int d) = 0;
};

class Bus : public Transport {
public:
    float fare(int d) { return d * 2; }
};

class Train : public Transport {
public:
    float fare(int d) { return d * 1.5; }
};

class Flight : public Transport {
public:
    float fare(int d) { return d * 5; }
};

int main() {
    Transport* t;
    Bus b;
    Train tr;
    Flight f;

    t = &b; cout << t->fare(10) << endl;
    t = &tr; cout << t->fare(10) << endl;
    t = &f; cout << t->fare(10) << endl;
}
