#include <iostream>
using namespace std;

class Chain {
public:
    virtual void handle(int level) = 0;
    virtual ~Chain() {}
};

class ConsoleLogger : public Chain {
public:
    void handle(int level) override { cout << "Console logging level " << level << endl; }
};

class FileLogger : public Chain {
public:
    void handle(int level) override { cout << "File logging level " << level << endl; }
};

int main() {
    ConsoleLogger cl;
    cl.handle(1);
    return 0;
}
