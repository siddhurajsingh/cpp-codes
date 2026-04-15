#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {}
};

class B : public A {
public:
    void display() { cout << "B display" << endl; }
};

int main() {
    A* a = new B();
    B* b = dynamic_cast<B*>(a);
    if (b) b->display();
    delete a;
    return 0;
}
