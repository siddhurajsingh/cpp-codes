#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int a) : x(a) {}
};

class Derived : public Base {
public:
    int y;
    Derived(int a, int b) : Base(a), y(b) {}
    void display() { cout << "x=" << x << ", y=" << y << endl; }
};

int main() {
    Derived d(5, 10);
    d.display();
    return 0;
}
