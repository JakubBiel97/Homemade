#include <stdio.h>


void square(int *x)
{
    int temp;
    temp = *x;
    *x = *x * *x;
}


int main()
{
    int x = 3;

    printf("Przed: %d", x);

    square(&x);

    printf("Po: %d", x);

    return 0;
}


