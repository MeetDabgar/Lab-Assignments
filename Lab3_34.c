#include <stdio.h>
int main()
{
    int n, t1, t2, t3;
    printf("Enter the number:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Invalid input");
    }
    else if (n == 1)
    {
        printf("0");
    }
    else
    {
        printf("0,1,");
        t1 = 0;
        t2 = 1;
        for (int i = 2; i < n; i++)
        {
            t3 = t1 + t2;
            printf("%d,", t3);
            t1 = t2;
            t2 = t3;
        }
    }
}
