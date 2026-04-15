#include <iostream>
using namespace std;

class Memento {
private:
    string state;
public:
    Memento(string s) : state(s) {}
    string getState() { return state; }
};

class Originator {
private:
    string state;
public:
    void setState(string s) { state = s; }
    Memento createMemento() { return Memento(state); }
    void restoreFromMemento(Memento m) { state = m.getState(); }
    string getState() { return state; }
};

int main() {
    Originator orig;
    orig.setState("State1");
    Memento m = orig.createMemento();
    orig.setState("State2");
    cout << "Current: " << orig.getState() << endl;
    orig.restoreFromMemento(m);
    cout << "Restored: " << orig.getState() << endl;
    return 0;
}
