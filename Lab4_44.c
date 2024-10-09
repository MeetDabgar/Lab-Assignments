/*WRITE A PROGRAM IN C FOR THE FOLLOWING.
 AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS 
 FOLLOWS*/

 #include<stdio.h>

 int main()
 {
    float units;
    printf("ENter the number of units:\n");
    scanf("%f",&units);
    if (units <=200)
    {
        printf("The total price to be paid:%f",units*0.5);
    }
    else if (units <=400)
    {
        printf("The total price to be paid:%f",100 + (units - 200)*0.65);
    }
    else if (units <=600)
    {
        printf("The total price to be paid:%f",230 + (units - 400)*0.8);
    }
    else  
    {
        printf("The total price to be paid:%d",425 + (units - 600)*125);
    }
    return 0;
 }