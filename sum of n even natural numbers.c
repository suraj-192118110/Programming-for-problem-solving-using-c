#include <stdio.h>
int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 2; i <= n; i = i + 2) {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);

    return 0;
}
