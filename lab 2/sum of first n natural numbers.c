#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int sum =sum+i;
    
        printf("the sum is %d \n", sum);
    }

    return 0;
}