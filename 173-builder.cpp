#include <iostream>
using namespace std;

class Resource {
public:
    int* data;
    Resource(int size) { data = new int[size]; cout << "Resource allocated" << endl; }
    Resource(Resource&& other) : data(other.data) { other.data = nullptr; cout << "Resource moved" << endl; }
    ~Resource() { delete[] data; cout << "Resource deallocated" << endl; }
};

int main() {
    Resource r1(10);
    Resource r2 = move(r1);
    return 0;
}
