#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;
public:
    Employee(string n, float s) : name(n), salary(s) {}

    void display() {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

class Manager : public Employee {
public:
    Manager(string n, float s) : Employee(n, s) {}

    void showDetails() {
        display();
    }
};

int main() {
    Manager m("Bob", 50000);
    m.showDetails();
    return 0;
}
