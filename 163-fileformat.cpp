#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int: " << add(5, 3) << endl;
    cout << "Double: " << add(5.5, 2.3) << endl;
    cout << "String: " << add(string("Hello"), string(" World")) << endl;
    return 0;
}
