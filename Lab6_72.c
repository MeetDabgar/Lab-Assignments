#include <stdio.h>
int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int N;
    int fix;
    fix = N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 0; i < 10; i++)
    {
        if (N + i > 9)
        {
            N = N - 10;
            arr2[i] = arr1[N + i];
        }
        else
        {
            arr2[i] = arr1[N + i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}