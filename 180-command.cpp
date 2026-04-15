#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    Employee(string n, double s) : name(n), salary(s) {}
    virtual double calculateBonus() = 0;
    virtual ~Employee() {}
};

class Developer : public Employee {
public:
    Developer(string n, double s) : Employee(n, s) {}
    double calculateBonus() override { return salary * 0.15; }
};

class Manager : public Employee {
public:
    Manager(string n, double s) : Employee(n, s) {}
    double calculateBonus() override { return salary * 0.20; }
};

int main() {
    Employee* emp1 = new Developer("John", 50000);
    Employee* emp2 = new Manager("Alice", 70000);
    cout << "Developer bonus: " << emp1->calculateBonus() << endl;
    cout << "Manager bonus: " << emp2->calculateBonus() << endl;
    return 0;
}
