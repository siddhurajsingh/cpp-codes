#include <iostream>
using namespace std;

class Map {
public:
    virtual void put(string key, int value) = 0;
    virtual int get(string key) = 0;
    virtual bool containsKey(string key) = 0;
    virtual ~Map() {}
};

class HashMap : public Map {
private:
    map<string, int> data;
public:
    void put(string key, int value) override { data[key] = value; }
    int get(string key) override { return data[key]; }
    bool containsKey(string key) override { return data.count(key) > 0; }
};

int main() {
    HashMap hm;
    hm.put("age", 25);
    cout << "Age: " << hm.get("age") << endl;
    cout << "Has name: " << hm.containsKey("name") << endl;
    return 0;
}
