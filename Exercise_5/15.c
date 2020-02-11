#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 二分法求根,需要结合零点存在定理
 * */
int main()
{
    double scale_l = -10,scale_r = 10,scale_m,f_l,f_r,f_m;
    do
    {
        scale_m = (scale_r - scale_l)/2 + scale_l;      //求出区间中点
        /**
         * 求中点与端点的函数值
         * */
        f_l = ((2*scale_l - 4)*scale_l+3)*scale_l-6;
        f_m = ((2*scale_m - 4)*scale_m+3)*scale_m-6;
        f_r = ((2*scale_r - 4)*scale_r+3)*scale_r-6;    
        if (f_l*f_m <0)     //异号
        {
            scale_r = scale_m;
        }
        if (f_r*f_m <0 )    //异号
        {
            scale_l = scale_m;
        }
        if (f_m == 0)   //此时中点即为零点
        {
            break;
        }
    } while (fabs(scale_r - scale_l) >= 1e-5);      //精确度锁定
    printf("The root of equation is %6.2lf",scale_l);   //以区间左端点作为最终结果
    system("pause");
    return 0;
}