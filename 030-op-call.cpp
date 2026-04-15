#include <iostream>
using namespace std;

class Weapon {
public:
    virtual void shoot() = 0;
    virtual ~Weapon() {}
};

class Gun : public Weapon {
public:
    void shoot() override {
        cout << "Bang! Gun fired" << endl;
    }
};

class Knife : public Weapon {
public:
    void shoot() override {
        cout << "Slash! Knife used" << endl;
    }
};

class Player {
private:
    Weapon* weapon;
public:
    Player(Weapon* w) : weapon(w) {}
    void attack() { weapon->shoot(); }
};

int main() {
    Gun gun;
    Player player(&gun);
    player.attack();
    return 0;
}
