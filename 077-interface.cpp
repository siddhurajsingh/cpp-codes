#include <iostream>
using namespace std;

class Printer {
public:
    virtual void printDocument(string doc) = 0;
    virtual ~Printer() {}
};

class InkjetPrinter : public Printer {
public:
    void printDocument(string doc) override { cout << "Printing with inkjet: " << doc << endl; }
};

class LaserPrinter : public Printer {
public:
    void printDocument(string doc) override { cout << "Printing with laser: " << doc << endl; }
};

int main() {
    LaserPrinter lp;
    lp.printDocument("report.pdf");
    return 0;
}
