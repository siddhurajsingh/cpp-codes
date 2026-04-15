#include <iostream>
using namespace std;

class Colleague {
public:
    virtual void send(string message, Colleague* receiver) = 0;
    virtual void receive(string message) = 0;
    virtual ~Colleague() {}
};

class ConcreteColleague : public Colleague {
private:
    string name;
public:
    ConcreteColleague(string n) : name(n) {}
    void send(string message, Colleague* receiver) override {
        cout << name << " sending: " << message << endl;
    }
    void receive(string message) override {
        cout << name << " received: " << message << endl;
    }
};

int main() {
    ConcreteColleague c1("Alice"), c2("Bob");
    c1.send("Hello", &c2);
    c2.receive("Hello");
    return 0;
}
