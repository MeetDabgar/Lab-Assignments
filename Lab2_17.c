/*17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("A is max");
    }
    else if (b>a && b>c)
    {
        printf("B is max");
    }
    else
    {
        printf("C is max");
    }
    
    return 0;
}