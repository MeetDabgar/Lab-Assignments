/*5. PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a,b:\n");
    scanf("%d,%d", &a, &b);
    printf("The value of a,b:\n%d\n%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("The swaped values of A and B is:\n%d\n%d", a, b);
    return 0;
}