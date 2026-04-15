#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float gpa;
public:
    Student(int i, string n, float g) : id(i), name(n), gpa(g) {}
    
    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
    }
    
    bool operator<(const Student& other) const {
        return gpa > other.gpa;
    }
};

int main() {
    Student s1(1, "Alice", 3.8);
    Student s2(2, "Bob", 3.5);
    if (s1 < s2) cout << "s1 has higher GPA" << endl;
    s1.display();
    s2.display();
    return 0;
}
