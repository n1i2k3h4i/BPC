#include <iostream>

class MyClass {
public:
    int number;

    // Default constructor
    MyClass() {
        number = 0;
        std::cout << "Default constructor called with number: " << number << std::endl;
    }
};

int main() {
    // Create an object of MyClass using the default constructor
    MyClass obj;

    // Access the number member variable
    std::cout << "Number: " << obj.number << std::endl;

    return 0;
}

