#include<stdio.h>
char vowel(char c);
int main()
{
    char p;
    scanf("%c",&p);
    vowel(p);
    return 0;
}
char vowel(char c){
    int x = 0;
    char v[] = {'A','E','I','O','U','a','e','i','o','u'};
    for (int i = 0; i < 10; i++)
    {
        if (c == v[i])
        {
            x++;
            break;
        }
    }
    if (x == 0)
    {
        printf("Not Vowel");
    }
    else
    {
        printf("Vowel");
    }
    
    
}