#include<stdio.h>
int main()
{
    int arr[10];
    int x=0,y=0,z=0;
    while (x<10)
    {
        printf("Enter the %d index value of the array:\n",x);
        scanf("%d",&arr[x]);
        x++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2 == 0)
        {
            y++;
        }
        else
        {
            z++;
        }
        
    }
    printf("The number of even and odd digits in the array are %d and %d respectively.",y,z);
    return 0;
}