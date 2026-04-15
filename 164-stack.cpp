#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
public:
    void setData(string n, int r) {
        name = n;
        rollNo = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.setData("Alice", 101);
    s.display();
    return 0;
}
