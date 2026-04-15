#include <iostream>
using namespace std;

class Subscription {
public:
    virtual void renew() = 0;
    virtual double getCost() = 0;
    virtual ~Subscription() {}
};

class MonthlySubscription : public Subscription {
public:
    void renew() override { cout << "Monthly subscription renewing" << endl; }
    double getCost() override { return 9.99; }
};

class YearlySubscription : public Subscription {
public:
    void renew() override { cout << "Yearly subscription renewing" << endl; }
    double getCost() override { return 99.99; }
};

int main() {
    YearlySubscription ys;
    cout << "Cost: $" << ys.getCost() << endl;
    ys.renew();
    return 0;
}
