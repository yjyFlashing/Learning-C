#include <stdio.h>
#include <stdlib.h>
/**
 * 用户自定义函数实现求最值（将max中定义的变量改成float型）
 * */
int max1(float,float);

int main()
{
    float x,y;
    int result;
    printf("Please enter two numbers:\n");
    scanf("%f %f",&x,&y);
    result = max1(x,y);
    printf("The maxium(function1) is %d\n",result);
    system("pause");
    return 0;
}

int max1(float a,float b)       //条件表达式实现
{
    float m;
    m = a > b? a : b;
    return m;           //实型转整型由系统自动完成
}