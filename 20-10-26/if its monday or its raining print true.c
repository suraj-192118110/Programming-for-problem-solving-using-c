#include<stdio.h>
int main()
{
    int day,rain;
    printf("Enter the day of the week (1 for Monday, 0 for other days): ");
    scanf("%d",&day);
    printf("Is it raining? (1 for Yes, 0 for No): ");
    scanf("%d",&rain);
    printf("%d\n",day==1 || rain==1);
    return 0;
}