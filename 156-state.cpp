#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) { arr = new int[s]; }
    Array(const Array& a) : size(a.size) { arr = new int[size]; for(int i=0; i<size; i++) arr[i] = a.arr[i]; }
    void display() { for(int i=0; i<size; i++) cout << arr[i] << " "; cout << endl; }
    ~Array() { delete[] arr; }
};

int main() {
    Array a1(5);
    Array a2 = a1;
    a2.display();
    return 0;
}
