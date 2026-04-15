#include <iostream>
using namespace std;

class Strategy {
public:
    virtual int execute(int a, int b) = 0;
    virtual ~Strategy() {}
};

class AddStrategy : public Strategy {
public:
    int execute(int a, int b) override { return a + b; }
};

class MultiplyStrategy : public Strategy {
public:
    int execute(int a, int b) override { return a * b; }
};

class Context {
private:
    Strategy* strategy;
public:
    Context(Strategy* s) : strategy(s) {}
    int perform(int a, int b) { return strategy->execute(a, b); }
};

int main() {
    AddStrategy add;
    Context ctx(&add);
    cout << "5 + 3 = " << ctx.perform(5, 3) << endl;
    return 0;
}
