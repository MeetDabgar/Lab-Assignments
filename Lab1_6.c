/*6. PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.*/
#include<stdio.h>

int main()
{
    int x,y;
    x = 5;
    y = 10;
    printf("The values of X and Y is:\n%d,%d\n",x,y);
    x = x-y;
    y = x+y;
    x = y-x;
    printf("The swaped values of X and Y are:\n%d,%d\n", x,y);

    return 0;
}