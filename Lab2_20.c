/*20. PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE*/
#include<stdio.h>

int main()
{
    char z;
    float x = 50;
    float y = 10;
    printf("Enter the operation:");
    scanf("%c",&z);
    
    switch (z)
    {
    case '+':
        printf("%f",x+y);
        break;
    case '-':
        printf("%f",x-y);
        break;
    case '*':
        printf("%f",x*y);
        break;
    case '/':
        printf("%.2f",x/y);
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}