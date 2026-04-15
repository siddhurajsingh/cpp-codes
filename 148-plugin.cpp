#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {}

    const int& getValue() const {
        return value;
    }
};

int main() {
    MyClass obj(42);
    const int& val = obj.getValue();
    cout << "Value: " << val << endl;
    return 0;
}
