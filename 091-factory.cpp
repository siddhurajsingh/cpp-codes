#include <iostream>
using namespace std;

class Builder {
public:
    virtual Builder* withName(string name) = 0;
    virtual Builder* withAge(int age) = 0;
    virtual string build() = 0;
    virtual ~Builder() {}
};

class UserBuilder : public Builder {
private:
    string name;
    int age;
public:
    UserBuilder* withName(string n) override { name = n; return this; }
    UserBuilder* withAge(int a) override { age = a; return this; }
    string build() override { return name + " (" + to_string(age) + ")"; }
};

int main() {
    UserBuilder ub;
    cout << ub.withName("John")->withAge(30)->build() << endl;
    return 0;
}
