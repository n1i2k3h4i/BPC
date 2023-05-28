#include <iostream>

class MyNumber {
private:
    int number;

public:
    
    MyNumber(int num) {
        number = num;
    }

    
    MyNumber operator+(const MyNumber& other) {
        return MyNumber(number + other.number);
    }

   
    MyNumber operator-(const MyNumber& other) {
        return MyNumber(number - other.number);
    }

   
    MyNumber operator*(const MyNumber& other) {
        return MyNumber(number * other.number);
    }

   
    MyNumber operator/(const MyNumber& other) {
        return MyNumber(number / other.number);
    }

 
    bool operator==(const MyNumber& other) {
        return number == other.number;
    }


    bool operator<(const MyNumber& other) {
        return number < other.number;
    }


    bool operator>(const MyNumber& other) {
        return number > other.number;
    }

   
    friend std::ostream& operator<<(std::ostream& os, const MyNumber& num);
};


std::ostream& operator<<(std::ostream& os, const MyNumber& num) {
    os << num.number;
    return os;
}

int main() {
    MyNumber num1(5);
    MyNumber num2(3);

 
    MyNumber sum = num1 + num2;
    MyNumber difference = num1 - num2;
    MyNumber product = num1 * num2;
    MyNumber quotient = num1 / num2;

   
    bool isEqual = (num1 == num2);
    bool isLessThan = (num1 < num2);
    bool isGreaterThan = (num1 > num2);

    // Output the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Is Equal? " << isEqual << std::endl;
    std::cout << "Is Less Than? " << isLessThan << std::endl;
    std::cout << "Is Greater Than? " << isGreaterThan << std::endl;

    return 0;
}

