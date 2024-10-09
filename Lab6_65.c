#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d,%d index of the array1:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr2[i][j]);
        }printf("\n");
    }
    return 0;
}