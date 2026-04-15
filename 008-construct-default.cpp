#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    int ram;

    Laptop(string b = "Unknown", int r = 4) {
        brand = b;
        ram = r;
    }

    void info() {
        cout << brand << " with " << ram << "GB RAM" << endl;
    }
};

int main() {
    Laptop l1("Dell");
    l1.info();
    return 0;
}
