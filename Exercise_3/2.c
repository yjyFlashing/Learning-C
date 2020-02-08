#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main()
{
    int model,n = 0;      //计算模式
    float p,r1 = 0.0414,r2 = 0.0468,r3 = 0.054,r5 = 0.0585,rh = 0.0072;       //各种存款年利率
    printf("Please input the figure model: ");
    scanf("%d",&model);
    switch (model)
    {
    case 1:     //一次存五年定期
        n = 5;
        p = 1000*(1+n*r5);
        break;
    case 2:     //先存两年，后存三年
        n = 2;
        p = 1000*(1+n*r2);
        n = 3;
        p = p*(1+n*r3);
        break;
    case 3:     //先三后二
        n = 3;
        p = 1000*(1+n*r3);
        n = 2;
        p = p*(1+n*r2);
        break;
    case 4:
        n = 5;  //连续存5个一年
        p = 1000*pow(1+r1,n);
        break;
    case 5:
        n = 5;  //活期存款
        p = 1000*pow(1+(rh/4),4*n);
        break;
    default:
        printf("No this model");
        break;
    }
    printf("model %d is %10.2f",model,p);
    system("pause");
    return 0;   
}
