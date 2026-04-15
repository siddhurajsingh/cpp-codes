#include <iostream>
using namespace std;

class Shape {
protected:
    double area_value;
public:
    virtual void calculateArea() = 0;
    virtual void display() { cout << "Area: " << area_value << endl; }
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) { calculateArea(); }
    void calculateArea() override { area_value = length * width; }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) { calculateArea(); }
    void calculateArea() override { area_value = 0.5 * base * height; }
};

int main() {
    Rectangle r(5, 3);
    r.display();
    Triangle t(5, 4);
    t.display();
    return 0;
}
