#include <stdio.h>
#include <stdlib.h>
/**
 * 输入两个实数，用一个函数求两数之和
 * */
float add(float,float);

int main()
{
    float a,b;
    float result;
    printf("Please enter two numbers:\n");
    scanf("%f %f",&a,&b);       //别因为经常写%d就很习惯都用%d
    result  = add(a,b);
    printf("The summary of two numbers = %f\n",result);
    system("pause");
    return 0;
}

float add(float x,float y)
{
    return x+y;
}