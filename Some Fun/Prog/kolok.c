#include <stdio.h>
#include <math.h>


int main()
{
    int p,q,r,s,t, a = 20, b = 19;

    p = a & b;
    q = a || b;
    r = a ^ b;
    s = (b >> 2) | ~a;
    t = a;
    if(t == 20)
        t += (t++ > 22) && (++t > 1);

    printf("p = %d, q = %d, r = %d, s = %d, t = %d.", p,q,r,s,t);

    return 0;

}
