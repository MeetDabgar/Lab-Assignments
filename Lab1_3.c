// 3. PROGRAM TO CALCULATE GROSS SALARY.
#include <stdio.h>

int main()
{
    int Basic_Salary, HRA, Others, Gross_Salary;
    printf("Enter the Basic salary:\n");
    scanf("%d", &Basic_Salary);
    printf("Enter the HRA:\n");
    scanf("%d", &HRA);
    printf("Enter the other allowances:\n");
    scanf("%d", &Others);
    Gross_Salary = Basic_Salary + HRA + Others;
    printf("The Gross Salary is:%d", Gross_Salary);
    return 0;
}