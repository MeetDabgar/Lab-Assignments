#include<stdio.h>
int main()
{
    int n,c;
    c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 2; i <=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
        
    }
    if (c==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }
    
}