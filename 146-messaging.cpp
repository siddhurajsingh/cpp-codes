#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}

    friend Number doubleValue(Number n);
};

Number doubleValue(Number n) {
    return Number(n.value * 2);
}

int main() {
    Number n(5);
    Number doubled = doubleValue(n);
    cout << "Doubled: " << doubled.value << endl;
    return 0;
}
