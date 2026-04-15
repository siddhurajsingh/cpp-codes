#include <iostream>
using namespace std;

template <typename T>
class Container {
private:
    T data;
public:
    Container(T d) : data(d) {}
    T getData() { return data; }
    void setData(T d) { data = d; }
    void display() { cout << "Data: " << data << endl; }
};

int main() {
    Container<int> c1(42);
    c1.display();
    Container<string> c2("Hello");
    c2.display();
    return 0;
}
