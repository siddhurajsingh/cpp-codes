#include <iostream>
using namespace std;

class Resource {
public:
    virtual void allocate() = 0;
    virtual void release() = 0;
    virtual ~Resource() {}
};

class MemoryResource : public Resource {
public:
    void allocate() override { cout << "Allocating memory..." << endl; }
    void release() override { cout << "Releasing memory..." << endl; }
};

class FileResource : public Resource {
public:
    void allocate() override { cout << "Opening file..." << endl; }
    void release() override { cout << "Closing file..." << endl; }
};

int main() {
    MemoryResource mr;
    mr.allocate();
    mr.release();
    return 0;
}
