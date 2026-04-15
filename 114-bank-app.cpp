#include <iostream>
using namespace std;

class Project {
private:
    string name;
    vector<string> tasks;
public:
    Project(string n) : name(n) {}
    
    void addTask(string task) { tasks.push_back(task); }
    
    void listTasks() {
        cout << "Project: " << name << endl;
        for (const auto& task : tasks) cout << "- " << task << endl;
    }
};

int main() {
    Project p("WebApp");
    p.addTask("Design UI");
    p.addTask("Code backend");
    p.addTask("Test");
    p.listTasks();
    return 0;
}
