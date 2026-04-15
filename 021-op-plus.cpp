#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    return 0;
}
