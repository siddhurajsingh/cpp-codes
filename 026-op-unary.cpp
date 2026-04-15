#include <iostream>
using namespace std;

class Bank {
public:
    virtual void processTransaction() = 0;
    virtual ~Bank() {}
};

class HDFC : public Bank {
public:
    void processTransaction() override {
        cout << "HDFC processing transaction" << endl;
    }
};

class Axis : public Bank {
public:
    void processTransaction() override {
        cout << "Axis processing transaction" << endl;
    }
};

int main() {
    Bank* bank = new HDFC();
    bank->processTransaction();
    delete bank;
    return 0;
}
