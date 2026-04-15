#include <iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void pay(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid $" << amount << " via Credit Card" << endl;
    }
};

class DebitCard : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid $" << amount << " via Debit Card" << endl;
    }
};

class PaymentProcessor {
private:
    PaymentMethod* method;
public:
    PaymentProcessor(PaymentMethod* m) : method(m) {}
    void processPayment(double amount) { method->pay(amount); }
};

int main() {
    CreditCard cc;
    PaymentProcessor processor(&cc);
    processor.processPayment(100.50);
    return 0;
}
