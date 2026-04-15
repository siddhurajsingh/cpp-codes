#include <iostream>
using namespace std;

namespace Math {
    int add(int a, int b) { return a + b; }
}

namespace Science {
    int add(int a, int b) { return 2 * (a + b); }
}

int main() {
    cout << "Math::add(5, 3) = " << Math::add(5, 3) << endl;
    cout << "Science::add(5, 3) = " << Science::add(5, 3) << endl;
    return 0;
}
