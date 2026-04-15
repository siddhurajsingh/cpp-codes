#include <iostream>
using namespace std;

template <typename T, typename U>
class Pair {
private:
    T first;
    U second;
public:
    Pair(T f, U s) : first(f), second(s) {}
    void display() { cout << "(" << first << ", " << second << ")" << endl; }
};

int main() {
    Pair<int, string> p(1, "One");
    p.display();
    return 0;
}
