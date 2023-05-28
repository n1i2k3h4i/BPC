#include <iostream>

class MyClass {
public:
    int number;

    MyClass() {
        number = 0;
        std::cout << "Default constructor called with number: " << number << std::endl;
    }

    MyClass(int n) {
        number = n;
        std::cout << "Parameterized constructor called with number: " << number << std::endl;
    }

    MyClass(const MyClass& other) {
        number = other.number;
        std::cout << "Copy constructor called with number: " << number << std::endl;
    }
};


