#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() { cout << "Base::func()" << endl; }
};

class Derived : public Base {
public:
    void func() override { cout << "Derived::func()" << endl; }
};

int main() {
    Base* b = new Derived();
    b->func();
    Derived* d = dynamic_cast<Derived*>(b);
    if (d) cout << "Cast successful" << endl;
    delete b;
    return 0;
}
