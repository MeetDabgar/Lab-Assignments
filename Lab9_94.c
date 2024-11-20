#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char name[4];
    char reverse[4];
    gets(name);
    char *ptr;
    strrev(name);
    printf("%s\n",name);
    ptr = name;
    while (*ptr != '\0')
    {
        reverse[i] = *ptr;
        ptr++;
        i++;
    }
    // puts(reverse);
    printf("%s",reverse);
    
    return 0;
}