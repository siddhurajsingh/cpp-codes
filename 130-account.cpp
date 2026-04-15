#include <iostream>
using namespace std;

class Point {
public:
    double x, y;

    Point(double a = 0, double b = 0) : x(a), y(b) {}

    Point operator*(double scalar) {
        return Point(x * scalar, y * scalar);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(3, 4);
    Point scaled = p * 2;
    scaled.display();
    return 0;
}
