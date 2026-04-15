#include <iostream>
using namespace std;

class Compress {
public:
    virtual void compress(string file) = 0;
    virtual void decompress(string file) = 0;
    virtual ~Compress() {}
};

class ZIPCompression : public Compress {
public:
    void compress(string file) override { cout << "Compressing with ZIP: " << file << endl; }
    void decompress(string file) override { cout << "Decompressing ZIP: " << file << endl; }
};

class RAR Compression : public Compress {
public:
    void compress(string file) override { cout << "Compressing with RAR: " << file << endl; }
    void decompress(string file) override { cout << "Decompressing RAR: " << file << endl; }
};

int main() {
    ZIPCompression zc;
    zc.compress("archive.zip");
    return 0;
}
