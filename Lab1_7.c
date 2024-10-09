/*7. PROGRAM TO CALCULATE AREA OF A TRIANGLE*/
#include<stdio.h>
int main()
{
    float Base, Height, Area;
    printf("Enter the Base of the triangle:\n");
    scanf("%f", &Base);
    printf("Enter the Height of the triangle:\n");
    scanf("%f", &Height);
    Area = 0.5 * Base * Height;
    printf("The area of the Triangle is:\n%f", Area);

    return 0;
}