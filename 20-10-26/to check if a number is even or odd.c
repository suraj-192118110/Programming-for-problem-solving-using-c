#include<stdio.h>
int main()
{
    //if number is even the outputt is one 
    //if the number is odd the output is zero
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d\n",a%2==0);
    return 0;
}