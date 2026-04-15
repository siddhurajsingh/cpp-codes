#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Shape() {}
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}
    double area() override { return (a + b + c) / 2 * sqrt(((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)); }
    double perimeter() override { return a + b + c; }
};

int main() {
    Triangle t(3, 4, 5);
    cout << "Perimeter: " << t.perimeter() << endl;
    return 0;
}
