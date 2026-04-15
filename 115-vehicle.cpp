#include <iostream>
using namespace std;

class Inventory {
private:
    map<string, int> items;
public:
    void addItem(string name, int quantity) { items[name] += quantity; }
    
    void removeItem(string name, int quantity) {
        if (items[name] >= quantity) items[name] -= quantity;
    }
    
    void display() {
        for (const auto& item : items) {
            cout << item.first << ": " << item.second << endl;
        }
    }
};

int main() {
    Inventory inv;
    inv.addItem("Apple", 10);
    inv.addItem("Orange", 5);
    inv.removeItem("Apple", 3);
    inv.display();
    return 0;
}
