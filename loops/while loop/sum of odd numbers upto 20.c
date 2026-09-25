#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 20) {
        sum = sum + i;
        i = i + 2;
    }

    printf("Sum of odd numbers up to 20 = %d", sum);

    return 0;
}
