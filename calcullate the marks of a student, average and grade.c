#include<stdio.h>
int main()
{
    int n, i;
    float marks[100], sum = 0, average;
    char grade;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / n;

    if(average >= 90)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}