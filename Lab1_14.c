/*14. PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is alphabet and is in Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is alphabet and is in Lower Case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit \n");
    }
    else
    {
        printf("The character is a special symbol");
    }

    return 0;
}