#include <iostream>

class MyClass {
public:
    int number;

    
    MyClass() {
        number = 0;
    }

   
    MyClass(int n) {
        number = n;
    }

   
    MyClass multiply(int factor) {
        MyClass result(number * factor);
        return result;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2 = obj1.multiply(3);

    std::cout << "Number of obj2: " << obj2.number << std::endl;

    return 0;
}

