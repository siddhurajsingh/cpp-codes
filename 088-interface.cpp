#include <iostream>
using namespace std;

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual string next() = 0;
    virtual ~Iterator() {}
};

class ListIterator : public Iterator {
private:
    vector<string> items;
    int current;
public:
    ListIterator(vector<string> i) : items(i), current(0) {}
    bool hasNext() override { return current < items.size(); }
    string next() override { return items[current++]; }
};

int main() {
    vector<string> items = {"A", "B", "C"};
    ListIterator li(items);
    while (li.hasNext()) cout << li.next() << " ";
    return 0;
}
