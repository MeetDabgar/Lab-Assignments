/*PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER 
FILE(<MATH.H>)*/
#include<stdio.h>

int Power(int a,int b)
{
    if (b==0)
    {
        return 1;
    }
    else if (b==1)
    {
        return a;
    }
    else
    {
        return a*Power(a,b-1);
    }
    
}

int main()
{
    printf("The exponential power is %d",Power(5,5));
    
    return 0;
}