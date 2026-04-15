#include <iostream>
using namespace std;

class Document {
public:
    virtual void export_() = 0;
    virtual void import_() = 0;
    virtual ~Document() {}
};

class DocDocument : public Document {
public:
    void export_() override { cout << "Exporting to DOC format..." << endl; }
    void import_() override { cout << "Importing from DOC format..." << endl; }
};

class OdtDocument : public Document {
public:
    void export_() override { cout << "Exporting to ODT format..." << endl; }
    void import_() override { cout << "Importing from ODT format..." << endl; }
};

int main() {
    Document* doc = new DocDocument();
    doc->export_();
    doc->import_();
    return 0;
}
