#include <iostream>
using namespace std;

class Observer {
public:
    virtual void update(string message) = 0;
    virtual ~Observer() {}
};

class ConcreteObserver : public Observer {
private:
    string name;
public:
    ConcreteObserver(string n) : name(n) {}
    void update(string message) override {
        cout << name << " received: " << message << endl;
    }
};

class Subject {
public:
    void notify(string message) {
        ConcreteObserver o1("Observer1");
        o1.update(message);
    }
};

int main() {
    Subject s;
    s.notify("Hello");
    return 0;
}
