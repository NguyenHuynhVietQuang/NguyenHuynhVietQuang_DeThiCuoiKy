#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Constructor of Base" << std::endl;
    }
    virtual ~Base() {
        std::cout << "Destructor of Base" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Constructor of Derived" << std::endl;
    }
    ~Derived() {
        std::cout << "Destructor of Derived" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr;
    return 0;
}