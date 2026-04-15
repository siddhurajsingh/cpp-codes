#include <iostream>
using namespace std;

class Template {
public:
    void templateMethod() {
        step1();
        step2();
        step3();
    }
private:
    virtual void step1() = 0;
    virtual void step2() = 0;
    virtual void step3() = 0;
};

class ConcreteTemplate : public Template {
private:
    void step1() override { cout << "Step 1" << endl; }
    void step2() override { cout << "Step 2" << endl; }
    void step3() override { cout << "Step 3" << endl; }
};

int main() {
    ConcreteTemplate ct;
    ct.templateMethod();
    return 0;
}
