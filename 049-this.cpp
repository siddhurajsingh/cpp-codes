#include <iostream>
using namespace std;

class Validator {
public:
    virtual bool validate(string input) = 0;
    virtual ~Validator() {}
};

class EmailValidator : public Validator {
public:
    bool validate(string input) override { return input.find('@') != string::npos; }
};

class PhoneValidator : public Validator {
public:
    bool validate(string input) override { return input.length() == 10; }
};

int main() {
    EmailValidator ev;
    cout << "Valid email: " << ev.validate("test@example.com") << endl;
    return 0;
}
