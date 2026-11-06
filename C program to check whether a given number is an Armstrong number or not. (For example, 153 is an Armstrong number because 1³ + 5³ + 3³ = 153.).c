#include<stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }
    else if (number == 0) {
        printf("0 is an Armstrong number.\n");
        return 0;
    }
    else if (number<10) {
        printf("%d is an Armstrong number.\n", number);
        return 0;
    } 
    else if (number>999) {
        printf("Please enter a number with 3 digits or less.\n");
        return 0;
    }
    else {
        originalNumber = number;
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += remainder * remainder * remainder;
            originalNumber /= 10;
        }
        if (result == number)
            printf("%d is an Armstrong number.\n", number);
        else
            printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}