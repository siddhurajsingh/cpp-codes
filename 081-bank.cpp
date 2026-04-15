#include <iostream>
using namespace std;

class Editor {
public:
    virtual void edit(string content) = 0;
    virtual void formatText() = 0;
    virtual ~Editor() {}
};

class RichTextEditor : public Editor {
public:
    void edit(string content) override { cout << "Editing in rich text: " << content << endl; }
    void formatText() override { cout << "Applying rich formatting..." << endl; }
};

class PlainTextEditor : public Editor {
public:
    void edit(string content) override { cout << "Editing in plain text: " << content << endl; }
    void formatText() override { cout << "No formatting" << endl; }
};

int main() {
    RichTextEditor rte;
    rte.edit("Hello World");
    rte.formatText();
    return 0;
}
