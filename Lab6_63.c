#include <stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d,%d index of the array1:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int temp = arr[0][0],temp1 = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp < arr[i][j])
            temp = arr[i][j] ;
            if (temp1 > arr[i][j])
            temp1 = arr[i][j] ;
        }
    }

    printf("max value is %d\n", temp);
    printf("Min value is %d", temp1);

    
    return 0;
}