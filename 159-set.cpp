#include <iostream>
using namespace std;

int main() {
    double d = 3.14;
    int i = static_cast<int>(d);
    cout << "Double: " << d << ", Int: " << i << endl;
    
    int a = 42;
    void* ptr = static_cast<void*>(&a);
    int* ptr2 = static_cast<int*>(ptr);
    cout << "Value: " << *ptr2 << endl;
    return 0;
}
