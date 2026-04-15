#include <iostream>
using namespace std;

class Number {
public:
    int value;
    
    Number(int v = 0) : value(v) {}

    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(10);
    Number neg = -n;
    neg.display();
    return 0;
}
