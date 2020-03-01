#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 使用牛顿迭代法求根
 * */
int main()
{
    float Newton_roots(float x_obj);

    float x_obj,x_var;
    printf("Please enter the scope number:\n");
    scanf("%f",&x_obj);
    x_var = Newton_roots(x_obj);
    printf("The root close to %.2f is %f\n",x_obj,x_var);
    system("pause");
    return 0;
}

float Newton_roots(float x_obj)      //MARK以谁为范围中心，谁就是起点，然后逐步逼近
{
    float x,f,f_dev1;
    do
    {
        x = x_obj;
        f = ((x+2)*x + 3)*x + 4;
        f_dev1 = (3*x+4)*x+3;
        x_obj = x - f/f_dev1;
    } while (fabs(x - x_obj) >= 1e-3);
    return x;
}

