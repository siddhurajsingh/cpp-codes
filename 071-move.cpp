#include <iostream>
using namespace std;

class Repository {
public:
    virtual void save(string data) = 0;
    virtual string retrieve(int id) = 0;
    virtual void delete(int id) = 0;
    virtual ~Repository() {}
};

class UserRepository : public Repository {
public:
    void save(string data) override { cout << "Saving user: " << data << endl; }
    string retrieve(int id) override { return "User " + to_string(id); }
    void delete(int id) override { cout << "Deleting user " << id << endl; }
};

int main() {
    UserRepository ur;
    ur.save("John");
    cout << ur.retrieve(1) << endl;
    return 0;
}
