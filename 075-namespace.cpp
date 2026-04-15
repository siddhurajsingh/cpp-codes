#include <iostream>
using namespace std;

class Element {
public:
    virtual void accept() = 0;
    virtual ~Element() {}
};

class XMLElement : public Element {
public:
    void accept() override { cout << "XML element accepted" << endl; }
};

class HTMLElement : public Element {
public:
    void accept() override { cout << "HTML element accepted" << endl; }
};

int main() {
    XMLElement xe;
    xe.accept();
    return 0;
}
