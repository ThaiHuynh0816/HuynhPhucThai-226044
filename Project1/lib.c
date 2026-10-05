#include "lib.h"
int tim_ucln(int a,int b)
{
    while (b != 0) // Sử dụng thuật toán euclid tìm ước chung lớn nhất
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int tim_bcnn(int a,int b) // Khi đã tìm đc ucln thì có thể tìm bcnn = (a x b)/ ucln(a,b)
{
    int ucln = tim_ucln( a, b);
    return (a * b)/ucln;
}