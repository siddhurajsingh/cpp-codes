#include <iostream>
using namespace std;

class Event {
public:
    virtual void trigger() = 0;
    virtual ~Event() {}
};

class MouseClickEvent : public Event {
public:
    void trigger() override { cout << "Mouse click event triggered" << endl; }
};

class KeyPressEvent : public Event {
public:
    void trigger() override { cout << "Key press event triggered" << endl; }
};

int main() {
    MouseClickEvent mce;
    mce.trigger();
    return 0;
}
