/*8. EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C 
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES*/

#include<stdio.h>

int main()
{
    int Time = 31558150;
    int Days = Time/60/60/24; // 365 days
    int Res_Hours = Time - Days*60*60*24;//22150 secs or 6Hours
    int Hours = Res_Hours/60/60;// 6.152 Hours
    int Res_Mins = (Res_Hours - Hours*60*60);//
    int Mins = Res_Mins/60; 
    int Secs = Res_Mins - Mins*60;

    printf("The Earth takes exact %dDays %dMins and %dseconds to complete one revolution",Days, Mins, Secs);
    return 0;

}