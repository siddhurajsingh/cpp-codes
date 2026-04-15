#include <iostream>
using namespace std;

class Serializer {
public:
    virtual string serialize(string data) = 0;
    virtual string deserialize(string data) = 0;
    virtual ~Serializer() {}
};

class JSONSerializer : public Serializer {
public:
    string serialize(string data) override { return "{\"data\":\"" + data + "\"}"; }
    string deserialize(string data) override { return data; }
};

int main() {
    JSONSerializer js;
    cout << js.serialize("test") << endl;
    return 0;
}
