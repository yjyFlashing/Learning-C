#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * 解二次方程
 * */
int main()
{
    float derta(float a,float b,float c);
    void beyondzero_derta(float a,float b,float derta);
    void zero_derta(float a,float b,float derta);
    void underzero_derta(float a,float b,float derta);
    float a,b,c,der;
    printf("Please enter the factors of the equation:\n");
    scanf("%f %f %f",&a,&b,&c);     //格式化输入的符号一定要对应，不然肯定会错
    der = derta(a,b,c);
    if (der == 0)
    {
        zero_derta(a,b,der);
    }else if(der > 0)
    {
        beyondzero_derta(a,b,der);
    }else
    {
        underzero_derta(a,b,der);
    }
    system("pause");
    return 0;
}

float derta(float a,float b,float c)          //求derta
{
    float res;
    res = b*b - 4*a*c;
    return res;
}

void beyondzero_derta(float a,float b,float derta)
{
    float root1,root2;
    root1 = (-1*b+sqrt(derta))/(2*a);
    root2 = (-1*b-sqrt(derta))/(2*a);
    printf("The different roots are %f and %f\n",root1,root2);
}

void zero_derta(float a,float b,float derta)
{
    float root;
    root = -b/(2*a);
    printf("The double equal roots are %f\n",root);
}

void underzero_derta(float a,float b,float derta)
{
    float real,image;
    derta = (-1)*derta;
    derta = sqrt(derta);
    real = (-1)*b/(2*a);
    image = derta/(2*a);
    printf("The root1 is %f + %f j\nThe root2 is %f - %f j\n",real,image,real,image);
}