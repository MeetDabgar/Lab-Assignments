// Program to check whether a no. is prime or not.
#include <stdio.h>
void main(){
    int n,c=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=1;i<=(n);i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==2){
        printf("%d is a PRIME NUMBER",n);
    }
    else{
        printf("%d is NOT PRIME NUMBER",n);
    }
}