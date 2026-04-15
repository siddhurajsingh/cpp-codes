#include <iostream>
using namespace std;

class List {
public:
    virtual void add(int val) = 0;
    virtual void remove(int val) = 0;
    virtual int size() = 0;
    virtual ~List() {}
};

class ArrayList : public List {
private:
    vector<int> arr;
public:
    void add(int val) override { arr.push_back(val); }
    void remove(int val) override { arr.erase(remove(arr.begin(), arr.end(), val), arr.end()); }
    int size() override { return arr.size(); }
};

int main() {
    ArrayList al;
    al.add(10);
    al.add(20);
    cout << "Size: " << al.size() << endl;
    return 0;
}
