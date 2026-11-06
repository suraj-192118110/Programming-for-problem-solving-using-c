#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d", first);
        if (i < n - 1)
            printf(" ");

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}