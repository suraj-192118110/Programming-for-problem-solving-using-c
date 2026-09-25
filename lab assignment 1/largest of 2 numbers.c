#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a >b)
        printf("Largest = %d", a);
    else if (b >a)
        printf("Largest = %d", b);
    else
        printf("equal= %d");

    return 0;
}
