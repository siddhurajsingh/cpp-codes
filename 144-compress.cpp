#include <iostream>
using namespace std;

class A;

class B {
public:
    void displayA(A& a);
};

class A {
private:
    int value;
public:
    A(int v) : value(v) {}
    friend class B;
};

void B::displayA(A& a) {
    cout << "Value of A: " << a.value << endl;
}

int main() {
    A a(42);
    B b;
    b.displayA(a);
    return 0;
}
