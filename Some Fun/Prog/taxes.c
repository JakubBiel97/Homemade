#include <stdio.h>

#define PAYRATE 12
#define OVERTIME 40
#define POD300 .15
#define POD150 .20
#define POD .25



int main()
{
    int workh;
    int moneyM;


    printf("Ile godzin pracowales w miesiacu?\n");
    scanf("%d", &workh);

    if(workh > OVERTIME)
    {
        int x;
        x = workh - OVERTIME;
        moneyM = OVERTIME * PAYRATE + x * 18;
    }
    else
        moneyM = workh * 12;

    printf("Zarobek bez podatkow: %d \n", moneyM);      //dziala

    //podatki

    double pod1, pod2, pod3;

    if(moneyM <= 300)
        pod1 = moneyM * POD300;
    else if(moneyM <= 450)
    {
        pod1 = 300 * POD300;
        pod2 = (moneyM - 300) * POD150;
    }
    else
    {
        pod1 = 300 * POD300;
        pod2 = 150 * POD150;
        pod3 = (moneyM - 450) * POD;
    }

    double sumaPod;
    sumaPod = pod1 + pod2 + pod3;

    printf("Podatki: %.2f, %.2f, %.2f. \nSuma podatkow wynosi: %.2f.", pod1, pod2, pod3, sumaPod);

    double money;
    money = moneyM - sumaPod;

    printf("\nPo odliczeniu podatkow zarobiles: %.2f $.", money);



    return 0;
}
