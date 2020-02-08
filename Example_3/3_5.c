#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main()
{
    double a,b,c,derta,p,q,x1,x2;
    printf("Please input the parameter of the equation a,b,c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    derta = b*b-4*a*c;
    
    if (derta >= 0)
    {
        printf("The right answer is:\n");
        derta = sqrt(derta);            //求derta
        p = (-b)/(2*a);
        q = derta/(2*a);
        x1 = p + q;                     //韦达定理
        x2 = p - q;
        printf("x1 = %7.2f\n x2 = %7.2f\n",x1,x2);  //格式化输出保留两位小数,数据占7位
    }else
    {
        printf("no real answer");        //无解
    }
    system("pause");
    return 0;  
}