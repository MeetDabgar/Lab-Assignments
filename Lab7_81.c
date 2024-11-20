#include<stdio.h>
int prime(int x);
int main()
{
    int n;
    int a;
    printf("Enter the number\n");
    scanf("%d",&n);
    a = prime(n);
    printf("%d",a);
    return 0;
}
int prime(int x)
{
    int c = 0;
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < x/2; i++)
    {
        if (x % i == 0)
        {
            c++;
        }
    }
    if (c >= 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    }
}