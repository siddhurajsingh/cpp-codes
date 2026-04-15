#include <iostream>
using namespace std;

class Converter {
public:
    virtual double convert(double value) = 0;
    virtual ~Converter() {}
};

class KilometerToMile : public Converter {
public:
    double convert(double value) override { return value * 0.621371; }
};

class CelsiusToFahrenheit : public Converter {
public:
    double convert(double value) override { return (value * 9 / 5) + 32; }
};

int main() {
    KilometerToMile km;
    cout << "10 km = " << km.convert(10) << " miles" << endl;
    
    CelsiusToFahrenheit cf;
    cout << "25 C = " << cf.convert(25) << " F" << endl;
    return 0;
}
