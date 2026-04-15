#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "A::show()" << endl; }
};

class B : public A {
public:
    void show() { cout << "B::show()" << endl; }
};

class C : public A {
public:
    void show() { cout << "C::show()" << endl; }
};

class D : public B, public C {
};

int main() {
    D d;
    return 0;
}
