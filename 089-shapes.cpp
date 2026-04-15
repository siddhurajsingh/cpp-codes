#include <iostream>
using namespace std;

class Interpreter {
public:
    virtual void interpret() = 0;
    virtual ~Interpreter() {}
};

class VariableExpression : public Interpreter {
private:
    string variable;
public:
    VariableExpression(string v) : variable(v) {}
    void interpret() override { cout << "Interpreting: " << variable << endl; }
};

int main() {
    VariableExpression ve("x");
    ve.interpret();
    return 0;
}
