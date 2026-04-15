#include <iostream>
using namespace std;

class Prototype {
public:
    virtual Prototype* clone() = 0;
    virtual void display() = 0;
    virtual ~Prototype() {}
};

class Shape : public Prototype {
private:
    string type;
public:
    Shape(string t) : type(t) {}
    Prototype* clone() override { return new Shape(type); }
    void display() override { cout << "Shape: " << type << endl; }
};

int main() {
    Shape s("Circle");
    Prototype* cloned = s.clone();
    cloned->display();
    return 0;
}
