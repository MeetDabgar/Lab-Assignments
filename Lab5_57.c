#include<stdio.h>
int main()
{
    int n;
    int a;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index of the array:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
            
        }
        
    }
    printf("The max no is: %d\n",arr[0]);
    printf("The second max no is: %d\n",arr[1]);
    return 0;
}