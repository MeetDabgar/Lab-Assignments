#include<stdio.h>
int palindrome(int x){
    int y = 0;
    int fix;
    fix = x;
    int c = 0;
    int i = 0;
    while (x>0)
    {
        x=x/10;
        c++;
    }
    x = fix;
    while (i<c)
    {
        y = y*10 + x%10;
        x = x/10;
        i++;
    }
    if (y == fix)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a Palindrome");
    }
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}