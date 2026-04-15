#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass* getThis() {
        return this;
    }

    void setValue(int v) {
        this->value = v;
    }

    int getValue() {
        return value;
    }
};

int main() {
    MyClass obj;
    obj.setValue(42);
    cout << "Value: " << obj.getValue() << endl;
    return 0;
}
