#include <iostream>
using namespace std;

class Report {
public:
    virtual void generate() = 0;
    virtual void display() = 0;
    virtual ~Report() {}
};

class PDFReport : public Report {
public:
    void generate() override { cout << "Generating PDF report..." << endl; }
    void display() override { cout << "Displaying PDF report" << endl; }
};

class ExcelReport : public Report {
public:
    void generate() override { cout << "Generating Excel report..." << endl; }
    void display() override { cout << "Displaying Excel report" << endl; }
};

int main() {
    PDFReport pdf;
    pdf.generate();
    pdf.display();
    return 0;
}
