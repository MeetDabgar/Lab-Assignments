#include<stdio.h>
int main()
{
    int arr[5] = {5,3,7,1,9} ;
    int a;
    printf("Enter the number you want to search: ");
    scanf("%d",&a);
    for (int i = 0; i < 5; i++)
    {
        if (a == arr[i])
        {
            printf("Your number if present at %d index\n",i);
        }
        
    }
    
    return 0;
}