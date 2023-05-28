#include <stdio.h>

int main() {
    int number = 6; 

    while (number <= 100) {
        if (number % 2 == 0 && number % 3 == 0) {
            printf("Pass\n");
        } else if (number % 2 == 0) {
            printf("%d (divisible by 2)\n", number);
        } else if (number % 3 == 0) {
            printf("%d (divisible by 3)\n", number);
        }
        number++;
    }

    return 0;
}

