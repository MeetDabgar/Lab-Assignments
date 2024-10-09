/*18. PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) 
OPERATOR.*/
#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the number:");
    scanf("%d",&y);
    printf("Enter the number:");
    scanf("%d",&z);
    (x>y)?((x>z)?(printf("X is greatest.")):printf("Z is greatest.")):((y>z)?(printf("Y is the greatest.")):printf("Z is greatest."));

    return 0;
}