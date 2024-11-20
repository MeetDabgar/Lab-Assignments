#include<stdio.h>
int Max(int array[]);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",Max(arr));
    
    return 0;
}
int Max(int array[])
{
    int i = 0,x = 0;
    int temp;
    // while (1)
    // {
    //     if (array[i] != '\0')
    //     {
    //         x++;
    //         i++;
    //     }
    //     else
    //     {
    //         break;  // 5 9 7 2 1
    //     }
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5-i; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }   
        }
    }
    return array[0];
}