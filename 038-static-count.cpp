#include <iostream>
using namespace std;

class Food {
public:
    virtual void prepare() = 0;
    virtual ~Food() {}
};

class Pizza : public Food {
public:
    void prepare() override { cout << "Pizza is being prepared" << endl; }
};

class Burger : public Food {
public:
    void prepare() override { cout << "Burger is being prepared" << endl; }
};

class Restaurant {
private:
    Food* food;
public:
    Restaurant(Food* f) : food(f) {}
    void startPreparation() { food->prepare(); }
};

int main() {
    Pizza pizza;
    Restaurant rest(&pizza);
    rest.startPreparation();
    return 0;
}
