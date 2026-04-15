#include <iostream>
using namespace std;

class Recursion {
public:
    static int factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }
};

int main() {
    cout << "5! = " << Recursion::factorial(5) << endl;
    return 0;
}
