/*26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    printf("The sum of all odd numbers is:%d\n",n*n);
    printf("The sum of all even numbers is:%d\n",n*(n+1));
    return 0;
}