#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() {}
};

class AnimalFactory {
public:
    static Animal* createAnimal(string type) {
        if (type == "Dog") {
            class Dog : public Animal {
            public:
                void speak() override { cout << "Woof" << endl; }
            };
            return new Dog();
        }
        return nullptr;
    }
};

int main() {
    Animal* animal = AnimalFactory::createAnimal("Dog");
    animal->speak();
    delete animal;
    return 0;
}
