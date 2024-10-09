#include<stdio.h>
int main()
{
    int arr[10];
    int x=0,y=0,z=0,a=0;
    while (x<10)
    {
        printf("Enter the %d index value of the array:\n",x);
        scanf("%d",&arr[x]);
        x++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            y++;
        }
        else if (arr[i]>0)
        {
            z++;
        }
        else
        {
            a++;
        }
    }
    printf("The number of positive,negative and zero digits in the array are %d,%d and %d respectively.",z,a,y);
    return 0;
}