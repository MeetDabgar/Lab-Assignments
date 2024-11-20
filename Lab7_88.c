#include<stdio.h>
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5];
    int *ptr;
    ptr = arr1;
    arr2[0] = *ptr;
    printf("%d",arr2[0]);
    return 0;
}