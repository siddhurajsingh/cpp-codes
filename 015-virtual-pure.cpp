#include <iostream>
using namespace std;

class Heap {
private:
    int arr[100];
    int size;
    
    void heapify(int index) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        
        if (left < size && arr[left] < arr[smallest]) smallest = left;
        if (right < size && arr[right] < arr[smallest]) smallest = right;
        
        if (smallest != index) {
            swap(arr[index], arr[smallest]);
            heapify(smallest);
        }
    }
    
public:
    Heap() : size(0) {}
    
    void insert(int val) {
        arr[size++] = val;
        int index = size - 1;
        while (index > 0 && arr[index] < arr[(index - 1) / 2]) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }
};

int main() {
    Heap h;
    h.insert(10);
    h.insert(5);
    h.insert(20);
    return 0;
}
