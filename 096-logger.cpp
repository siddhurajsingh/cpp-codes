#include <iostream>
using namespace std;

class Data {
public:
    int* ptr;
    Data(int val) { ptr = new int(val); }
    Data(Data&& other) : ptr(other.ptr) { other.ptr = nullptr; }
    ~Data() { delete ptr; }
    void display() { if(ptr) cout << "Value: " << *ptr << endl; }
};

int main() {
    Data d1(42);
    Data d2 = move(d1);
    d2.display();
    return 0;
}
