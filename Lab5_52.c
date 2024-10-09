/*
52)
   1
  121
 12321
1234321
*/
#include<stdio.h>
int main()
{
    int rows =4;
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
        for (int x = i -1; x > 0; x--)
        {
            printf("%d",x);
        }
        
        printf("\n");
    }
    
    return 0;
}