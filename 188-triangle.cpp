#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    int arr[10];
    int top;
public:
    Stack() : top(-1) {}
    
    void push(T val) {
        arr[++top] = val;
    }
    
    T pop() {
        return arr[top--];
    }
    
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Pop: " << s.pop() << endl;
    return 0;
}
