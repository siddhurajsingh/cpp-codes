#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void carInfo() {
        cout << brand << " " << model << " (" << year << ")" << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Camry";
    c1.year = 2023;
    c1.carInfo();
    return 0;
}
