#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    friend void display(Complex c);
};

void display(Complex c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

int main() {
    Complex c(3, 4);
    display(c);
    return 0;
}
