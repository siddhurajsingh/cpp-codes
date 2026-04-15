#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}

    Node* getNext() {
        return this->next;
    }

    void setNext(Node* n) {
        this->next = n;
    }
};

int main() {
    Node n1(10);
    Node n2(20);
    n1.setNext(&n2);
    cout << "Next node data: " << n1.getNext()->data << endl;
    return 0;
}
