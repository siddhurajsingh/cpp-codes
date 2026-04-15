#include <iostream>
using namespace std;

class Currency {
public:
    virtual void displayValue() = 0;
    virtual ~Currency() {}
};

class Dollar : public Currency {
private:
    double amount;
public:
    Dollar(double a) : amount(a) {}
    void displayValue() override {
        cout << "Dollar: $" << amount << endl;
    }
};

class Euro : public Currency {
private:
    double amount;
public:
    Euro(double a) : amount(a) {}
    void displayValue() override {
        cout << "Euro: €" << amount << endl;
    }
};

int main() {
    Dollar d(100);
    Euro e(85);
    d.displayValue();
    e.displayValue();
    return 0;
}
