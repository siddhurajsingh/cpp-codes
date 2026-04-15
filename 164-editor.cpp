#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10, 20: " << findMax(10, 20) << endl;
    cout << "Max of 3.5, 2.1: " << findMax(3.5, 2.1) << endl;
    return 0;
}
