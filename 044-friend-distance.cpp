#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
    virtual void withdraw(double amount) = 0;
    virtual void deposit(double amount) = 0;
    virtual double getBalance() = 0;
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double b) : Account(b) {}
    void withdraw(double amount) override { balance -= amount; }
    void deposit(double amount) override { balance += amount; }
    double getBalance() override { return balance; }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(double b) : Account(b) {}
    void withdraw(double amount) override { balance -= amount; }
    void deposit(double amount) override { balance += amount; }
    double getBalance() override { return balance; }
};

int main() {
    SavingsAccount sa(5000);
    sa.deposit(1000);
    cout << "Balance: " << sa.getBalance() << endl;
    return 0;
}
