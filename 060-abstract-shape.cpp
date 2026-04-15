#include <iostream>
using namespace std;

class Encoder {
public:
    virtual string encode(string data) = 0;
    virtual string decode(string data) = 0;
    virtual ~Encoder() {}
};

class Base64Encoder : public Encoder {
public:
    string encode(string data) override { return "base64_" + data; }
    string decode(string data) override { return data.substr(7); }
};

int main() {
    Base64Encoder b64;
    cout << "Encoded: " << b64.encode("hello") << endl;
    return 0;
}
