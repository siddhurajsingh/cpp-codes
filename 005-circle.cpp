#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    float getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c;
    c.radius = 5.0;
    cout << "Area: " << c.getArea() << endl;
    return 0;
}
