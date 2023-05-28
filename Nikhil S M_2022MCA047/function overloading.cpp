#include <iostream>


void display(int num) {
    std::cout << "Integer: " << num << std::endl;
}


void display(float num) {
    std::cout << "Float: " << num << std::endl;
}


void display(const std::string& str) {
    std::cout << "String: " << str << std::endl;
}

int main() {
    int num1 = 42;
    float num2 = 3.14;
    std::string str = "Hello, World!";

    // Call the overloaded functions
    display(num1);
    display(num2);
    display(str);

    return 0;
}

