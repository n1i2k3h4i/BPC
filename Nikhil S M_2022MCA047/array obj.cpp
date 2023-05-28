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
};

int main() {
    const int size = 5;
    MyClass myArray[size];

    
    for (int i = 0; i < size; i++) {
        myArray[i] = MyClass(i + 1);
    }

    
    for (int i = 0; i < size; i++) {
        std::cout << "Number at index " << i << ": " << myArray[i].number << std::endl;
    }

    return 0;
}

