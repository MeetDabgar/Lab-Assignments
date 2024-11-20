#include<stdio.h>
int exchange(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    printf("%d,%d",x,y);
}
int main()
{
    int a,b;
    printf("Enter your numbers: ");
    scanf("%d, %d",&a,&b);
    exchange(a,b);
    return 0;
}