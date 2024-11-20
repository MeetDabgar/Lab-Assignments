#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    int *ptr;
    ptr = &x;
    printf("The square of the number is:%d\n",(*ptr)*(*ptr));
    printf("The cube of the number is:%d",(*ptr)*(*ptr)*(*ptr));
    
    return 0;
}