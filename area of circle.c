#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14159 * r * r;

    printf("Area of circle = %.2f", area);

    return 0;
}