/*4. PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE
DEGREES*/
#include <stdio.h>

int main()
{
    float Fahrenheit, Centigrade;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f", &Fahrenheit);
    Centigrade = (Fahrenheit - 32) * 5 / 9;
    printf("The temperature in centigrade is:%f", Centigrade);
    return 0;
}