/*15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION*/

#include<stdio.h>

int main()
{
    int Maths, Physics, Chemistry, English, Computer, Total;
    float Percentage;
    printf("Enter the marks of Maths:\n");
    scanf("%d",&Maths);
    printf("Enter the marks of Physics:\n");
    scanf("%d",&Physics);
    printf("Enter the marks of Chemistry:\n");
    scanf("%d",&Chemistry);
    printf("Enter the marks of English:\n");
    scanf("%d",&English);
    printf("Enter the marks of Computer:\n");
    scanf("%d",&Computer);
    Total = (Maths + Physics + Chemistry + English + Computer);
    Percentage = Total/5;
    printf("Your Percentage is %f %% \n", Percentage);
    if (Percentage>= 90)
    {
        printf("A Division");
    }
    else if (Percentage>=80 && Percentage<90)
    {
        printf("B Division");
    }
    else if (Percentage>=70 && Percentage<80)
    {
        printf("C Division");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}