#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double  a,b,c,disc,x1,x2,p,q;//double型变量，输出一定要用%lf
    printf("Please input the equation:\n");
    scanf("%lf %lf %lf",&a,&b,&c);     //寻址符号不要丢,如果变量使用double定义的话，使用%f进行输出的话，derta = 0
    disc = b*b-4*a*c;       //乘号不要丢
    printf("derta = %6.2lf\n",disc);
    if(disc >= 0)
    {
        p = -b/(2*a);           //分母括号不要丢
        q = sqrt(disc)/(2*a);
        x1 = p - q;
        x2 = p + q;
        printf("The real roots are x1 = %7.2lf and x2 = %7.2lf\n",x1,x2);   //小数点后第三位的四舍五入自动完成
    }else{
        printf("The equation has'nt real roots!!!\n");
    }
    system("pause");
    return 0;
}