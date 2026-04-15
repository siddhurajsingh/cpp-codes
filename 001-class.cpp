#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float gpa;

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.gpa = 3.8;
    s1.display();
    return 0;
}
