#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 牛顿迭代法求近似根
 * */
int main()
{
    double x0,x1,f,f1;      //f1为一阶导数
    x1 = 1.5;       //要求根在1.5附近，即要求以1.5为起点来逐步趋近
    do
    {
        x0 = x1;
        f = ((2*x0 - 4)*x0+3)*x0-6;
        f1 = (6*x0-8)*x0+3;
        x1 = x0 - f/f1;
    } while (fabs(x1 - x0)>=1e-5);       //x0和x1逐渐趋近
    printf("The root of equation is %5.2f\n",x1);
    system("pause");
    return 0;
}