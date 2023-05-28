#include <stdio.h>

int main() {
    int limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}

