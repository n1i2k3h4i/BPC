#include <iostream>


class Shape {
public:
    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};


class Color {
public:
    void displayColor() {
        std::cout << "The color is blue." << std::endl;
    }
};


class Circle : public Shape, public Color {
public:
    void displayCircle() {
        std::cout << "This is a circle." << std::endl;
    }
};

int main() {
    Circle circle;

    
    circle.display();
    circle.displayColor();
    circle.displayCircle();

    return 0;
}

