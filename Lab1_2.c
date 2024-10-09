/*2.PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL
AND PERCENTAGE.*/
#include <stdio.h>

int main()
{
    int Maths, Physics, Chemistry, English, Computer, Total;
    float Percentage;
    printf("Enter the marks of Maths:\n");
    scanf("%d", &Maths);
    printf("Enter the marks of Physics:\n");
    scanf("%d", &Physics);
    printf("Enter the marks of Chemistry:\n");
    scanf("%d", &Chemistry);
    printf("Enter the marks of English:\n");
    scanf("%d", &English);
    printf("Enter the marks of Computer:\n");
    scanf("%d", &Computer);
    Total = (Maths + Physics + Chemistry + English + Computer);
    Percentage = Total / 5;
    printf("Your Total is : %d\n", Total);
    printf("Your percentage is: %f\n", Percentage);
    return 0;
}