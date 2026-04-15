#include <iostream>
using namespace std;

class Messaging {
public:
    virtual void sendMessage(string to, string message) = 0;
    virtual void receiveMessage() = 0;
    virtual ~Messaging() {}
};

class InstantMessaging : public Messaging {
public:
    void sendMessage(string to, string message) override { cout << "Sending to " << to << ": " << message << endl; }
    void receiveMessage() override { cout << "Receiving message..." << endl; }
};

int main() {
    InstantMessaging im;
    im.sendMessage("Alice", "Hi there!");
    im.receiveMessage();
    return 0;
}
