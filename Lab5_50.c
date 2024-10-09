/*
50)
A
BB
CCC
DDDD
*/
#include<stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",i +65);
        }
        printf("\n");
    }
    
    return 0;
}