#include <iostream>
using namespace std;

class Bank {
public:
    virtual float getInterest() = 0;
    virtual ~Bank() {}
};

class SBI : public Bank {
public:
    float getInterest() {
        return 8.5;
    }
};

class ICICI : public Bank {
public:
    float getInterest() {
        return 7.2;
    }
};

int main() {
    Bank* b1 = new SBI();
    cout << "SBI Interest: " << b1->getInterest() << "%" << endl;
    delete b1;
    return 0;
}
