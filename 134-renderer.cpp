#include <iostream>
using namespace std;

class Multiplier {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    Multiplier m;
    cout << m.multiply(3, 4) << endl;
    cout << m.multiply(2.5, 4.0) << endl;
    cout << m.multiply(2, 3, 4) << endl;
    return 0;
}
