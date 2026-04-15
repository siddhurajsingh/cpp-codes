#include <iostream>
using namespace std;

class Count {
public:
    int value;

    Count(int v = 0) : value(v) {}

    ~Count() {
        cout << "Object destroyed with value: " << value << endl;
    }
};

int main() {
    Count c1(5);
    return 0;
}
