#include<stdio.h>
int main() 
{
    
    int arr[5];
    int sum = 0;
    
    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("The sum of the array elements is: %d\n", sum);
    
    return 0;
}