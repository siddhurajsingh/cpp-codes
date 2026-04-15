#include <iostream>
using namespace std;

class Concatenator {
public:
    string concat(int a, int b) {
        return to_string(a) + to_string(b);
    }

    string concat(string a, string b) {
        return a + b;
    }

    string concat(double a, double b) {
        return to_string(a) + to_string(b);
    }
};

int main() {
    Concatenator c;
    cout << c.concat(10, 20) << endl;
    cout << c.concat("Hello", "World") << endl;
    cout << c.concat(1.5, 2.3) << endl;
    return 0;
}
