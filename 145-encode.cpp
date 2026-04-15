#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    friend double distance(Point p1, Point p2);
};

double distance(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main() {
    Point p1(0, 0), p2(3, 4);
    cout << "Distance: " << distance(p1, p2) << endl;
    return 0;
}
