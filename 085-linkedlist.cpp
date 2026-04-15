#include <iostream>
using namespace std;

class Queue {
public:
    virtual void enqueue(int val) = 0;
    virtual int dequeue() = 0;
    virtual bool isEmpty() = 0;
    virtual ~Queue() {}
};

class LinkedListQueue : public Queue {
private:
    queue<int> q;
public:
    void enqueue(int val) override { q.push(val); }
    int dequeue() override { int val = q.front(); q.pop(); return val; }
    bool isEmpty() override { return q.empty(); }
};

int main() {
    LinkedListQueue qlq;
    qlq.enqueue(10);
    qlq.enqueue(20);
    cout << "Dequeued: " << qlq.dequeue() << endl;
    return 0;
}
