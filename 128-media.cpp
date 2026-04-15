#include <iostream>
using namespace std;

class Array {
private:
    int arr[10];
public:
    Array() {
        for (int i = 0; i < 10; i++) arr[i] = 0;
    }

    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array a;
    a[0] = 5;
    a[1] = 10;
    cout << "a[0] = " << a[0] << ", a[1] = " << a[1] << endl;
    return 0;
}
