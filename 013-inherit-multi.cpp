#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
    
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;
    
    Node* insert(Node* node, int data) {
        if (!node) return new Node(data);
        if (data < node->data) node->left = insert(node->left, data);
        else node->right = insert(node->right, data);
        return node;
    }
    
public:
    BinarySearchTree() : root(nullptr) {}
    
    void insert(int data) {
        root = insert(root, data);
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    return 0;
}
