#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Int: " << calc.add(5, 3) << endl;
    cout << "Double: " << calc.add(5.5, 3.2) << endl;
    cout << "Three ints: " << calc.add(5, 3, 2) << endl;
    return 0;
}
