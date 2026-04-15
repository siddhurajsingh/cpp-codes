#include <iostream>
using namespace std;

class MaxFinder {
public:
    int getMax(int a, int b) {
        return (a > b) ? a : b;
    }

    double getMax(double a, double b) {
        return (a > b) ? a : b;
    }

    int getMax(int a, int b, int c) {
        return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    }
};

int main() {
    MaxFinder mf;
    cout << mf.getMax(5, 10) << endl;
    cout << mf.getMax(5.5, 3.2) << endl;
    cout << mf.getMax(10, 20, 15) << endl;
    return 0;
}
