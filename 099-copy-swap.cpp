#include <iostream>
using namespace std;

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() {}
};

class ConcreteCommand : public Command {
private:
    string action;
public:
    ConcreteCommand(string a) : action(a) {}
    void execute() override { cout << "Executing: " << action << endl; }
};

class Invoker {
private:
    Command* command;
public:
    void setCommand(Command* cmd) { command = cmd; }
    void invoke() { command->execute(); }
};

int main() {
    ConcreteCommand cmd("Delete file");
    Invoker invoker;
    invoker.setCommand(&cmd);
    invoker.invoke();
    return 0;
}
