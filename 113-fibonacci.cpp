#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;
public:
    Employee(int i, string n, double s) : id(i), name(n), salary(s) {}
    
    int getId() { return id; }
    string getName() { return name; }
    double getSalary() { return salary; }
    
    void raiseSalary(double percent) {
        salary += salary * percent / 100;
    }
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp(101, "John", 50000);
    emp.raiseSalary(10);
    emp.display();
    return 0;
}
