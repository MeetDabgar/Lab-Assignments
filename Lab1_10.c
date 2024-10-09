/*10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
FORMULA.
 CM = M/2+P/2+C/2+E
WHERE CM = Cut off mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100*/

#include <stdio.h>

int main()
{
    int M, P, C, E;
    float CM;
    printf("Enter marks of Mathematics:\n");
    scanf("%d", &M);
    printf("Enter marks of Physics:\n");
    scanf("%d", &P);
    printf("Enter marks of Chemistry:\n");
    scanf("%d", &C);
    printf("Enter marks of Entrance Exam:\n");
    scanf("%d", &E);
    CM = M / 2 + P / 2 + C / 2 + E;
    printf("The cut off marks is:\n%f", CM);
    return 0;
}