#include <iostream>


class Shape {
public:
    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};


class Rectangle : public Shape {
public:
    void displayRectangle() {
        std::cout << "This is a rectangle." << std::endl;
    }
};


class Square : public Rectangle {
public:
    void displaySquare() {
        std::cout << "This is a square." << std::endl;
    }
};

int main() {
    Square square;

  
    square.display();
    square.displayRectangle();
    square.displaySquare();

    return 0;
}

