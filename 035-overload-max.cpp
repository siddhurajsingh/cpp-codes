#include <iostream>
using namespace std;

class NotificationService {
public:
    virtual void send(string message) = 0;
    virtual ~NotificationService() {}
};

class EmailNotification : public NotificationService {
public:
    void send(string message) override {
        cout << "Email sent: " << message << endl;
    }
};

class SMSNotification : public NotificationService {
public:
    void send(string message) override {
        cout << "SMS sent: " << message << endl;
    }
};

int main() {
    EmailNotification email;
    email.send("Hello!");
    return 0;
}
