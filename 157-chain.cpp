#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() { cout << "Base1 method" << endl; }
};

class Base2 {
public:
    void display2() { cout << "Base2 method" << endl; }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived d;
    d.display1();
    d.display2();
    return 0;
}
