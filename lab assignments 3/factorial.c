#include<stdio.h>
int main()
{
    int n, fac;
    fac=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial of %d is %d",n,fac);
}