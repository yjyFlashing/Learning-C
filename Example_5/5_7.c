#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 求PI的近似值
 * */
int main()
{
    double sum = 0,i = 0,fm;
    int sign = 1,num = 0;        //符号,运行次数
    while (fabs(1/fm) >= 1e-6)
    {  
        fm = (2*i+1)*sign;
        sum += 1/fm;
        sign  = sign*(-1);
        i++;
        num++;
    }
    printf("Pi = %10.8lf\nThe run time:%d\n",sum*4,num);
    system("pause");
    return 0;
}
