#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 使用矩形法求定积分的通用函数（切成小矩形，计算面积后求和）
 * */
int main()
{
    double definite_inte(int,double,double);

    int mod;
    double a,b;
    double result;
    printf("Please choose a modle you need(1,2,3):\n");
    scanf("%d",&mod);
    printf("Please enter the scope:\n");
    scanf("%lf %lf",&a,&b);
    result = definite_inte(mod,a,b);
    printf("The integral result is %lf\n",result);
    system("pause");
    return 0;
}

double definite_inte(int mod,double low_scope,double high_scope)
{
    double sum = 0;
    double n = 10000;       //将区间分割成10000个小区间
    double len = (high_scope - low_scope)/n;        //小区间宽度

    double (*p)(double);
    switch (mod)
    {
        case 1:
            p = sin;
            break;
        case 2:
            p = cos;
            break;
        case 3:
            p = exp;
            break;
    }
    for (double i = low_scope; i < high_scope;i+=len)
    {
        sum += (*p)(i)*len;
    }
    return sum;
}
