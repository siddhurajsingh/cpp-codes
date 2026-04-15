#include <iostream>
using namespace std;

class Array {
private:
    int arr[100];
    int size;
public:
    Array() : size(0) {}
    
    void insert(int pos, int val) {
        for (int i = size; i > pos; i--) arr[i] = arr[i-1];
        arr[pos] = val;
        size++;
    }
    
    void deleteElement(int pos) {
        for (int i = pos; i < size - 1; i++) arr[i] = arr[i+1];
        size--;
    }
    
    void display() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Array a;
    a.insert(0, 10);
    a.insert(1, 20);
    a.insert(1, 15);
    a.display();
    return 0;
}
