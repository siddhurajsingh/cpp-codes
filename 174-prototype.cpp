#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1(new int(42));
    cout << "Value: " << *ptr1 << endl;
    
    unique_ptr<int> ptr2 = move(ptr1);
    cout << "Moved value: " << *ptr2 << endl;
    return 0;
}
