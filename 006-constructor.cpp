#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        name = "Unknown";
        age = 0;
    }
};

int main() {
    Person p;
    cout << "Name: " << p.name << ", Age: " << p.age << endl;
    return 0;
}
