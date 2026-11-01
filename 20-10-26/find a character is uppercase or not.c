#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);
    if(character>='A' && character<='Z'){
        printf("The character is uppercase");
    }
    else if(character>='a' && character<='z'){
        printf("The character is lowercase");
    }
    else{
        printf("The character is neither uppercase nor lowercase");
    }
    return 0;
}