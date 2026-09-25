#include<stdio.h>

int main()

{
 int age;
char name;
 printf("enter your name and age");
 scanf("%d,%c", &age , &name);

 if (age >= 18)
 {
    printf("congrats %c you are eligible" , name);
}
 else
 {


    printf("lataav");
}

return 0;
 
}
