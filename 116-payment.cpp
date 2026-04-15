#include <iostream>
using namespace std;

class Student_Record {
private:
    int id;
    string name;
    vector<double> grades;
public:
    Student_Record(int i, string n) : id(i), name(n) {}
    
    void addGrade(double grade) { grades.push_back(grade); }
    
    double averageGrade() {
        double sum = 0;
        for (double grade : grades) sum += grade;
        return sum / grades.size();
    }
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Average: " << averageGrade() << endl;
    }
};

int main() {
    Student_Record sr(1, "Alice");
    sr.addGrade(85);
    sr.addGrade(90);
    sr.addGrade(88);
    sr.display();
    return 0;
}
