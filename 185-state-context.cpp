#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;
    int size;
    int capacity;
public:
    Vector() : arr(nullptr), size(0), capacity(0) {}
    
    void push_back(int val) {
        if (size == capacity) {
            capacity = (capacity == 0) ? 1 : capacity * 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; i++) newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = val;
    }
    
    void display() const {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
    
    ~Vector() { delete[] arr; }
};

int main() {
    Vector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.display();
    return 0;
}
