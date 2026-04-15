#include <iostream>
using namespace std;

class Subject {
public:
    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify() = 0;
    virtual ~Subject() {}
};

class ConcreteSubject : public Subject {
private:
    vector<Observer*> observers;
public:
    void attach(Observer* observer) override { observers.push_back(observer); }
    void detach(Observer* observer) override {}
    void notify() override {
        for (auto observer : observers) {
            observer->update();
        }
    }
};

class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() {}
};

class ConcreteObserver : public Observer {
public:
    void update() override { cout << "Observer notified" << endl; }
};

int main() {
    ConcreteSubject subject;
    ConcreteObserver observer;
    subject.attach(&observer);
    subject.notify();
    return 0;
}
