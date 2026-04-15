#include <iostream>
using namespace std;

class FileFormat {
public:
    virtual void read(string filename) = 0;
    virtual void write(string filename) = 0;
    virtual ~FileFormat() {}
};

class ImageFormat : public FileFormat {
public:
    void read(string filename) override { cout << "Reading image: " << filename << endl; }
    void write(string filename) override { cout << "Writing image: " << filename << endl; }
};

class TextFormat : public FileFormat {
public:
    void read(string filename) override { cout << "Reading text: " << filename << endl; }
    void write(string filename) override { cout << "Writing text: " << filename << endl; }
};

int main() {
    ImageFormat imf;
    imf.read("photo.jpg");
    imf.write("output.jpg");
    return 0;
}
