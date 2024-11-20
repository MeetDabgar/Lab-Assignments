#include<stdio.h>
int even_or_odd(int x)
{
    if (x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    even_or_odd(a);

    return 0;
}