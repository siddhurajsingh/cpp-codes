#include <iostream>
using namespace std;

class State {
public:
    virtual void handle() = 0;
    virtual ~State() {}
};

class IdleState : public State {
public:
    void handle() override { cout << "System is idle" << endl; }
};

class ActiveState : public State {
public:
    void handle() override { cout << "System is active" << endl; }
};

class System {
private:
    State* state;
public:
    System(State* s) : state(s) {}
    void operate() { state->handle(); }
};

int main() {
    ActiveState as;
    System sys(&as);
    sys.operate();
    return 0;
}
