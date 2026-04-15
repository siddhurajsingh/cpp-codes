#include <iostream>
using namespace std;

class MathLib {
public:
    static double PI;

    static double circleArea(double radius) {
        return PI * radius * radius;
    }
};

double MathLib::PI = 3.14159;

int main() {
    cout << "Area of circle with radius 5: " << MathLib::circleArea(5) << endl;
    return 0;
}
