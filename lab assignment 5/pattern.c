#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &N);

    if (N < 1) {
        return 0;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
