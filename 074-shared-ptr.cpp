#include <iostream>
using namespace std;

class Handler {
public:
    virtual void processRequest(string request) = 0;
    virtual ~Handler() {}
};

class SpecialHandler : public Handler {
public:
    void processRequest(string request) override { cout << "Handling: " << request << endl; }
};

int main() {
    SpecialHandler sh;
    sh.processRequest("urgent");
    return 0;
}
