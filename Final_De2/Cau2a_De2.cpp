#include <iostream>

class Animal {
public:
    virtual void eat() {
        std::cout << "The animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    void eat() override {
        std::cout << "The dog is eating bones." << std::endl;
    }
};

class Cat : public Animal {
public:
    void eat() override {
        std::cout << "The cat is eating fish." << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->eat(); // Output: The dog is eating bones.
    animal2->eat(); // Output: The cat is eating fish.

    delete animal1;
    delete animal2;

    return 0;
}