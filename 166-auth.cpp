#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[10];
    int top;
public:
    Stack() : top(-1) {}
    void push(T val) { arr[++top] = val; }
    T pop() { return arr[top--]; }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    return 0;
}
