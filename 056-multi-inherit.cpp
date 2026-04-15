#include <iostream>
using namespace std;

class Notification {
public:
    virtual void show() = 0;
    virtual ~Notification() {}
};

class ToastNotification : public Notification {
public:
    void show() override { cout << "Toast notification shown at bottom" << endl; }
};

class DialogNotification : public Notification {
public:
    void show() override { cout << "Dialog notification shown in center" << endl; }
};

int main() {
    ToastNotification tn;
    tn.show();
    return 0;
}
