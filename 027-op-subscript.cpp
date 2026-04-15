#include <iostream>
using namespace std;

class Vehicle {
protected:
    string color;
public:
    Vehicle(string c) : color(c) {}
    virtual void start() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(string c) : Vehicle(c) {}
    void start() override {
        cout << "Car " << color << " started" << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(string c) : Vehicle(c) {}
    void start() override {
        cout << "Bike " << color << " started" << endl;
    }
};

int main() {
    Car car("Red");
    Bike bike("Blue");
    car.start();
    bike.start();
    return 0;
}
