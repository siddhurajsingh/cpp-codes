#include <iostream>
using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {}
    virtual void area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(string n, float r) : Shape(n), radius(r) {}
    void area() override { cout << "Area: " << 3.14 * radius * radius << endl; }
};

int main() {
    Shape* s = new Circle("Circle", 5);
    s->area();
    delete s;
    return 0;
}
