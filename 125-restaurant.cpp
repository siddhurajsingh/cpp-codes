#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter(int c = 0) : count(c) {}

    Counter operator++() {  // Pre-increment
        return Counter(++count);
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c(5);
    ++c;
    c.display();
    return 0;
}
