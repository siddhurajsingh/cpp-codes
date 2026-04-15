#include <iostream>
using namespace std;

class Printer {
public:
    void print(int x) {
        cout << "Integer: " << x << endl;
    }

    void print(double x) {
        cout << "Double: " << x << endl;
    }

    void print(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Printer p;
    p.print(42);
    p.print(3.14);
    p.print("Hello");
    return 0;
}
