#include <iostream>
using namespace std;

class SecuritySystem {
public:
    virtual bool authenticate() = 0;
    virtual void logAccess() = 0;
    virtual ~SecuritySystem() {}
};

class BiometricSecurity : public SecuritySystem {
public:
    bool authenticate() override { cout << "Biometric authentication" << endl; return true; }
    void logAccess() override { cout << "Access logged via biometrics" << endl; }
};

class PasswordSecurity : public SecuritySystem {
public:
    bool authenticate() override { cout << "Password authentication" << endl; return true; }
    void logAccess() override { cout << "Access logged via password" << endl; }
};

int main() {
    BiometricSecurity bs;
    bs.authenticate();
    bs.logAccess();
    return 0;
}
