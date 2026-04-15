#include <iostream>
using namespace std;

class Document {
public:
    virtual void print() = 0;
    virtual void save() = 0;
    virtual ~Document() {}
};

class PDFDocument : public Document {
public:
    void print() override { cout << "Printing PDF..." << endl; }
    void save() override { cout << "Saving PDF..." << endl; }
};

class WordDocument : public Document {
public:
    void print() override { cout << "Printing Word document..." << endl; }
    void save() override { cout << "Saving Word document..." << endl; }
};

int main() {
    PDFDocument pdf;
    pdf.print();
    pdf.save();
    return 0;
}
