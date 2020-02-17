#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main()
{
    float rainfall[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3,2,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float sumM, sumY;
    int i, j;                                           // LEPIEJ NAZYWAÆ TAKIE ZMIENNE!!!!

    printf("YEAR\t\tRAINFALL   (inches)\n");

    for(i = 0; i < YEARS; i++)
    {
        for(sumM = 0, j = 0; j < MONTHS; j++)
        {
            sumM += rainfall[i][j];
        }
        printf("%d\t%15.1f\n",2010 + i, sumM);
        sumY += sumM;
    }

    printf("The yearly aerage is %.1f inches.\n\n",sumY/YEARS);

    printf("Monthly averages: \n\n");
    printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC\n");
    float avgM;

    for(i = 0; i < MONTHS; i++)
    {
        for(j = 0, avgM = 0; j < YEARS; j++)
            avgM += rainfall[j][i];

        printf("%.1f ", avgM/MONTHS);
    }
    printf("\n");

    return 0;
}
