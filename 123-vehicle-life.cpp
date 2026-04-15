#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;

    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    bool operator>(const Distance& d) {
        return (feet > d.feet) || (feet == d.feet && inches > d.inches);
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 9), d2(5, 6);
    if (d1 > d2) cout << "d1 is greater" << endl;
    return 0;
}
