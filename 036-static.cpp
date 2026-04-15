#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual ~Vehicle() {}
};

class ElectricCar : public Vehicle {
public:
    void start() override { cout << "Electric car started silently" << endl; }
    void stop() override { cout << "Electric car stopped" << endl; }
};

int main() {
    ElectricCar car;
    car.start();
    car.stop();
    return 0;
}
