#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 平方根的迭代公式
 * */
int main()
{
    double a,xn,xn_1;
    printf("Please enter the number:\n");
    scanf("%lf",&a);        //double型一定要用%lf来进行输入
    xn = a/2;
    xn_1 = (xn + a/xn)/2;
    while (fabs(xn_1 - xn) >= 1e-5)
    {
        xn = xn_1;
        xn_1 = (xn + a/xn)/2;
    }
    printf("The result is %8.5f\n",xn_1);
    system("pause");
    return 0;
}