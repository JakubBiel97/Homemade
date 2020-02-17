#include <stdio.h>


int gcd(int x, int y)
{
    int temp;

    while(y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
     return x;
}

float absoluteNumber(float a)
{
    float b;

    if(a < 0)
    {
        b = a * (-1);
        printf("Absolute number of %.1f is: %.1f.\n", a, b);
    }
    else
        printf("Absolute number of %.1f is %.1f", a, a);
}






int main()
{
    //int result;
    //result = gcd(114, 30);
    //printf("The gcd of 150 and 35 is %d.\n", result);

    //float a;
    //printf("Give me a number: ");
    //scanf("%f", &a);
    //absoluteNumber(a);



    return 0;
}
