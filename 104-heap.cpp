#include <iostream>
using namespace std;

class Context {
private:
    string state;
public:
    void Request() { cout << "Context request with state: " << state << endl; }
};

class State {
public:
    virtual void Handle(Context* context) = 0;
    virtual ~State() {}
};

class ConcreteStateA : public State {
public:
    void Handle(Context* context) override { cout << "State A handling" << endl; }
};

class ConcreteStateB : public State {
public:
    void Handle(Context* context) override { cout << "State B handling" << endl; }
};

int main() {
    Context ctx;
    ctx.Request();
    return 0;
}
