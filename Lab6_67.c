#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
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
            printf("Enter the %d,%d index of the array2:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr3[i][j]);
        }printf("\n");
    }
    return 0;
}