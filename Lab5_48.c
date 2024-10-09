/*
48)
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    return 0;
}