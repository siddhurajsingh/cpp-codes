#include <iostream>
using namespace std;

class Base {
public:
    virtual void describe() { cout << "Base" << endl; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void describe() override { cout << "Derived" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Base* b = new Derived();
    b->describe();
    delete b;
    return 0;
}
