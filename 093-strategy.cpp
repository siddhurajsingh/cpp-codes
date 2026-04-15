#include <iostream>
using namespace std;

class Adapter {
public:
    virtual void request() = 0;
    virtual ~Adapter() {}
};

class LegacySystem {
public:
    void legacyRequest() { cout << "Legacy system request" << endl; }
};

class AdapterImpl : public Adapter {
private:
    LegacySystem* legacy;
public:
    AdapterImpl(LegacySystem* l) : legacy(l) {}
    void request() override { legacy->legacyRequest(); }
};

int main() {
    LegacySystem ls;
    AdapterImpl adapter(&ls);
    adapter.request();
    return 0;
}
