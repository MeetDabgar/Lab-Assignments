/*16. PROGRAM TO READ THREE NOS. AND PRINT MAX*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;

    printf("Enter the value of X:\n");
    scanf("%d", &x);
    printf("Enter the value of Y:\n");
    scanf("%d", &y);
    printf("Enter the value of Z:\n");
    scanf("%d", &z);
    // if (x > y)
    // {
    //     if (x > z)
    //     {
    //         printf("1.The max is:x");
    //     }
    //     else
    //     {
    //         printf("2.The max is:z");
    //     }
    // }
    // else
    // {
    //     if (y > z)
    //     {
    //         printf("3.The max is:Y");
    //     }
    //     else
    //     {
    //         printf("4.The max is:Z");
    //     }
    // }

    int largest = fmax(fmax(x, y), z);
    printf("Max of z,y,z is %d:", largest);
    return 0;
}