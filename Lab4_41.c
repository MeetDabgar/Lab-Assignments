/*41. READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int r=n%i;
        if (r == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}