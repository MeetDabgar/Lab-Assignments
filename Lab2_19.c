/*19. PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE 
LETTER OR NOT USING CONDATIONAL OPERATOR.*/
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is alphabet and is in Lower Case\n");
    }
    else
    {
        printf("It is not in lower case");
    }
    
    return 0;
}