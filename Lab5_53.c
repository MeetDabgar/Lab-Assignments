/*
53)
    *
   ***
  *****
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
    int rows = 7;
    int z =(rows +1)/2;//z = 4
    int y =(rows -1)/2;//y = 3
    for (int i = 0; i < z; i++)
    {
        for (int j = z-i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i +1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = y; i > 0; i--)
    {
        for (int j = 0; j < y-i+2; j++)
        {
                printf(" ");
        }
        for (int k = 2*i -1; k > 0; k--)
        {
           printf("*");
        }
        printf("\n");
    }
        
    
    
    return 0;
}