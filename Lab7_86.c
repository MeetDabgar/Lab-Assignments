#include<stdio.h>
#include<string.h>
int str_len(char arr[]);
int main(){
    int l;
    char name[100];
    gets(name);
    printf("%d",str_len(name));
    return 0;
}
int str_len(char arr[])
{int i = 0,t = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != ' ')
        {
            t++;
        }i++;
    }
    return t;
}
