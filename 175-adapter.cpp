#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) { cout << "MyClass constructed" << endl; }
    ~MyClass() { cout << "MyClass destructed" << endl; }
};

int main() {
    shared_ptr<MyClass> ptr1(new MyClass(42));
    shared_ptr<MyClass> ptr2 = ptr1;
    cout << "Reference count: " << ptr1.use_count() << endl;
    return 0;
}
