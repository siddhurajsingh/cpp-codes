#include <iostream>
using namespace std;

class Component {
public:
    virtual int operation() = 0;
    virtual ~Component() {}
};

class ConcreteComponent : public Component {
public:
    int operation() override { return 5; }
};

class Decorator : public Component {
protected:
    Component* component;
public:
    Decorator(Component* c) : component(c) {}
};

class AddDecorator : public Decorator {
public:
    AddDecorator(Component* c) : Decorator(c) {}
    int operation() override { return component->operation() + 3; }
};

int main() {
    Component* c = new ConcreteComponent();
    Component* decorated = new AddDecorator(c);
    cout << "Result: " << decorated->operation() << endl;
    return 0;
}
