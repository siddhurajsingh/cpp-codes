#include <iostream>
using namespace std;

class Cache {
public:
    virtual void set(string key, string value) = 0;
    virtual string get(string key) = 0;
    virtual ~Cache() {}
};

class MemoryCache : public Cache {
private:
    map<string, string> data;
public:
    void set(string key, string value) override { data[key] = value; }
    string get(string key) override { return data[key]; }
};

int main() {
    MemoryCache cache;
    cache.set("user", "John");
    cout << "User: " << cache.get("user") << endl;
    return 0;
}
