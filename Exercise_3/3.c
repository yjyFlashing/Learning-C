#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d = 300000,p = 6000,r = 0.01;
    float temp,m;
    temp = p/(p-d*r);
    m = log10(temp)/log10(1+r);
    printf("%6.2f",m);
    printf("%6.1f",m);  //%f的四舍五入是编译系统自动实现的
    system("pause");
    return 0;
}