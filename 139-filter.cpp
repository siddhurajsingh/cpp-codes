#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    static int employeeCount;
public:
    Employee(string n) : name(n) { employeeCount++; }

    static int getEmployeeCount() {
        return employeeCount;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int Employee::employeeCount = 0;

int main() {
    Employee e1("Alice");
    Employee e2("Bob");
    cout << "Total employees: " << Employee::getEmployeeCount() << endl;
    return 0;
}
