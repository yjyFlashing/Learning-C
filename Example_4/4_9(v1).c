/**
 * 解二次方程完整版(不精确)
 * */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,disc,x1,x2,real,imag;
    printf("please input the equation 's a,b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    disc = b*b - 4*a*c;
    real = -b/(2*a);
    imag = sqrt(disc)/(2*a);
    if(disc > 0)
    {
        x1 = real + imag;
        x2 = real - imag;
        printf("The roots are %6.2lf and %6.2lf",x1,x2);
    }else if (disc == 0)        //有误差
    {
        x1 = real + imag;
        x2 = real - imag;
        if (x1 == x2)
        {
            printf("The roots are %6.2lf and %6.2lf",x1,x2);
        }
    }else
    {
        real = -b/(2*a);
        imag = sqrt(-disc)/(2*a);   //由于此时disc是负数，所以计算虚部应当要取绝对值
        printf("The roots are %6.2lf + %6.2lf i and %6.2lf - %6.2lf i",real,imag,real,imag);
    }
    system("pause");
    return 0;
}