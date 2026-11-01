#include<stdio.h>
int main()
{
    //if its sunday and its snowing print true
    int day,snow;
    printf("Enter the day of the week (1 for Sunday, 0 for other days): ");
    scanf("%d",&day);
    printf("Is it snowing? (1 for Yes, 0 for No): ");
    scanf("%d",&snow);
    printf("%d\n",day==1 && snow==1);
    return 0;
}