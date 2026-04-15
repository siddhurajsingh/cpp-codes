#include <iostream>
using namespace std;

class Transport {
public:
    virtual void move() = 0;
    virtual ~Transport() {}
};

class Car : public Transport {
public:
    void move() override {
        cout << "Car is driving on road" << endl;
    }
};

class Boat : public Transport {
public:
    void move() override {
        cout << "Boat is sailing on water" << endl;
    }
};

int main() {
    Car car;
    Boat boat;
    car.move();
    boat.move();
    return 0;
}
