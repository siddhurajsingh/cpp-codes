#include <iostream>
using namespace std;

class Weather {
public:
    virtual string getCondition() = 0;
    virtual double getTemperature() = 0;
    virtual ~Weather() {}
};

class SunnyWeather : public Weather {
public:
    string getCondition() override { return "Sunny"; }
    double getTemperature() override { return 28.5; }
};

class RainyWeather : public Weather {
public:
    string getCondition() override { return "Rainy"; }
    double getTemperature() override { return 15.2; }
};

int main() {
    Weather* weather = new SunnyWeather();
    cout << "Condition: " << weather->getCondition() << ", Temp: " << weather->getTemperature() << "C" << endl;
    return 0;
}
