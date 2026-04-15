#include <iostream>
using namespace std;

class Component {
public:
    virtual void operation() = 0;
    virtual ~Component() {}
};

class Leaf : public Component {
public:
    void operation() override { cout << "Leaf operation" << endl; }
};

class Composite : public Component {
private:
    vector<Component*> children;
public:
    void add(Component* child) { children.push_back(child); }
    void operation() override {
        cout << "Composite operation" << endl;
        for (auto& child : children) child->operation();
    }
};

int main() {
    Composite comp;
    comp.add(new Leaf());
    comp.add(new Leaf());
    comp.operation();
    return 0;
}
