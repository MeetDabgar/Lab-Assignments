#include<stdio.h>
int main()
{
    int arr[5];
    int a;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d index of the array1:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]>arr[j])
            {
                a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}