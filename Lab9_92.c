#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }
    int *ptr = list;
    for (int i = 1; i < n; i++)
    {
        if (*ptr < list[i])
        {
            *ptr = list[i];
        }
    }
    printf("%d",*ptr);
    return 0;
}