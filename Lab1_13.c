/*13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of the digit:\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The digit is Even");
    }
    else
    {
        printf("The digit is odd");
    }

    return 0;
}