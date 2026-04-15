#include <iostream>
using namespace std;

class HashTable {
private:
    struct HashNode {
        int key, value;
        bool occupied;
        HashNode() : occupied(false) {}
    };
    HashNode table[10];
    
    int hash(int key) { return key % 10; }
    
public:
    void insert(int key, int value) {
        int index = hash(key);
        table[index].key = key;
        table[index].value = value;
        table[index].occupied = true;
    }
    
    int get(int key) {
        int index = hash(key);
        return table[index].value;
    }
};

int main() {
    HashTable ht;
    ht.insert(1, 10);
    ht.insert(2, 20);
    cout << "Value at key 1: " << ht.get(1) << endl;
    return 0;
}
