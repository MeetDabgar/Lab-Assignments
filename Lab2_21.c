/*21. PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).*/
#include<stdio.h>

int main()
{
    float x,y;
    char z;
    printf("Enter the numbers x and y:\n");
    scanf("%f%c%f",&x,&z,&y);
    
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