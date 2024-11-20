#include<stdio.h>
#include<string.h>
int main()
{
    int c = 1, l;
    int *ptr;
    ptr = &c;
    char string[100];
    gets(string);
    l = strlen(string);
    for (int i = 0; i < l; i++)
    {
        if (string[i] == ' ')
        {
            c++;
        }

    }
    printf("%d",*ptr);
    return 0;
}