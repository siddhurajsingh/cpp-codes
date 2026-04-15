#include <iostream>
using namespace std;

class Authenticator {
public:
    virtual bool authenticate(string user, string pass) = 0;
    virtual ~Authenticator() {}
};

class OAuthAuthenticator : public Authenticator {
public:
    bool authenticate(string user, string pass) override {
        cout << "OAuth authentication for " << user << endl;
        return true;
    }
};

class BasicAuthenticator : public Authenticator {
public:
    bool authenticate(string user, string pass) override {
        cout << "Basic authentication for " << user << endl;
        return pass.length() >= 6;
    }
};

int main() {
    BasicAuthenticator ba;
    ba.authenticate("admin", "password123");
    return 0;
}
