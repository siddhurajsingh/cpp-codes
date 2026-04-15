#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle" << endl; }
    void erase() override { cout << "Erasing Circle" << endl; }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();
    shape->erase();
    delete shape;
    return 0;
}
