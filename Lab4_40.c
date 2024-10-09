/*40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
LIST OF NUMBERS READ*/
#include <stdio.h>

int main()
{
    int read, res = 0;
    while (read >= 0)
    {
        int a;
        printf("Enter the number:");
        scanf("%d", &a);
        read = a;
        res += a;
    }
    printf("%d",res);

    return 0;
}