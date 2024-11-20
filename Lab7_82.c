#include<stdio.h>
int ncr(int n, int r);
int main()
{
    int a,b,x;
    printf("Enter the value of n and r:\n");
    scanf("%d %d",&a,&b);
    x = ncr(a,b);
    printf("%d",x);
    return 0;
}
int ncr(int n, int r)
{
    int p = 1,q = 1,s = 1;
    int c;
    if (r == 0)
    {
        return 1;
    }
    else if (r == 1)
    {
        return n;
    }
    else
    {
        for (int i = 1; i <= n; i++)
    {
        p = p*i;
    }
    for (int i = 1; i <= r; i++)
    {
        q = q*i;
    }
    for (int i = 1; i <= n-r; i++)
    {
        s = s*i;
    }
    c = p/(q*s);
    return c;
    }
}