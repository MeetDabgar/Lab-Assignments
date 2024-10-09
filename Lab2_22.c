/*22. PROGRAM TO CALCULATE FACTORIAL OF A NO.*/
#include <stdio.h>

int Factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}

int main()
{
    int x;
    x = Factorial(5);
    printf("%d", x);
    return 0;
}