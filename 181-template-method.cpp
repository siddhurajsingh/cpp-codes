#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal sound" << endl; }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void speak() override { cout << "Woof" << endl; }
};

class Cat : public Animal {
public:
    void speak() override { cout << "Meow" << endl; }
};

void makeSound(Animal* animal) {
    animal->speak();
}

int main() {
    Dog d;
    Cat c;
    makeSound(&d);
    makeSound(&c);
    return 0;
}
