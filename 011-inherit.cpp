#include <iostream>
using namespace std;

class Battery {
public:
    virtual int getCapacity() = 0;
    virtual ~Battery() {}
};

class LithiumBattery : public Battery {
public:
    int getCapacity() override { return 5000; }
};

class Device {
private:
    Battery* battery;
public:
    Device(Battery* b) : battery(b) {}
    void displayPower() { cout << "Power: " << battery->getCapacity() << "mAh" << endl; }
};

int main() {
    LithiumBattery battery;
    Device device(&battery);
    device.displayPower();
    return 0;
}
