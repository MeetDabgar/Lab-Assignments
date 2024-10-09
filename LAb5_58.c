#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d index of the array1:",i);
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d index of the array2:",i);
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr3[i]);
    }
    
    return 0;
}