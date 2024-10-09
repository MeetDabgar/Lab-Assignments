#include <stdio.h>
#include <math.h>

int main()
{
    int n = 153;
    int fix =n;
    int c = 0;
    int d;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }
    printf("%d\n", c);
    n=fix;
    int sum=0;

    while (n > 0)
    {
        d = n % 10;
        sum = sum + pow(d,c);
        n /= 10;
    }
    printf("%d\n", sum);
    n=fix;
    if (sum==fix)
    {
        printf("It is an armstrong number\n");
    }
    else
    {
        printf("It is not an armstrong number\n");
    }
    
    

    return 0;
}