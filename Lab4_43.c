/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
 If sales<=Rs. 500, commission is 5%
 If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
 If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
 If sales>5000, commission is 12.5%*/
 #include<stdio.h>

 int main()
 {
    float sales;
    printf("Enter the amount:\n");
    scanf("%f",&sales);
    if (sales <=500)
    {
        printf("commission:%f",sales*0.05);
    }
    else if (sales <=2000)
    {
        printf("commission:%f",35 + (sales -500)*0.1);
    }
    else if (sales <=5000)
    {
        printf("commission:%f",185 + (sales - 2000)*0.12);
    }
    else  
    {
        printf("commission:%f",sales*0.125);
    }
    return 0;
 }