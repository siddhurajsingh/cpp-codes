#include <iostream>
using namespace std;

class Account {
public:
    string accountNumber;
    double balance;

    Account(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void display() {
        cout << "Account: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    Account acc("123456", 5000.50);
    acc.display();
    return 0;
}
