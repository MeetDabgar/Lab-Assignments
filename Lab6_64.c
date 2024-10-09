#include<stdio.h>
int main()
{
    int arr[3][3];
    int row1 = 0,row2 = 0,row3 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d,%d index of the array1:", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    for (int j = 0; j < 3; j++)
    {
        row1 += arr[0][j]; 
    }
    for (int j = 0; j < 3; j++)
    {
        row2 += arr[1][j]; 
    }
    for (int j = 0; j < 3; j++)
    {
        row3 += arr[2][j]; 
    }
    printf("The sum of 1st, 2nd, and 3rd rows are %d, %d and %d",row1,row2,row3);
    return 0;
}