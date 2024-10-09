// 1. Program to calculate Simple Interest
#include <stdio.h>

int main()
{
    float P,R,T,SI;
    printf("Enter the Principle Amount:\n");
    scanf("%f",&P);
    printf("Enter the Rate of Interest:\n");
    scanf("%f",&R);
    printf("Enter the Period of Time in Years:\n");
    scanf("%f",&T);
    SI=P*R*T/100;
    printf("The Simple Interest is:%f\n",SI);
    return 0;
}