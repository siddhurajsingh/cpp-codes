#include <iostream>
using namespace std;

class Box {
private:
    float width, height, depth;
public:
    Box(float w, float h, float d) : width(w), height(h), depth(d) {}

    friend float volume(Box b);
};

float volume(Box b) {
    return b.width * b.height * b.depth;
}

int main() {
    Box b(5, 4, 3);
    cout << "Volume: " << volume(b) << endl;
    return 0;
}
