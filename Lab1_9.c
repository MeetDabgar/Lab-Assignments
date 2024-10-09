/*9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.*/
#include<stdio.h>

int main()
{
    int Hour, Min, Sec, Total_Secs;
    printf("Enter the Time:\n");
    scanf("%d,%d,%d",&Hour,&Min, &Sec);
    Total_Secs = Hour*3600 + Min*60 + Sec;
    printf("The time in Secs is:%d", Total_Secs);
    return 0;
}
