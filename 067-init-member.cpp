#include <iostream>
using namespace std;

class Model {
public:
    virtual void load() = 0;
    virtual void save() = 0;
    virtual ~Model() {}
};

class UserModel : public Model {
public:
    void load() override { cout << "Loading user model..." << endl; }
    void save() override { cout << "Saving user model..." << endl; }
};

class ProductModel : public Model {
public:
    void load() override { cout << "Loading product model..." << endl; }
    void save() override { cout << "Saving product model..." << endl; }
};

int main() {
    UserModel um;
    um.load();
    um.save();
    return 0;
}
