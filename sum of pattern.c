#include <stdio.h>

int main(){
{
    int i, n, denominator;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    sum = 1.0;
    for (i = 1; i <= n; i++) {
        denominator = 2 * i;
        sum += 1.0 / denominator;
    }

    printf("Sum of the series = %.6f\n", sum);
    }
    return 0;
}
