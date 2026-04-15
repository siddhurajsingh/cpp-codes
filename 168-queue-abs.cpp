#include <iostream>
using namespace std;

class Member {
public:
    int value;
    Member(int v) : value(v) { cout << "Member constructed" << endl; }
};

class Container {
private:
    Member m;
public:
    Container(int v) : m(v) { cout << "Container constructed" << endl; }
};

int main() {
    Container c(42);
    return 0;
}
