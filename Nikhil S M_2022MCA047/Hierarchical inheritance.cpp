#include <iostream>

// Base class
class Shape {
public:
    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void displayCircle() {
        std::cout << "This is a circle." << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void displayRectangle() {
        std::cout << "This is a rectangle." << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    // Call member functions from the derived classes
    circle.display();
    circle.displayCircle();

    rectangle.display();
    rectangle.displayRectangle();

    return 0;
}

