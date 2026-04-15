#include <iostream>
using namespace std;

class Exporter {
public:
    virtual void export(string data) = 0;
    virtual ~Exporter() {}
};

class CSVExporter : public Exporter {
public:
    void export(string data) override { cout << "Exporting to CSV: " << data << endl; }
};

class JSONExporter : public Exporter {
public:
    void export(string data) override { cout << "Exporting to JSON: " << data << endl; }
};

int main() {
    JSONExporter je;
    je.export("{\"name\":\"John\"}");
    return 0;
}
