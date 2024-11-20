#include<stdio.h>
#include<math.h>
int armstrong(int x){
    int fix;
    int y=0;
    fix = x;
    int c = 0;
    int sum =0;
    while (x>0)
    {
        x=x/10;
        c++;
    }printf("%d\n",c);
    x = fix;
    while (x>0)
    {
        y = x%10;
        sum = sum +pow(y,c);
        x = x/10;
    }printf("%d\n",sum);
    if (sum == fix)
    {
        printf("It is an Armstrong\n");
    }
    else
    {
        printf("It is not an Armstrong");
    }
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}