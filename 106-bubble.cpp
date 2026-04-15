#include <iostream>
using namespace std;

class Director {
public:
    virtual void construct() = 0;
    virtual ~Director() {}
};

class HouseBuilder {
public:
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildDoors() = 0;
    virtual ~HouseBuilder() {}
};

class ConcreteHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override { cout << "Building walls" << endl; }
    void buildRoof() override { cout << "Building roof" << endl; }
    void buildDoors() override { cout << "Building doors" << endl; }
};

class HouseDirector : public Director {
private:
    HouseBuilder* builder;
public:
    HouseDirector(HouseBuilder* b) : builder(b) {}
    void construct() override {
        builder->buildWalls();
        builder->buildRoof();
        builder->buildDoors();
    }
};

int main() {
    ConcreteHouseBuilder builder;
    HouseDirector director(&builder);
    director.construct();
    return 0;
}
