/*11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME*/

#include <stdio.h>

int main()
{
    int Secs;
    printf("Enter the Time in secs:\n");
    scanf("%d", &Secs);
    int Hours = Secs / 3600;
    int Res_hours = Secs - Hours * 3600;
    int Mins = Res_hours / 60;
    int Res_secs = Res_hours - Mins * 60;
    printf("The time is %dhours, %dMins and %dSeconds \n", Hours, Mins, Res_secs);

    return 0;
}