#include<stdio.h>
int main()
{
    float radius,pi;
    pi=3.14159;
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is: %.3f",pi*radius*radius);
    return 0;
}