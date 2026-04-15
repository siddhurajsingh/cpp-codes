#include <iostream>
using namespace std;

class Document {
public:
    virtual void open() = 0;
    virtual void close() = 0;
    virtual ~Document() {}
};

class PDFDocument : public Document {
public:
    void open() override { cout << "Opening PDF" << endl; }
    void close() override { cout << "Closing PDF" << endl; }
};

class DocumentHandler {
private:
    Document* doc;
public:
    DocumentHandler(Document* d) : doc(d) {}
    void handle() {
        doc->open();
        cout << "Processing document" << endl;
        doc->close();
    }
};

int main() {
    PDFDocument pdf;
    DocumentHandler handler(&pdf);
    handler.handle();
    return 0;
}
