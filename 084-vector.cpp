#include <iostream>
using namespace std;

class Permission {
public:
    virtual bool hasPermission(string action) = 0;
    virtual ~Permission() {}
};

class AdminPermission : public Permission {
public:
    bool hasPermission(string action) override { return true; }
};

class UserPermission : public Permission {
public:
    bool hasPermission(string action) override { return action != "delete"; }
};

int main() {
    UserPermission up;
    cout << "Can create: " << up.hasPermission("create") << endl;
    cout << "Can delete: " << up.hasPermission("delete") << endl;
    return 0;
}
