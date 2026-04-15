#include <iostream>
using namespace std;

class ShoppingCart {
private:
    vector<pair<string, double>> items;
public:
    void addItem(string name, double price) {
        items.push_back(make_pair(name, price));
    }
    
    double getTotal() {
        double total = 0;
        for (const auto& item : items) total += item.second;
        return total;
    }
    
    void checkout() {
        cout << "Items in cart:" << endl;
        for (const auto& item : items) cout << item.first << ": $" << item.second << endl;
        cout << "Total: $" << getTotal() << endl;
    }
};

int main() {
    ShoppingCart cart;
    cart.addItem("Laptop", 999);
    cart.addItem("Mouse", 25);
    cart.checkout();
    return 0;
}
