#include <iostream>

// Abstract class
class Shape {
public:
    // Pure virtual method
    virtual void draw() = 0;

    // Non-abstract method
    void displayArea() {
        std::cout << "Area: " << calculateArea() << std::endl;
    }

    // Pure virtual method
    virtual double calculateArea() = 0;
};

// Concrete subclass of Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }

    double calculateArea() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Shape* shape = new Shape(); // Error: Cannot instantiate an abstract class

    Shape* circle = new Circle(5.0);
    circle->draw(); // Output: Drawing a circle.
    circle->displayArea(); // Output: Area: 78.5

    delete circle;

    return 0;
}