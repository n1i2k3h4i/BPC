#include <iostream>

class MyClass {
public:
    int number;

    MyClass(int n) {
        number = n;
        std::cout << "Constructor called with number: " << number << std::endl;
    }
};

int main() {

    MyClass obj(42);

    
    std::cout << "Number: " << obj.number << std::endl;

    return 0;
}

