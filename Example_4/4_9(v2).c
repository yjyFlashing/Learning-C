/**
 * 解二次方程完整版(精确版)
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
    if (fabs(a)<=1e-6)   //若a = 0 则原方程不是二次方程
    {
        printf("The equation is not a quadratic\n");
    }else
    {
        disc = b*b-4*a*c;
        if(fabs(disc)<1e-6)     //若▲=0
        {
            printf("Two equal roots:%8.4lf\n",-b/(2*a));      //由韦达定理
        }else
        {
            if(disc > 1e-6)     //若▲ > 0
            {
                x1 = real+imag;
                x2 = real-imag;
                printf("The different roots:%8.4lf and %8.4lf",x1,x2);
            }else{                  //若▲ < 0
                imag = sqrt(-disc)/(2*a);   //由于此时disc是负数，所以计算虚部应当要取绝对值
                printf("The roots are %8.4lf + %8.4lf i and %8.4lf - %8.4lf i",real,imag,real,imag);
            }
        }
    }
    system("pause");
    return 0;
}