#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;
public:
    void setCelsius(float c) {
        celsius = c;
    }

    float getCelsius() {
        return celsius;
    }

    float getFahrenheit() {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature t;
    t.setCelsius(25);
    cout << "Celsius: " << t.getCelsius() << ", Fahrenheit: " << t.getFahrenheit() << endl;
    return 0;
}
