#include<stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d index of the array1:",i);
        scanf("%d",&arr1[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[4-i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = arr2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}