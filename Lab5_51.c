/*
51)
10000
01000
00100
00010
00001
*/
#include<stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("0");
        }
        
            printf("1");
        
        for (int l = rows - i -1; l > 0; l--)
        {
            printf("0");
        }
        printf("\n");
    }
    
    return 0;

}