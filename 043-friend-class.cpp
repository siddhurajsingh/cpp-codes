#include <iostream>
using namespace std;

class Vehicle {
public:
    string type;
};

class FourWheeler : public Vehicle {
public:
    string wheelType;
};

class Car : public FourWheeler {
public:
    string model;
};

int main() {
    Car c;
    c.type = "Land Vehicle";
    c.wheelType = "Rubber";
    c.model = "Tesla";
    cout << c.type << " - " << c.model << endl;
    return 0;
}
