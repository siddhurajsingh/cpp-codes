#include <iostream>
using namespace std;

class Function {
public:
    int operator()(int x) {
        return x * x;
    }
};

int main() {
    Function f;
    cout << "f(5) = " << f(5) << endl;
    cout << "f(10) = " << f(10) << endl;
    return 0;
}
