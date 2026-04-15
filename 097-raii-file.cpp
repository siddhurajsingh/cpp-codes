#include <iostream>
using namespace std;

class Flyweight {
public:
    virtual void operation(string extrinsicState) = 0;
    virtual ~Flyweight() {}
};

class ConcreteFlyweight : public Flyweight {
private:
    string intrinsicState;
public:
    ConcreteFlyweight(string state) : intrinsicState(state) {}
    void operation(string extrinsicState) override {
        cout << "Intrinsic: " << intrinsicState << ", Extrinsic: " << extrinsicState << endl;
    }
};

int main() {
    ConcreteFlyweight fw("SharedData");
    fw.operation("UniqueData1");
    fw.operation("UniqueData2");
    return 0;
}
