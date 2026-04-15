#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Color {
public:
    virtual void setColor(string c) = 0;
    virtual ~Color() {}
};

class Circle : public Shape, public Color {
public:
    void draw() override { cout << "Drawing circle" << endl; }
    void setColor(string c) override { cout << "Color: " << c << endl; }
};

int main() {
    Circle c;
    c.draw();
    c.setColor("Red");
    return 0;
}
