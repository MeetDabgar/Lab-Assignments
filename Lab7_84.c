#include<stdio.h>
void books();
void main()
{
    books();
}
void books()
{
    char book[3][100];
    printf("Name of the book:\n");
    gets(book[0]);
    printf("Name of the author of the book:\n");
    gets(book[1]);
    printf("Price of the book:\n");
    gets(book[2]);
    printf("Name of the book  is: %s\n",book[0]);
    printf("Name of the author of the book  is: %s\n",book[1]);
    printf("Price of the book  is: %s\n",book[2]);
    
}