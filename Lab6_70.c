#include<stdio.h>
int main()
{
    int arr[10] = {5,3,7,1,9,5,6,3,7,5} ;
    int a;
    int c = 0;
    printf("Enter the number you want to search: ");
    scanf("%d",&a);
    for (int i = 0; i < 10; i++)
    {
        if (a == arr[i])
        {
            c++;
        }
        
    }
    printf("Your number has occured %d times in the array",c);
    return 0;
}