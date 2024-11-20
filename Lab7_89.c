#include<stdio.h>
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5];
    int *ptr;
    for (int i = 0; i < 5; i++)
    {
        ptr = &arr1[i];
        arr2[4-i] = *ptr;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    return 0;
}