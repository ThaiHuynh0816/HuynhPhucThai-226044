#include "lib.h"
int tim_ucln(int a, int b)
{
    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int tim_bcnn(int a, int b)
{
    int ucln = tim_ucln(a, b);
    return (a / ucln) * b;
}