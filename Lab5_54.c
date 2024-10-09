#include<stdio.h>
int main()
{
    int arr[10];
    int x =0;
    int j=0;
    while (x<10)
    {
        printf("Enter the %d index value of the array:\n",x);
        scanf("%d",&arr[x]);
        x++;
    }
    for (int i = 0; i < 10; i++)
    {
        j+=arr[i];
    }
    printf("%d",j);
    return 0;
}