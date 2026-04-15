#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
public:
    Student(string n, int r) : name(n), rollNo(r) {}

    void display() const {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    const Student s("Alice", 101);
    s.display();
    return 0;
}
