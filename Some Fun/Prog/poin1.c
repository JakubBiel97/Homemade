#include <stdio.h>

void reverse(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}


int main()
{
    int a = 3;
    int b = 5;

    printf("A: %d, B: %d\n\n",a ,b);

    reverse(a, b);

    printf("A: %d, B: %d",a ,b);



 /*   int a = 10;
    int *pa = &a;

    printf("Adres a %p\n\n", &a);
    printf("Wskaznik: %p\n\n", &pa);
    printf("Wartosc pod wskaznikiem: %d", *pa);     */



    return 0;
}
