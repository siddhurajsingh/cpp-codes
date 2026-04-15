#include <iostream>
using namespace std;

class Set {
public:
    virtual void add(int val) = 0;
    virtual bool contains(int val) = 0;
    virtual int size() = 0;
    virtual ~Set() {}
};

class HashSet : public Set {
private:
    set<int> s;
public:
    void add(int val) override { s.insert(val); }
    bool contains(int val) override { return s.count(val) > 0; }
    int size() override { return s.size(); }
};

int main() {
    HashSet hs;
    hs.add(10);
    hs.add(20);
    cout << "Contains 10: " << hs.contains(10) << endl;
    cout << "Size: " << hs.size() << endl;
    return 0;
}
