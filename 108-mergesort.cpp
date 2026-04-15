#include <iostream>
using namespace std;

class Polygon {
public:
    virtual double area() = 0;
    virtual int sides() = 0;
    virtual ~Polygon() {}
};

class Pentagon : public Polygon {
private:
    double side;
public:
    Pentagon(double s) : side(s) {}
    double area() override { return (side * side * sqrt(25 + 10 * sqrt(5))) / 4; }
    int sides() override { return 5; }
};

int main() {
    Pentagon p(10);
    cout << "Sides: " << p.sides() << endl;
    return 0;
}
