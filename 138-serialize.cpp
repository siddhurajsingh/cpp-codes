#include <iostream>
using namespace std;

class Bank {
private:
    static float interestRate;
    float balance;
public:
    Bank(float b) : balance(b) {}

    static void setInterestRate(float rate) {
        interestRate = rate;
    }

    float getInterest() {
        return balance * interestRate;
    }
};

float Bank::interestRate = 0.05;

int main() {
    Bank::setInterestRate(0.08);
    Bank b(1000);
    cout << "Interest: " << b.getInterest() << endl;
    return 0;
}
