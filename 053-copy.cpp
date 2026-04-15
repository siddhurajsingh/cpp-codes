#include <iostream>
using namespace std;

class Filter {
public:
    virtual void apply() = 0;
    virtual ~Filter() {}
};

class SepiaFilter : public Filter {
public:
    void apply() override { cout << "Applying sepia filter..." << endl; }
};

class BlurFilter : public Filter {
public:
    void apply() override { cout << "Applying blur filter..." << endl; }
};

int main() {
    SepiaFilter sf;
    sf.apply();
    return 0;
}
