#include<stdio.h>
int main()
{
    int i,n;
        printf("Enter the number of rows %d: ", i+1);
        scanf("%d", &n);
    for(int i=0;i<n;i++)
    { 
        for (int j=0;j<3;j++){
            printf("*");
        }
        printf("\n");
    }
}