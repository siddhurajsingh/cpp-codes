#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) { cout << "Constructor called" << endl; }
    MyClass(const MyClass& obj) { x = obj.x; cout << "Copy constructor called" << endl; }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    cout << "obj2.x = " << obj2.x << endl;
    return 0;
}
