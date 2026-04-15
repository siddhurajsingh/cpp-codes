#include <iostream>
using namespace std;

class Cloneable {
public:
    virtual Cloneable* clone() = 0;
    virtual void display() = 0;
    virtual ~Cloneable() {}
};

class Student : public Cloneable {
private:
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    Cloneable* clone() override { return new Student(name, id); }
    void display() override { cout << id << ": " << name << endl; }
};

int main() {
    Student s("Alice", 1);
    Cloneable* cloned = s.clone();
    cloned->display();
    return 0;
}
