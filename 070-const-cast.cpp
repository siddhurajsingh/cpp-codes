#include <iostream>
using namespace std;

class Service {
public:
    virtual void process() = 0;
    virtual string getStatus() = 0;
    virtual ~Service() {}
};

class PaymentService : public Service {
public:
    void process() override { cout << "Processing payment..." << endl; }
    string getStatus() override { return "Payment in progress"; }
};

int main() {
    PaymentService ps;
    ps.process();
    cout << ps.getStatus() << endl;
    return 0;
}
