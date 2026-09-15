#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i = i + 2;
    } while (i <= 100);
    printf("Sum of numbers from3-100 = %d", sum);

    return 0;
}
    