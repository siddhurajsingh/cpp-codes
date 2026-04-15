#include <iostream>
using namespace std;

class Expression {
public:
    virtual int evaluate() = 0;
    virtual ~Expression() {}
};

class NumberExpression : public Expression {
private:
    int value;
public:
    NumberExpression(int v) : value(v) {}
    int evaluate() override { return value; }
};

class AddExpression : public Expression {
private:
    Expression* left;
    Expression* right;
public:
    AddExpression(Expression* l, Expression* r) : left(l), right(r) {}
    int evaluate() override { return left->evaluate() + right->evaluate(); }
};

int main() {
    Expression* expr = new AddExpression(
        new NumberExpression(5),
        new NumberExpression(3)
    );
    cout << "Result: " << expr->evaluate() << endl;
    return 0;
}
