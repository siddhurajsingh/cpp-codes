#include <iostream>
using namespace std;

class Proxy {
public:
    virtual void request() = 0;
    virtual ~Proxy() {}
};

class RealSubject : public Proxy {
public:
    void request() override { cout << "RealSubject request" << endl; }
};

class ProxySubject : public Proxy {
private:
    RealSubject* subject;
public:
    void request() override {
        cout << "Proxy: Before request" << endl;
        if (!subject) subject = new RealSubject();
        subject->request();
        cout << "Proxy: After request" << endl;
    }
};

int main() {
    ProxySubject proxy;
    proxy.request();
    return 0;
}
