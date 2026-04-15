#include <iostream>
using namespace std;

class Resource {
public:
    int* data;

    Resource(int size) {
        data = new int[size];
    }

    ~Resource() {
        delete[] data;
        cout << "Destructor called" << endl;
    }
};

int main() {
    Resource r(10);
    return 0;
}
