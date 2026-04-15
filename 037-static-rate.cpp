#include <iostream>
using namespace std;

class Sensor {
public:
    virtual double readValue() = 0;
    virtual ~Sensor() {}
};

class TemperatureSensor : public Sensor {
public:
    double readValue() override { return 22.5; }
};

class HumiditySensor : public Sensor {
public:
    double readValue() override { return 60.0; }
};

int main() {
    TemperatureSensor ts;
    cout << "Temperature: " << ts.readValue() << " C" << endl;
    return 0;
}
