#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks:");{
    scanf("%d",&marks);}
    if(marks>=90 && marks<=100){
    printf("a+");}
    else if(marks>=70 && marks<90){
    printf("a");}
    else if(marks>100){
    printf("invalid marks");}
    else if(marks>=30 && marks<70){
    printf("b");}
    else 
    {printf("c");}
    return 0;
}