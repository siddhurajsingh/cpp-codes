#include <iostream>
using namespace std;

namespace A {
    int x = 10;
    namespace B {
        int x = 20;
    }
}

int main() {
    cout << "A::x = " << A::x << endl;
    cout << "A::B::x = " << A::B::x << endl;
    return 0;
}
