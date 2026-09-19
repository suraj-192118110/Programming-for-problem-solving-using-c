#include <stdio.h>
int main() {
    double num1, num2, sum;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1;
    }
    sum = num1 + num2;

    printf("Sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0;
}


