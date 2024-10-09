/*24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING 
 
         1+x where n=1
         1+x/n where n=2
Y(x,n) = 1 +xn when n=3
         1 + nx when n>3 or n<1*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,n;
    printf("Enter the values of x and n:\n");
    scanf("%f,%f",&x,&n);
    if (n==1)
    {
        printf("%f",1+x);
    }
    else if (n==2)
    {
        printf("%f",1+x/n);
    }
    else if (n==3)
    {
        printf("%f",1+pow(x,n));
    }
    else if (n>3 || n<1)
    {
        printf("%f",1+x*n);
    }
    

    return 0;
}