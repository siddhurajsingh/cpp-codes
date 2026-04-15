#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}
    
    void enqueue(int val) {
        if (rear < 4) arr[++rear] = val;
    }
    
    int dequeue() {
        return arr[++front];
    }
    
    void display() {
        for (int i = front + 1; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.display();
    return 0;
}
